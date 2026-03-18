vuser_init()
{
  lr_start_transaction("AB_AccountSummary_T01_Launch");

   web_reg_find("Text=Welcome To LoanIQ", "Fail=NotFound", 
		LAST);
   
	web_url("LoanIQ", 
		"URL=http://{host}:{port}/LoanIQ/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML",
		LAST);

	lr_end_transaction("AB_AccountSummary_T01_Launch", LR_AUTO);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_think_time(5);

	lr_start_transaction("AB_AccountSummary_T02_AccessPersonalBanking");
	
	web_reg_save_param(
    "c_JSESSIONID",
    "LB=action=\"./Login?JSESSIONID=",
    "RB=\"",
    LAST);
	
	web_reg_find("Text=Password", "Fail=NotFound",
		LAST);

	web_url("login.jsp", 
		"URL=http://{host}:{port}/LoanIQ/login.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/LoanIQ/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_AccountSummary_T02_AccessPersonalBanking",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("AB_AccountSummary_T03_UserLogin");
	
	web_reg_find("Text=Welcome", "Fail=NotFound",
		LAST);

	web_submit_data("Login", 
		"Action=http://{host}:{port}/LoanIQ/Login?JSESSIONID={c_JSESSIONID}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/LoanIQ/login.jsp", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=accno", "Value={p_accno}", ENDITEM, 
		"Name=password", "Value={p_password}", ENDITEM, 
		"Name=x", "Value=40", ENDITEM, 
		"Name=y", "Value=14", ENDITEM, 
		LAST);

	lr_end_transaction("AB_AccountSummary_T03_UserLogin",LR_AUTO);
    
	lr_think_time(5);
	
	return 0;
}
