Action()
{

	int balance;
	
	lr_start_transaction("AB_FundTransfer_T01_Launch");
	
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

	lr_end_transaction("AB_FundTransfer_T01_Launch",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_FundTransfer_T02_AccessPersonalBanking");

	web_reg_find("Text=Forgot Password?", 
		LAST);
	
    c_JSESSIONID();

	web_url("personal.JPG", 
		"URL=http://{p_host}:{p_port}/LoanIQ/login.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T02_AccessPersonalBanking",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_FundTransfer_T03_UserLogin");
	
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
		"Name=x", "Value=47", ENDITEM, 
		"Name=y", "Value=18", ENDITEM, 
		LAST);

	lr_end_transaction("AB_FundTransfer_T03_UserLogin",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("AB_FundTransfer_T04_SelectAccount");
	
	web_reg_find("Text=Fund", 
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

	lr_end_transaction("AB_FundTransfer_T04_SelectAccount",LR_AUTO);

	lr_think_time(5);
	
	lr_start_transaction("AB_FundTransfer_T05_ViewAccountSummary");
	
	web_reg_find("Text=Personal Profile", 
		LAST);

	c_Balance();
	
	web_url("Account Summary", 
		"URL=http://{p_host}:{p_port}/LoanIQ/AccountSummary.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/accounts.jsp", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T05_ViewAccountSummary",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_FundTransfer_T06_SelectAccountAgain");

	web_url("Accounts", 
		"URL=http://{p_host}:{p_port}/LoanIQ/accounts.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/AccountSummary.jsp", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T06_SelectAccountAgain",LR_AUTO);
	
	lr_think_time(3);
	
	balance = atoi(lr_eval_string("{c_Balance}"));
	
	if(balance > 1000)
    {

	lr_start_transaction("AB_FundTransfer_T07_SelectFundTransfer");

	web_reg_find("Text=Bank to Bank Transfer", 
		LAST);
	
	web_url("Fund Transfer", 
		"URL=http://{p_host}:{p_port}/LoanIQ/FundTransfer.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/accounts.jsp", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T07_SelectFundTransfer",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_FundTransfer_T08_SelectBankToBankTransfer");
	
	web_reg_find("Text=Account", 
		LAST);

	web_url("Bank to Bank Transfer", 
		"URL=http://{p_host}:{p_port}/LoanIQ/fund.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/FundTransfer.jsp", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T08_SelectBankToBankTransfer",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_FundTransfer_T09_AccountReview");


	c_tAccountNumber();
	
	c_tAccountName();
	
	c_tAccountType();
	
	c_tAddress();

	c_tCity();
	
	c_tPhoneNo();
	
	c_tEmail();
	
	web_url("showdet.jsp", 
		"URL=http://{p_host}:{p_port}/LoanIQ/showdet.jsp?taccno={p_taccno}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/fund.jsp", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T09_AccountReview",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("AB_FundTransfer_T10_SubmitAccount");
	
	web_reg_find("Text=Amount:", 
		LAST);

	web_submit_data("fund1.jsp", 
		"Action=http://{p_host}:{p_port}/LoanIQ/fund1.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/fund.jsp", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=clicked", "Value=1", ENDITEM, 
		"Name=taccno", "Value={p_taccno}", ENDITEM, 
		LAST);

	lr_end_transaction("AB_FundTransfer_T10_SubmitAccount",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("AB_FundTransfer_T11_PayAmount");

	web_submit_data("FundTransfer1.jsp", 
		"Action=http://{p_host}:{p_port}/LoanIQ/FundTransfer1.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/fund1.jsp", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=taccno", "Value={c_tAccountNumber}", ENDITEM, 
		"Name=name", "Value={c_tAccountName}", ENDITEM, 
		"Name=type", "Value={c_tAccountType}", ENDITEM, 
		"Name=address", "Value={c_tAddress}", ENDITEM, 
		"Name=city", "Value={c_tCity}", ENDITEM, 
		"Name=phoneno", "Value={c_tPhoneNo}", ENDITEM, 
		"Name=email", "Value={c_tEmail}", ENDITEM, 
		"Name=tamt", "Value={p_pay_amount}", ENDITEM, 
		LAST);

	web_submit_data("fundtransferresult.jsp", 
		"Action=http://{p_host}:{p_port}/LoanIQ/fundtransferresult.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/FundTransfer1.jsp", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=tid", "Value=10011694", ENDITEM, 
		LAST);

	lr_end_transaction("AB_FundTransfer_T11_PayAmount",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_FundTransfer_T12_UserLogout");
	
	web_reg_find("Text=You Are Successfully Logged Out", 
		LAST);

	web_url("logout.JPG", 
		"URL=http://{p_host}:{p_port}/LoanIQ/Logout.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/fundtransferresult.jsp", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T12_UserLogout",LR_AUTO);

	return 0;
    }
	else
	{
	lr_error_message("Balance is %d. Insufficient balance. Skipping Fund Transfer.", balance);
	  
	lr_think_time(4);
	
	lr_start_transaction("AB_FundTransfer_T12_UserLogout");
	
	web_reg_find("Text=You Are Successfully Logged Out", 
		LAST);

	web_url("logout.JPG", 
		"URL=http://{p_host}:{p_port}/LoanIQ/Logout.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/fundtransferresult.jsp", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T12_UserLogout",LR_AUTO);

	return 0;
	}
}