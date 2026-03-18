Action()
{
	FILE *fp;
    char filePath[256];

	lr_start_transaction("AB_AccountSummary_T04_SelectAccount");
	
	web_reg_find("Text=Service", "Fail=NotFound",
		LAST);

	web_url("accounts.jsp", 
		"URL=http://{host}:{port}/LoanIQ/accounts.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/LoanIQ/Login?JSESSIONID={c_JSESSIONID}", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_AccountSummary_T04_SelectAccount",LR_AUTO);
    
	lr_think_time(rand()%3 + 2);
	
	lr_start_transaction("AB_AccountSummary_T05_ViewAccountSummary");
	
	web_reg_find("Text=Personal Profile", 
		LAST);
	
	c_User();
	c_Balance();
	
	web_url("AccountSummary.jsp", 
		"URL=http://{host}:{port}/LoanIQ/AccountSummary.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/LoanIQ/accounts.jsp", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	

 strcpy(filePath, "D:\\Offline\\Arabian_Bank\\LoadRunner\\Results\\account_details.csv");

/* STEP 1: Check if file already exists */
fp = fopen(filePath, "r");

if (fp == NULL)
{
    /* File does NOT exist — Create file and write header */
    fp = fopen(filePath, "w");
    fprintf(fp, "Username,AccountBalance\n");
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
        lr_eval_string("{c_User}"),
        lr_eval_string("{c_Balance}")
);

lr_log_message("Data Written — User: %s | Balance: %s",
               lr_eval_string("{c_User}"),
               lr_eval_string("{c_Balance}"));

/* STEP 3: Close file */
fclose(fp); 

	lr_end_transaction("AB_AccountSummary_T05_ViewAccountSummary",LR_AUTO);

	lr_think_time(rand()%3 + 2);


	return 0;
}