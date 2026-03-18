Action()
{

	web_reg_find("Text=Welcome To LoanIQ", 
		LAST);

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("LoanIQ", 
		"URL=http://192.168.1.4:7001/LoanIQ/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_start_transaction("AB_CardsApply_T01_Launch");

	lr_end_transaction("AB_CardsApply_T01_Launch",LR_AUTO);

	lr_start_transaction("AB_CardsApply_T02_AccessPersonalBanking");

	web_reg_find("Text=Welcome To LoanIQ", 
		LAST);

	lr_think_time(10);

	web_url("personal.JPG", 
		"URL=http://192.168.1.4:7001/LoanIQ/login.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_CardsApply_T02_AccessPersonalBanking",LR_AUTO);

	lr_start_transaction("AB_CardsApply_T03_UserLogin");

	web_reg_find("Text=LoanIQ: Customerhome", 
		LAST);

	lr_think_time(14);

	web_submit_data("Login", 
		"Action=http://192.168.1.4:7001/LoanIQ/Login?JSESSIONID=OaDRtaPrliRUlG1v5IsarGCap-1iEfSulto91FkbIZxBxod9RM6a!118641061!1773044868075", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/login.jsp", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=accno", "Value=IQ14301", ENDITEM, 
		"Name=password", "Value=Akon@186", ENDITEM, 
		"Name=x", "Value=53", ENDITEM, 
		"Name=y", "Value=16", ENDITEM, 
		LAST);

	lr_end_transaction("AB_CardsApply_T03_UserLogin",LR_AUTO);

	lr_start_transaction("AB_CardsApply_T04_SelectCreditCards");

	web_reg_find("Text=LoanIQ: CreditCards", 
		LAST);

	lr_think_time(15);

	web_url("cards.JPG", 
		"URL=http://192.168.1.4:7001/LoanIQ/CreditCards.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/Login?JSESSIONID=OaDRtaPrliRUlG1v5IsarGCap-1iEfSulto91FkbIZxBxod9RM6a!118641061!1773044868075", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_CardsApply_T04_SelectCreditCards",LR_AUTO);

	lr_start_transaction("AB_CardsApply_T05_SelectAmericanExpressCard");

	web_reg_find("Text=LoanIQ: AmericonExpressCard", 
		LAST);

	lr_think_time(27);

	web_url("AmericonExpress Card", 
		"URL=http://192.168.1.4:7001/LoanIQ/americoncard.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/CreditCards.jsp", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_CardsApply_T05_SelectAmericanExpressCard",LR_AUTO);

	lr_start_transaction("AB_CardsApply_T06_SelectApply");

	web_reg_find("Text=LoanIQ: AmericonCard Apply", 
		LAST);

	lr_think_time(26);

	web_url("Apply", 
		"URL=http://192.168.1.4:7001/LoanIQ/americonapply.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/americoncard.jsp", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_CardsApply_T06_SelectApply",LR_AUTO);

	lr_start_transaction("AB_CardsApply_T07_FillPersonalDetails");

	web_reg_find("Text=LoanIQ: AmericonCard Apply", 
		LAST);

	lr_think_time(75);

	web_submit_data("americonapply.jsp", 
		"Action=http://192.168.1.4:7001/LoanIQ/americonapply.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/americonapply.jsp", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=title", "Value=Mr.", ENDITEM, 
		"Name=firstname", "Value=Akon30", ENDITEM, 
		"Name=middlename", "Value=", ENDITEM, 
		"Name=lastname", "Value=Shon30", ENDITEM, 
		"Name=dateofbirth", "Value=14-10-1994", ENDITEM, 
		"Name=gender1", "Value=Male", ENDITEM, 
		"Name=maritalstatus", "Value=Single", ENDITEM, 
		"Name=Qualification", "Value=Post Graduate", ENDITEM, 
		"Name=phonenumber", "Value=1234567830", ENDITEM, 
		"Name=mobile", "Value=7290825030", ENDITEM, 
		"Name=currentaddress", "Value=111-16", ENDITEM, 
		"Name=country", "Value=SA", ENDITEM, 
		"Name=state", "Value=", ENDITEM, 
		"Name=city", "Value=", ENDITEM, 
		"Name=pincode", "Value=523186", ENDITEM, 
		"Name=yearsatresidence", "Value=5", ENDITEM, 
		"Name=numberofdependents", "Value=3", ENDITEM, 
		"Name=residentstatus", "Value=Own house", ENDITEM, 
		"Name=officeaddress", "Value=Madhapur-30", ENDITEM, 
		"Name=email", "Value=Akon30@gmail.com", ENDITEM, 
		"Name=pannumber", "Value=BZJPB999930", ENDITEM, 
		LAST);

	web_reg_find("Text=LoanIQ: AmericonCard Apply", 
		LAST);

	lr_think_time(6);

	web_submit_data("americonapply.jsp_2", 
		"Action=http://192.168.1.4:7001/LoanIQ/americonapply.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/americonapply.jsp", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=title", "Value=Mr.", ENDITEM, 
		"Name=firstname", "Value=Akon30", ENDITEM, 
		"Name=middlename", "Value=", ENDITEM, 
		"Name=lastname", "Value=Shon30", ENDITEM, 
		"Name=dateofbirth", "Value=14-10-1994", ENDITEM, 
		"Name=gender1", "Value=Male", ENDITEM, 
		"Name=maritalstatus", "Value=Single", ENDITEM, 
		"Name=Qualification", "Value=Post Graduate", ENDITEM, 
		"Name=phonenumber", "Value=1234567830", ENDITEM, 
		"Name=mobile", "Value=7290825030", ENDITEM, 
		"Name=currentaddress", "Value=111-16", ENDITEM, 
		"Name=country", "Value=SA", ENDITEM, 
		"Name=state", "Value=Limpopo", ENDITEM, 
		"Name=city", "Value=", ENDITEM, 
		"Name=pincode", "Value=523186", ENDITEM, 
		"Name=yearsatresidence", "Value=5", ENDITEM, 
		"Name=numberofdependents", "Value=3", ENDITEM, 
		"Name=residentstatus", "Value=Own house", ENDITEM, 
		"Name=officeaddress", "Value=Madhapur-30", ENDITEM, 
		"Name=email", "Value=Akon30@gmail.com", ENDITEM, 
		"Name=pannumber", "Value=BZJPB999930", ENDITEM, 
		LAST);

	web_reg_find("Text=AmericonCard page", 
		LAST);

	lr_think_time(8);

	web_submit_data("americonapply1.jsp", 
		"Action=http://192.168.1.4:7001/LoanIQ/americonapply1.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/americonapply.jsp", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=loginName", "Value=IQ14301", ENDITEM, 
		"Name=title", "Value=Mr.", ENDITEM, 
		"Name=firstname", "Value=Akon30", ENDITEM, 
		"Name=middlename", "Value=", ENDITEM, 
		"Name=lastname", "Value=Shon30", ENDITEM, 
		"Name=dateofbirth", "Value=14-10-1994", ENDITEM, 
		"Name=gender1", "Value=Male", ENDITEM, 
		"Name=maritalstatus", "Value=Single", ENDITEM, 
		"Name=Qualification", "Value=Post Graduate", ENDITEM, 
		"Name=phonenumber", "Value=1234567830", ENDITEM, 
		"Name=mobile", "Value=7290825030", ENDITEM, 
		"Name=pincode", "Value=523186", ENDITEM, 
		"Name=yearsatresidence", "Value=5", ENDITEM, 
		"Name=numberofdependents", "Value=3", ENDITEM, 
		"Name=residentstatus", "Value=Own house", ENDITEM, 
		"Name=officeaddress", "Value=Madhapur-30", ENDITEM, 
		"Name=email", "Value=Akon30@gmail.com", ENDITEM, 
		"Name=pannumber", "Value=BZJPB999930", ENDITEM, 
		"Name=currentaddress", "Value=111-16", ENDITEM, 
		"Name=state", "Value=Limpopo", ENDITEM, 
		"Name=city", "Value=Alldays", ENDITEM, 
		LAST);

	lr_end_transaction("AB_CardsApply_T07_FillPersonalDetails",LR_AUTO);

	lr_start_transaction("AB_CardsApply_T08_FillCompanyDetails");

	web_reg_find("Text=Americon Express Card : Documentation", 
		LAST);

	lr_think_time(33);

	web_submit_data("AmericonCard", 
		"Action=http://192.168.1.4:7001/LoanIQ/AmericonCard", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/americonapply1.jsp", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=loginName", "Value=IQ14301", ENDITEM, 
		"Name=title", "Value=Mr.", ENDITEM, 
		"Name=firstname", "Value=Akon30", ENDITEM, 
		"Name=middlename", "Value=", ENDITEM, 
		"Name=lastname", "Value=Shon30", ENDITEM, 
		"Name=dateofbirth", "Value=14-10-1994", ENDITEM, 
		"Name=gender1", "Value=Male", ENDITEM, 
		"Name=maritalstatus", "Value=Single", ENDITEM, 
		"Name=Qualification", "Value=Post Graduate", ENDITEM, 
		"Name=phonenumber", "Value=1234567830", ENDITEM, 
		"Name=mobile", "Value=7290825030", ENDITEM, 
		"Name=currentaddress", "Value=111-16", ENDITEM, 
		"Name=country", "Value=SA", ENDITEM, 
		"Name=state", "Value=Limpopo", ENDITEM, 
		"Name=city", "Value=Alldays", ENDITEM, 
		"Name=pincode", "Value=523186", ENDITEM, 
		"Name=yearsatresidence", "Value=5", ENDITEM, 
		"Name=numberofdependents", "Value=3", ENDITEM, 
		"Name=residentstatus", "Value=Own house", ENDITEM, 
		"Name=officeaddress", "Value=Madhapur-30", ENDITEM, 
		"Name=email", "Value=Akon30@gmail.com", ENDITEM, 
		"Name=pannumber", "Value=BZJPB999930", ENDITEM, 
		"Name=youare", "Value=Aeronautical Engineer", ENDITEM, 
		"Name=nameofcompany", "Value=Quantum-30", ENDITEM, 
		"Name=companynature", "Value=IT", ENDITEM, 
		"Name=totalyearsofexperience", "Value=5", ENDITEM, 
		"Name=totalyearsofexperience1", "Value=5", ENDITEM, 
		LAST);

	lr_end_transaction("AB_CardsApply_T08_FillCompanyDetails",LR_AUTO);

	lr_start_transaction("AB_CardsApply_T09_UserLogout");

	lr_end_transaction("AB_CardsApply_T09_UserLogout",LR_AUTO);

	return 0;
}