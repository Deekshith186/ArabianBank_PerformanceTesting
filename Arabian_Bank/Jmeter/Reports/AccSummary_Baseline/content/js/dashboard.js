/*
   Licensed to the Apache Software Foundation (ASF) under one or more
   contributor license agreements.  See the NOTICE file distributed with
   this work for additional information regarding copyright ownership.
   The ASF licenses this file to You under the Apache License, Version 2.0
   (the "License"); you may not use this file except in compliance with
   the License.  You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
var showControllersOnly = false;
var seriesFilter = "";
var filtersOnlySampleSeries = true;

/*
 * Add header in statistics table to group metrics by category
 * format
 *
 */
function summaryTableHeader(header) {
    var newRow = header.insertRow(-1);
    newRow.className = "tablesorter-no-sort";
    var cell = document.createElement('th');
    cell.setAttribute("data-sorter", false);
    cell.colSpan = 1;
    cell.innerHTML = "Requests";
    newRow.appendChild(cell);

    cell = document.createElement('th');
    cell.setAttribute("data-sorter", false);
    cell.colSpan = 3;
    cell.innerHTML = "Executions";
    newRow.appendChild(cell);

    cell = document.createElement('th');
    cell.setAttribute("data-sorter", false);
    cell.colSpan = 7;
    cell.innerHTML = "Response Times (ms)";
    newRow.appendChild(cell);

    cell = document.createElement('th');
    cell.setAttribute("data-sorter", false);
    cell.colSpan = 1;
    cell.innerHTML = "Throughput";
    newRow.appendChild(cell);

    cell = document.createElement('th');
    cell.setAttribute("data-sorter", false);
    cell.colSpan = 2;
    cell.innerHTML = "Network (KB/sec)";
    newRow.appendChild(cell);
}

/*
 * Populates the table identified by id parameter with the specified data and
 * format
 *
 */
function createTable(table, info, formatter, defaultSorts, seriesIndex, headerCreator) {
    var tableRef = table[0];

    // Create header and populate it with data.titles array
    var header = tableRef.createTHead();

    // Call callback is available
    if(headerCreator) {
        headerCreator(header);
    }

    var newRow = header.insertRow(-1);
    for (var index = 0; index < info.titles.length; index++) {
        var cell = document.createElement('th');
        cell.innerHTML = info.titles[index];
        newRow.appendChild(cell);
    }

    var tBody;

    // Create overall body if defined
    if(info.overall){
        tBody = document.createElement('tbody');
        tBody.className = "tablesorter-no-sort";
        tableRef.appendChild(tBody);
        var newRow = tBody.insertRow(-1);
        var data = info.overall.data;
        for(var index=0;index < data.length; index++){
            var cell = newRow.insertCell(-1);
            cell.innerHTML = formatter ? formatter(index, data[index]): data[index];
        }
    }

    // Create regular body
    tBody = document.createElement('tbody');
    tableRef.appendChild(tBody);

    var regexp;
    if(seriesFilter) {
        regexp = new RegExp(seriesFilter, 'i');
    }
    // Populate body with data.items array
    for(var index=0; index < info.items.length; index++){
        var item = info.items[index];
        if((!regexp || filtersOnlySampleSeries && !info.supportsControllersDiscrimination || regexp.test(item.data[seriesIndex]))
                &&
                (!showControllersOnly || !info.supportsControllersDiscrimination || item.isController)){
            if(item.data.length > 0) {
                var newRow = tBody.insertRow(-1);
                for(var col=0; col < item.data.length; col++){
                    var cell = newRow.insertCell(-1);
                    cell.innerHTML = formatter ? formatter(col, item.data[col]) : item.data[col];
                }
            }
        }
    }

    // Add support of columns sort
    table.tablesorter({sortList : defaultSorts});
}

