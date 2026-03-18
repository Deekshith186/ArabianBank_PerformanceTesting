Action()
{

	web_reg_find("Text=Welcome To LoanIQ", 
		LAST);

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("LoanIQ", 
		"URL=http://192.168.1.2:7001/LoanIQ/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_start_transaction("AB_Statements_T01_Launch");

	lr_end_transaction("AB_Statements_T01_Launch",LR_AUTO);

	lr_start_transaction("AB_Statements_T02_AccessPersonalBanking");

	web_reg_find("Text=Welcome To LoanIQ", 
		LAST);

	lr_think_time(11);

	web_url("personal.JPG", 
		"URL=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_Statements_T02_AccessPersonalBanking",LR_AUTO);

	lr_start_transaction("AB_Statements_T03_UserLogin");

	web_reg_find("Text=LoanIQ: Customerhome", 
		LAST);

	lr_think_time(12);

	web_submit_data("Login", 
		"Action=http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=Vwqe9Ed501S3rs75pRG3G8JSxanlGahtHRz2YtktP7S2K6Shp2_w!-380725588!1772193335161", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=accno", "Value=IQ14285", ENDITEM, 
		"Name=password", "Value=Akon@186", ENDITEM, 
		"Name=x", "Value=13", ENDITEM, 
		"Name=y", "Value=8", ENDITEM, 
		LAST);

	lr_end_transaction("AB_Statements_T03_UserLogin",LR_AUTO);

	lr_start_transaction("AB_Statements_T04_SelectAccount");

	web_reg_find("Text=LoanIQ: Accounts", 
		LAST);

	lr_think_time(22);

	web_url("Accounts.JPG", 
		"URL=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=Vwqe9Ed501S3rs75pRG3G8JSxanlGahtHRz2YtktP7S2K6Shp2_w!-380725588!1772193335161", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_Statements_T04_SelectAccount",LR_AUTO);

	lr_start_transaction("AB_Statements_T05_SelectStatements");

	web_reg_find("Text=LoanIQ: Statements", 
		LAST);

	lr_think_time(24);

	web_url("Statements", 
		"URL=http://192.168.1.2:7001/LoanIQ/stmt.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_Statements_T05_SelectStatements",LR_AUTO);

	lr_start_transaction("AB_Statements_T06_SelectDetailedStatements");

	web_reg_find("Text=LoanIQ: StatusReport", 
		LAST);

	lr_think_time(25);

	web_url("Detailed-statement", 
		"URL=http://192.168.1.2:7001/LoanIQ/Statements.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/stmt.jsp", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_Statements_T06_SelectDetailedStatements",LR_AUTO);

	lr_think_time(43);

	lr_start_transaction("AB_Statements_T07_Choose_dates");

	web_submit_data("Test", 
		"Action=http://192.168.1.2:7001/LoanIQ/Test", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/octet-stream", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Statements.jsp", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=bday", "Value=27", ENDITEM, 
		"Name=bmon", "Value=7", ENDITEM, 
		"Name=byear", "Value=2025", ENDITEM, 
		"Name=eday", "Value=27", ENDITEM, 
		"Name=emon", "Value=0", ENDITEM, 
		"Name=eyear", "Value=2026", ENDITEM, 
		"Name=type", "Value=doc", ENDITEM, 
		"Name=type1", "Value=IQ14285", ENDITEM, 
		LAST);

	lr_end_transaction("AB_Statements_T07_Choose_dates",LR_AUTO);

	lr_start_transaction("AB_Statements_T08_UserLogout");

	web_reg_find("Text=LoanIQ : Logout", 
		LAST);

	lr_think_time(37);

	web_url("Logout.jsp", 
		"URL=http://192.168.1.2:7001/LoanIQ/Logout.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Statements.jsp", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_Statements_T08_UserLogout",LR_AUTO);

	return 0;
}