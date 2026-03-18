vuser_end()
{
	lr_start_transaction("AB_AccountSummary_T06_UserLogout");
	
	web_reg_find("Text=Logged Out", "Fail=NotFound",
		LAST);

	web_url("Logout.jsp", 
		"URL=http://{host}:{port}/LoanIQ/Logout.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/LoanIQ/AccountSummary.jsp", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_AccountSummary_T06_UserLogout",LR_AUTO);
	
	return 0;
}