$(document).ready(function() {

    // Customize table sorter default options
    $.extend( $.tablesorter.defaults, {
        theme: 'blue',
        cssInfoBlock: "tablesorter-no-sort",
        widthFixed: true,
        widgets: ['zebra']
    });

    var data = {"OkPercent": 86.10687022900764, "KoPercent": 13.893129770992367};
    var dataset = [
        {
            "label" : "FAIL",
            "data" : data.KoPercent,
            "color" : "#FF6347"
        },
        {
            "label" : "PASS",
            "data" : data.OkPercent,
            "color" : "#9ACD32"
        }];
    $.plot($("#flot-requests-summary"), dataset, {
        series : {
            pie : {
                show : true,
                radius : 1,
                label : {
                    show : true,
                    radius : 3 / 4,
                    formatter : function(label, series) {
                        return '<div style="font-size:8pt;text-align:center;padding:2px;color:white;">'
                            + label
                            + '<br/>'
                            + Math.round10(series.percent, -2)
                            + '%</div>';
                    },
                    background : {
                        opacity : 0.5,
                        color : '#000'
                    }
                }
            }
        },
        legend : {
            show : true
        }
    });

    // Creates APDEX table
    createTable($("#apdexTable"), {"supportsControllersDiscrimination": true, "overall": {"data": [0.8061767838125665, 500, 1500, "Total"], "isController": false}, "titles": ["Apdex", "T (Toleration threshold)", "F (Frustration threshold)", "Label"], "items": [{"data": [0.028469750889679714, 500, 1500, "AB_AccountSummary_T05_ViewAccountSummary "], "isController": true}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T02_AccessPersonalBanking-37"], "isController": false}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T04_SelectAccount "], "isController": true}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T01_Launch "], "isController": true}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T03_UserLogin "], "isController": true}, {"data": [0.017985611510791366, 500, 1500, "AB_AccountSummary_T05_ViewAccountSummary -72"], "isController": false}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T05_ViewAccountSummary -72-1"], "isController": false}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T06_UserLogout -78"], "isController": false}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T04_SelectAccount -66"], "isController": false}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T02_AccessPersonalBanking "], "isController": true}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T03_UserLogin -54"], "isController": false}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T06_UserLogout "], "isController": true}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T04_SelectAccount -66-1"], "isController": false}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T04_SelectAccount -66-0"], "isController": false}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T01_Launch -1"], "isController": false}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T05_ViewAccountSummary -72-0"], "isController": false}, {"data": [1.0, 500, 1500, "AB_AccountSummary_T01_Launch -0"], "isController": false}]}, function(index, item){
        switch(index){
            case 0:
                item = item.toFixed(3);
                break;
            case 1:
            case 2:
                item = formatDuration(item);
                break;
        }
        return item;
    }, [[0, 0]], 3);

    // Create statistics table
    createTable($("#statisticsTable"), {"supportsControllersDiscrimination": true, "overall": {"data": ["Total", 1965, 273, 13.893129770992367, 16.82035623409668, 0, 340, 14.0, 33.0, 37.0, 65.67999999999984, 3.276228585719645, 5.935469616210246, 2.1304457270434747], "isController": false}, "titles": ["Label", "#Samples", "FAIL", "Error %", "Average", "Min", "Max", "Median", "90th pct", "95th pct", "99th pct", "Transactions/s", "Received", "Sent"], "items": [{"data": ["AB_AccountSummary_T05_ViewAccountSummary ", 281, 273, 97.15302491103203, 26.97153024911033, 0, 140, 26.0, 39.80000000000001, 50.799999999999955, 78.90000000000003, 0.47530124965325, 1.2338037081954791, 0.4428182123894629], "isController": true}, {"data": ["AB_AccountSummary_T02_AccessPersonalBanking-37", 5, 0, 0.0, 67.4, 7, 270, 22.0, 270.0, 270.0, 270.0, 0.7316359379572724, 1.9298326840064386, 0.35009922812408545], "isController": false}, {"data": ["AB_AccountSummary_T04_SelectAccount ", 283, 0, 0.0, 24.27208480565371, 0, 340, 18.0, 37.0, 39.0, 131.76000000000403, 0.4757701845080486, 1.266437345017442, 0.5162183336485521], "isController": true}, {"data": ["AB_AccountSummary_T01_Launch ", 10, 0, 0.0, 72.4, 55, 106, 72.0, 106.0, 106.0, 106.0, 1.2403870007442324, 3.8871112161994543, 0.853977378442074], "isController": true}, {"data": ["AB_AccountSummary_T03_UserLogin ", 5, 0, 0.0, 47.2, 35, 68, 44.0, 68.0, 68.0, 68.0, 0.7578053955744165, 2.2652756990754774, 0.5254314754471052], "isController": true}, {"data": ["AB_AccountSummary_T05_ViewAccountSummary -72", 278, 273, 98.20143884892086, 27.262589928057565, 7, 140, 27.0, 40.099999999999994, 51.05000000000001, 79.0499999999999, 0.4773917239508115, 1.2526032230810311, 0.44956545064147363], "isController": false}, {"data": ["AB_AccountSummary_T05_ViewAccountSummary -72-1", 273, 0, 0.0, 9.417582417582413, 3, 32, 7.0, 17.0, 19.0, 32.0, 0.4756569903283079, 0.9982293673979821, 0.2243577405552468], "isController": false}, {"data": ["AB_AccountSummary_T06_UserLogout -78", 278, 0, 0.0, 14.212230215827333, 3, 51, 12.0, 23.0, 26.0, 39.309999999999775, 0.47642877218478585, 1.0003143165989155, 0.22704808674431198], "isController": false}, {"data": ["AB_AccountSummary_T04_SelectAccount -66", 281, 0, 0.0, 24.444839857651242, 7, 340, 18.0, 37.0, 39.0, 134.9800000000011, 0.4750272591265246, 1.2734594895570075, 0.5190806621854636], "isController": false}, {"data": ["AB_AccountSummary_T02_AccessPersonalBanking ", 5, 0, 0.0, 67.4, 7, 270, 22.0, 270.0, 270.0, 270.0, 0.6294850812035755, 1.660389847979353, 0.3012184470603047], "isController": true}, {"data": ["AB_AccountSummary_T03_UserLogin -54", 5, 0, 0.0, 47.2, 35, 68, 44.0, 68.0, 68.0, 68.0, 0.573921028466483, 1.7155979181014693, 0.3979335255968779], "isController": false}, {"data": ["AB_AccountSummary_T06_UserLogout ", 278, 0, 0.0, 14.212230215827333, 3, 51, 12.0, 23.0, 26.0, 39.309999999999775, 0.4779062891092377, 1.0034165249852158, 0.2277522159036211], "isController": true}, {"data": ["AB_AccountSummary_T04_SelectAccount -66-1", 276, 0, 0.0, 9.688405797101453, 2, 31, 7.0, 17.0, 19.149999999999977, 29.0, 0.474779898231961, 0.996388673145004, 0.2614998658230722], "isController": false}, {"data": ["AB_AccountSummary_T04_SelectAccount -66-0", 276, 0, 0.0, 12.30797101449275, 4, 98, 9.0, 20.0, 22.0, 58.15000000000009, 0.47478479862931694, 0.2684574203187251, 0.2619662218999649], "isController": false}, {"data": ["AB_AccountSummary_T01_Launch -1", 5, 0, 0.0, 14.0, 7, 19, 16.0, 19.0, 19.0, 19.0, 0.6285355122564426, 1.7125137492143305, 0.21667288654934003], "isController": false}, {"data": ["AB_AccountSummary_T05_ViewAccountSummary -72-0", 273, 0, 0.0, 17.289377289377295, 4, 132, 17.0, 26.0, 33.0, 56.93999999999983, 0.47566444922238443, 0.21925158206344283, 0.22761287120993007], "isController": false}, {"data": ["AB_AccountSummary_T01_Launch -0", 5, 0, 0.0, 57.2, 36, 99, 52.0, 99.0, 99.0, 99.0, 0.625, 0.2557373046875, 0.21484375], "isController": false}]}, function(index, item){
        switch(index){
            // Errors pct
            case 3:
                item = item.toFixed(2) + '%';
                break;
            // Mean
            case 4:
            // Mean
            case 7:
            // Median
            case 8:
            // Percentile 1
            case 9:
            // Percentile 2
            case 10:
            // Percentile 3
            case 11:
            // Throughput
            case 12:
            // Kbytes/s
            case 13:
            // Sent Kbytes/s
                item = item.toFixed(2);
                break;
        }
        return item;
    }, [[0, 0]], 0, summaryTableHeader);

    // Create error table
    createTable($("#errorsTable"), {"supportsControllersDiscrimination": false, "titles": ["Type of error", "Number of errors", "% in errors", "% in all samples"], "items": [{"data": ["Cheque_NOT_FOUND", 273, 100.0, 13.893129770992367], "isController": false}]}, function(index, item){
        switch(index){
            case 2:
            case 3:
                item = item.toFixed(2) + '%';
                break;
        }
        return item;
    }, [[1, 1]]);

        // Create top5 errors by sampler
    createTable($("#top5ErrorsBySamplerTable"), {"supportsControllersDiscrimination": false, "overall": {"data": ["Total", 1965, 273, "Cheque_NOT_FOUND", 273, "", "", "", "", "", "", "", ""], "isController": false}, "titles": ["Sample", "#Samples", "#Errors", "Error", "#Errors", "Error", "#Errors", "Error", "#Errors", "Error", "#Errors", "Error", "#Errors"], "items": [{"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": ["AB_AccountSummary_T05_ViewAccountSummary -72", 278, 273, "Cheque_NOT_FOUND", 273, "", "", "", "", "", "", "", ""], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}]}, function(index, item){
        return item;
    }, [[0, 0]], 0);

});
