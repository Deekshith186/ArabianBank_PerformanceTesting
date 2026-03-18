Action()
{
	
    lr_start_transaction("AB_Statements_T01_Launch");
    
    web_reg_find("Text=Welcome To LoanIQ",
		LAST);
    
	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("LoanIQ", 
		"URL=http://{p_host}:{p_port}/LoanIQ/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_end_transaction("AB_Statements_T01_Launch",LR_AUTO);

	lr_think_time(3);
	
	lr_start_transaction("AB_Statements_T02_AccessPersonalBanking");
	
	web_reg_find("Text=Forgot Password?", 
		LAST);
	
	web_reg_save_param(
	    "c_JSESSIONID",
	    "LB=Login?JSESSIONID=",
	    "RB=\"",
	    LAST);

	web_url("personal.JPG", 
		"URL=http://{p_host}:{p_port}/LoanIQ/login.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_Statements_T02_AccessPersonalBanking",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_Statements_T03_UserLogin");
    
	web_reg_find("Text=Welcome",
		LAST);
	
	web_submit_data("Login", 
		"Action=http://{p_host}:{p_port}/LoanIQ/Login?JSESSIONID={c_JSESSIONID}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/login.jsp", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=accno", "Value={p_accno}", ENDITEM, 
		"Name=password", "Value={p_password}", ENDITEM, 
		"Name=x", "Value=13", ENDITEM, 
		"Name=y", "Value=8", ENDITEM, 
		LAST);

	lr_end_transaction("AB_Statements_T03_UserLogin",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_Statements_T04_SelectAccount");
	
	web_reg_find("Text=Account", 
		LAST);

	web_url("Accounts.JPG", 
		"URL=http://{p_host}:{p_port}/LoanIQ/accounts.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/Login?JSESSIONID={c_JSESSIONID}", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_Statements_T04_SelectAccount",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_Statements_T05_SelectStatements");
	
	web_reg_find("Text=Statements", 
		LAST);

	web_url("Statements", 
		"URL=http://{p_host}:{p_port}/LoanIQ/stmt.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/accounts.jsp", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_Statements_T05_SelectStatements",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_Statements_T06_SelectDetailedStatements");
		
	web_reg_find("Text=FormType", 
	LAST);
	
	web_reg_save_param(
	    "c_accno",
	    "LB=<input name=\"type1\" type=\"hidden\" value=",
	    "RB=>",
	    LAST);
	
	// selecting the file format
	web_reg_save_param_regexp(
    "ParamName=c_filetype",
    "RegExp=<option value=\"(pdf|xls|html|doc)\">",
    "Group=1",
    "Ordinal=All",
    LAST);

	
	web_url("Detailed-statement", 
		"URL=http://{p_host}:{p_port}/LoanIQ/Statements.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/stmt.jsp", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_save_string(lr_paramarr_random("c_filetype"), "c_Randomfiletype");
	
	lr_end_transaction("AB_Statements_T06_SelectDetailedStatements",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("AB_Statements_T07_Choose_dates");
	
	web_reg_find("Search=Headers", "Text=downloadfilename.{c_Randomfiletype}", LAST);
	

	// End Date = Today
    lr_save_datetime("%d", DATE_NOW, "EDAY");
    lr_save_datetime("%m", DATE_NOW, "EMON");
    lr_save_datetime("%Y", DATE_NOW, "EYEAR");

    // 6 Months Back ˜ 180 Days (in seconds)
    // 180 days × 24 × 60 × 60 = 15552000 seconds

    lr_save_datetime("%d", DATE_NOW - 15552000, "BDAY");
    lr_save_datetime("%m", DATE_NOW - 15552000, "BMON");
    lr_save_datetime("%Y", DATE_NOW - 15552000, "BYEAR");
    
	web_submit_data("Test", 
		"Action=http://{p_host}:{p_port}/LoanIQ/Test", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/octet-stream", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/Statements.jsp", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=bday", "Value={BDAY}", ENDITEM, 
		"Name=bmon", "Value={BMON}", ENDITEM, 
		"Name=byear", "Value={BYEAR}", ENDITEM, 
		"Name=eday", "Value={EDAY}", ENDITEM, 
		"Name=emon", "Value={EMON}", ENDITEM, 
		"Name=eyear", "Value={EYEAR}", ENDITEM, 
		"Name=type", "Value={c_Randomfiletype}", ENDITEM, 
		"Name=type1", "Value={c_accno}", ENDITEM, 
		LAST);
	
	lr_end_transaction("AB_Statements_T07_Choose_dates",LR_AUTO);
	
	lr_think_time(3);
	
	lr_start_transaction("AB_Statements_T08_UserLogout");
	
	web_reg_find("Text=You Are Successfully Logged Out", 
		LAST);

	web_url("Logout.jsp", 
		"URL=http://{p_host}:{p_port}/LoanIQ/Logout.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/Statements.jsp", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	

	lr_end_transaction("AB_Statements_T08_UserLogout",LR_AUTO);

	return 0;
}