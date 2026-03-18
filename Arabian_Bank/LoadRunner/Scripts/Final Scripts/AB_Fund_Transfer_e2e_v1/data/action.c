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

	lr_start_transaction("AB_FundTransfer_T01_Launch");

	lr_end_transaction("AB_FundTransfer_T01_Launch",LR_AUTO);

	lr_start_transaction("AB_FundTransfer_T02_AccessPersonalBanking");

	web_reg_find("Text=Welcome To LoanIQ", 
		LAST);

	lr_think_time(10);

	web_url("personal.JPG", 
		"URL=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T02_AccessPersonalBanking",LR_AUTO);

	lr_start_transaction("AB_FundTransfer_T03_UserLogin");

	web_reg_find("Text=LoanIQ: Customerhome", 
		LAST);

	lr_think_time(13);

	web_submit_data("Login", 
		"Action=http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=p02YwOzwGLplhiahPZO-DqLgOR8FQGJqUJlxf6fC_PUgvsX4Ytpg!1522688009!1772089306352", 
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
		"Name=x", "Value=47", ENDITEM, 
		"Name=y", "Value=18", ENDITEM, 
		LAST);

	lr_end_transaction("AB_FundTransfer_T03_UserLogin",LR_AUTO);

	lr_start_transaction("AB_FundTransfer_T04_SelectAccount");

	web_reg_find("Text=LoanIQ: Accounts", 
		LAST);

	lr_think_time(22);

	web_url("Accounts.JPG", 
		"URL=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=p02YwOzwGLplhiahPZO-DqLgOR8FQGJqUJlxf6fC_PUgvsX4Ytpg!1522688009!1772089306352", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T04_SelectAccount",LR_AUTO);

	lr_start_transaction("AB_FundTransfer_T05_ViewAccountSummary");

	web_reg_find("Text=LoanIQ: Account Summary", 
		LAST);

	lr_think_time(33);

	web_url("Account Summary", 
		"URL=http://192.168.1.2:7001/LoanIQ/AccountSummary.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T05_ViewAccountSummary",LR_AUTO);

	lr_start_transaction("AB_FundTransfer_T06_SelectAccountAgain");

	web_reg_find("Text=LoanIQ: Accounts", 
		LAST);

	lr_think_time(38);

	web_url("Accounts", 
		"URL=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/AccountSummary.jsp", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T06_SelectAccountAgain",LR_AUTO);

	lr_start_transaction("AB_FundTransfer_T07_SelectFundTransfer");

	web_reg_find("Text=LoanIQ: FundTransfer", 
		LAST);

	lr_think_time(15);

	web_url("Fund Transfer", 
		"URL=http://192.168.1.2:7001/LoanIQ/FundTransfer.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T07_SelectFundTransfer",LR_AUTO);

	lr_start_transaction("AB_FundTransfer_T08_SelectBankToBankTransfer");

	web_reg_find("Text=LoanIQ: AccountNumber", 
		LAST);

	lr_think_time(19);

	web_url("Bank to Bank Transfer", 
		"URL=http://192.168.1.2:7001/LoanIQ/fund.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/FundTransfer.jsp", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T08_SelectBankToBankTransfer",LR_AUTO);

	lr_start_transaction("AB_FundTransfer_T09_AccountReview");

	web_reg_find("Text=Account Details", 
		LAST);

	lr_think_time(39);

	web_url("showdet.jsp", 
		"URL=http://192.168.1.2:7001/LoanIQ/showdet.jsp?taccno=IQ14290", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/fund.jsp", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T09_AccountReview",LR_AUTO);

	lr_start_transaction("AB_FundTransfer_T10_SubmitAccount");

	web_reg_find("Text=LoanIQ: Amount", 
		LAST);

	lr_think_time(14);

	web_submit_data("fund1.jsp", 
		"Action=http://192.168.1.2:7001/LoanIQ/fund1.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/fund.jsp", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=clicked", "Value=1", ENDITEM, 
		"Name=taccno", "Value=IQ14290", ENDITEM, 
		LAST);

	lr_end_transaction("AB_FundTransfer_T10_SubmitAccount",LR_AUTO);

	lr_start_transaction("AB_FundTransfer_T11_PayAmount");

	web_reg_find("Text=LoanIQ: FundTranfer1", 
		LAST);

	lr_think_time(28);

	web_submit_data("FundTransfer1.jsp", 
		"Action=http://192.168.1.2:7001/LoanIQ/FundTransfer1.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/fund1.jsp", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=taccno", "Value=IQ14290", ENDITEM, 
		"Name=name", "Value=Mr..Deekshith3", ENDITEM, 
		"Name=type", "Value=S", ENDITEM, 
		"Name=address", "Value=11-13", ENDITEM, 
		"Name=city", "Value=Nagoya", ENDITEM, 
		"Name=phoneno", "Value=9848022333", ENDITEM, 
		"Name=email", "Value=bhupathi.deekshit3@gmail.com", ENDITEM, 
		"Name=tamt", "Value=1116", ENDITEM, 
		LAST);

	web_reg_find("Text=LoanIQ: FundTranferResult", 
		LAST);

	web_submit_data("fundtransferresult.jsp", 
		"Action=http://192.168.1.2:7001/LoanIQ/fundtransferresult.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/FundTransfer1.jsp", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=tid", "Value=10011694", ENDITEM, 
		LAST);

	lr_end_transaction("AB_FundTransfer_T11_PayAmount",LR_AUTO);

	lr_start_transaction("AB_FundTransfer_T12_UserLogout");

	web_reg_find("Text=LoanIQ : Logout", 
		LAST);

	lr_think_time(15);

	web_url("logout.JPG", 
		"URL=http://192.168.1.2:7001/LoanIQ/Logout.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/fundtransferresult.jsp", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_FundTransfer_T12_UserLogout",LR_AUTO);

	return 0;
}