Action()
{

	FILE *fp;
    char filePath[256];
	
	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_start_transaction("AB_DDRequest_T01_Launch");

	web_reg_find("Text=Welcome To LoanIQ", 
		LAST);

	web_url("LoanIQ_2", 
		"URL=http://{p_host}:{p_port}/LoanIQ/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_DDRequest_T01_Launch",LR_AUTO);

	lr_think_time(4);

	lr_start_transaction("AB_DDRequest_T02_AccessPersonalBanking");
	
	c_JSESSIONID();

	web_reg_find("Text=Forgot Password?", 
		LAST);

	web_url("login.jsp", 
		"URL=http://{p_host}:{p_port}/LoanIQ/login.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_DDRequest_T02_AccessPersonalBanking",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("AB_DDRequest_T03_UserLogin");
	
	web_reg_find("Text=Welcome", 
		LAST);

	web_submit_data("Login", 
		"Action=http://{p_host}:{p_port}/LoanIQ/Login?JSESSIONID={c_JSESSIONID}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/login.jsp", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=accno", "Value={p_accno}", ENDITEM, 
		"Name=password", "Value={p_password}", ENDITEM, 
		"Name=x", "Value=51", ENDITEM, 
		"Name=y", "Value=12", ENDITEM, 
		LAST);


	lr_end_transaction("AB_DDRequest_T03_UserLogin",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("AB_DDRequest_T04_SelectAccount");

	web_reg_find("Text=Service", 
		LAST);

	web_url("accounts.jsp", 
		"URL=http://{p_host}:{p_port}/LoanIQ/accounts.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/Login?JSESSIONID={c_JSESSIONID}", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_DDRequest_T04_SelectAccount",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("AB_DDRequest_T05_SelectServiceRequests");

	web_reg_find("Text=Cheque", 
		LAST);

	web_url("ServiceRequests.jsp", 
		"URL=http://{p_host}:{p_port}/LoanIQ/ServiceRequests.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/accounts.jsp", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("AB_DDRequest_T05_SelectServiceRequests",LR_AUTO);

	lr_think_time(4);

	lr_start_transaction("AB_DDRequest_T06_SelectDDRequest");

	web_reg_find("Text=Commission", 
		LAST);

	web_url("ddrequest.jsp", 
		"URL=http://{p_host}:{p_port}/LoanIQ/ddrequest.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/ServiceRequests.jsp", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_DDRequest_T06_SelectDDRequest",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("AB_DDRequest_T07_SubmitPayee");

	c_commission();

	web_submit_data("ddrequest.jsp_2", 
		"Action=http://{p_host}:{p_port}/LoanIQ/ddrequest.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/ddrequest.jsp", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=amt", "Value={p_amount}", ENDITEM, 
		"Name=payname", "Value=Deekshith2", ENDITEM, 
		"Name=paybank", "Value=Arabian Bank", ENDITEM, 
		LAST);

	web_submit_data("ddresponse.jsp", 
		"Action=http://{p_host}:{p_port}/LoanIQ/ddresponse.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/ddrequest.jsp", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=payname", "Value=Deekshith2", ENDITEM, 
		"Name=paybank", "Value=Arabian Bank", ENDITEM, 
		"Name=ddamt", "Value=100", ENDITEM, 
		"Name=ddcomm", "Value={c_commission}", ENDITEM, 
		"Name=Submit", "Value=Submit", ENDITEM, 
		LAST);


	web_submit_data("ddresponseresult.jsp", 
		"Action=http://{p_host}:{p_port}/LoanIQ/ddresponseresult.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/ddresponse.jsp", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=tid", "Value=56642", ENDITEM, 
		LAST);

	  strcpy(filePath, "D:\\Offline\\Arabian_Bank\\LoadRunner\\Results\\amount_commission.csv");

	/* STEP 1: Check if file already exists */
	fp = fopen(filePath, "r");
	
	if (fp == NULL)
	{
	    /* File does NOT exist — Create file and write header */
	    fp = fopen(filePath, "w");
	    fprintf(fp, "Amount,Commission\n");
	    fclose(fp);
	    lr_log_message("New file created with header");
	}
	else
	{
	    /* File already EXISTS — skip header */
	    fclose(fp);
	    lr_log_message("File already exists, skipping header");
	}
	
	/* STEP 2: Open file in append mode and write data */
	fp = fopen(filePath, "a");
	
	fprintf(fp, "%s,%s\n",
	        lr_eval_string("{p_amount}"),
	        lr_eval_string("{c_commission}")
	);
	
	lr_log_message("Data Written — User: %s | Balance: %s",
	               lr_eval_string("{p_amount}"),
	               lr_eval_string("{c_commission}"));
	
	/* STEP 3: Close file */
	fclose(fp);
	
	lr_end_transaction("AB_DDRequest_T07_SubmitPayee",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("AB_DDRequest_T08_UserLogout");
	
	web_reg_find("Text=You Are Successfully Logged Out", 
		LAST);

	web_url("Logout.jsp", 
		"URL=http://{p_host}:{p_port}/LoanIQ/Logout.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/ddresponseresult.jsp", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_DDRequest_T08_UserLogout",LR_AUTO);

	return 0;
}