Action()
{
    lr_start_transaction("AB_CardsApply_T01_Launch");
    
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

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_end_transaction("AB_CardsApply_T01_Launch",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_CardsApply_T02_AccessPersonalBanking");

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

	lr_end_transaction("AB_CardsApply_T02_AccessPersonalBanking",LR_AUTO);
    
	lr_think_time(3);
	
	lr_start_transaction("AB_CardsApply_T03_UserLogin");

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
		"Name=x", "Value=53", ENDITEM, 
		"Name=y", "Value=16", ENDITEM, 
		LAST);

	lr_end_transaction("AB_CardsApply_T03_UserLogin",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("AB_CardsApply_T04_SelectCreditCards");

	web_reg_find("Text=CreditCards", 
		LAST);

	web_url("cards.JPG", 
		"URL=http://{p_host}:{p_port}/LoanIQ/CreditCards.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/Login?JSESSIONID={c_JSESSIONID}", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_CardsApply_T04_SelectCreditCards",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_CardsApply_T05_SelectAmericanExpressCard");

	web_reg_find("Text=Overview", 
		LAST);

	web_url("AmericonExpress Card", 
		"URL=http://{p_host}:{p_port}/LoanIQ/americoncard.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/CreditCards.jsp", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_CardsApply_T05_SelectAmericanExpressCard",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_CardsApply_T06_SelectApply");

	web_reg_find("Text=Apply Online", 
		LAST);
	
	web_reg_save_param_regexp(
    "ParamName=c_gender",
    "RegExp=<option title=\"gender1\" value=\"(.+?)\">",
    "Group=1",
    "Ordinal=All",
    LAST);
	
	web_reg_save_param_regexp(
    "ParamName=c_marital",
    "RegExp=<option title=\"maritalstatus\" value=\"(.+?)\">",
    "Group=1",
    "Ordinal=All",
    LAST);
	
	web_reg_save_param_regexp(
    "ParamName=c_title",
    "RegExp=<option title=\"title\" value=\"(.+?)\"",
    "Group=1",
    "Ordinal=All",
    LAST);
	
	web_reg_save_param_regexp(
    "ParamName=c_Qualification",
    "RegExp=<option title=\"Qualification\" value=\"(.+?)\">",
    "Group=1",
    "Ordinal=All",
    LAST);
	
	web_reg_save_param_regexp(
    "ParamName=c_country",
    "RegExp=<option title=\"country\" value=\"(.+?)\">",
    "Group=1",
    "Ordinal=All",
    LAST);
	
	web_reg_save_param_regexp(
    "ParamName=c_yearsatresidence",
    "RegExp=<option title=\"yearsatresidence\" value=\"(.+?)\">",
    "Group=1",
    "Ordinal=All",
    LAST);
	
	web_reg_save_param_regexp(
    "ParamName=c_numberofdependents",
    "RegExp=<option title=\"numberofdependents\" value=\"(.+?)\">",
    "Group=1",
    "Ordinal=All",
    LAST);

	web_reg_save_param_regexp(
    "ParamName=c_residentstatus",
    "RegExp=<option title=\"residentstatus\" value=\"(.+?)\">",
    "Group=1",
    "Ordinal=All",
    LAST);

	web_url("Apply", 
		"URL=http://{p_host}:{p_port}/LoanIQ/americonapply.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/americoncard.jsp", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_save_string(lr_paramarr_random("c_gender"), "c_Randomgender");
	lr_save_string(lr_paramarr_random("c_marital"), "c_Randommarital");
	lr_save_string(lr_paramarr_random("c_title"), "c_Randomtitle");
	lr_save_string(lr_paramarr_random("c_Qualification"), "c_RandomQualification");
	lr_save_string(lr_paramarr_random("c_country"), "c_Randomcountry");
	lr_save_string(lr_paramarr_random("c_yearsatresidence"), "c_Randomresidence");
	lr_save_string(lr_paramarr_random("c_numberofdependents"), "c_Randomdependents");
	lr_save_string(lr_paramarr_random("c_residentstatus"), "c_Randomresidentstatus");
	
	lr_end_transaction("AB_CardsApply_T06_SelectApply",LR_AUTO);
	
	lr_think_time(6);

	lr_start_transaction("AB_CardsApply_T07_FillPersonalDetails");

	web_reg_find("Text=mandatory", 
		LAST);
	
	web_reg_save_param_regexp(
    "ParamName=c_state",
    "RegExp=<option title=\"state\" value=\"(.+?)\">",
    "Group=1",
    "Ordinal=All",
    LAST);
	
	web_submit_data("americonapply.jsp", 
		"Action=http://{p_host}:{p_port}/LoanIQ/americonapply.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/americonapply.jsp", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=title", "Value={c_Randomtitle}", ENDITEM, 
		"Name=firstname", "Value={p_firstname}", ENDITEM, 
		"Name=middlename", "Value=", ENDITEM, 
		"Name=lastname", "Value={p_lastname}", ENDITEM, 
		"Name=dateofbirth", "Value={p_dateofbirth}", ENDITEM, 
		"Name=gender1", "Value={c_Randomgender}", ENDITEM, 
		"Name=maritalstatus", "Value={c_Randommarital}", ENDITEM, 
		"Name=Qualification", "Value={c_RandomQualification}", ENDITEM, 
		"Name=phonenumber", "Value={p_phonenumber}", ENDITEM, 
		"Name=mobile", "Value={p_mobile}", ENDITEM, 
		"Name=currentaddress", "Value={p_currentaddress}", ENDITEM, 
		"Name=country", "Value={c_Randomcountry}", ENDITEM, 
		"Name=state", "Value=", ENDITEM, 
		"Name=city", "Value=", ENDITEM, 
		"Name=pincode", "Value={p_pincode}", ENDITEM, 
		"Name=yearsatresidence", "Value={c_Randomresidence}", ENDITEM, 
		"Name=numberofdependents", "Value={c_Randomdependents}", ENDITEM, 
		"Name=residentstatus", "Value={c_Randomresidentstatus}", ENDITEM, 
		"Name=officeaddress", "Value={p_officeaddress}", ENDITEM, 
		"Name=email", "Value={p_email}", ENDITEM, 
		"Name=pannumber", "Value={p_pannumber}", ENDITEM, 
		LAST);

	 lr_save_string(lr_paramarr_random("c_state"), "c_Randomstate");
     
     web_reg_save_param_regexp(
    "ParamName=c_city",
    "RegExp=<option title=\"city\" value=\"(.+?)\">",
    "Group=1",
    "Ordinal=All",
    LAST);
     

	web_submit_data("americonapply.jsp_2", 
		"Action=http://{p_host}:{p_port}/LoanIQ/americonapply.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/americonapply.jsp", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=title", "Value={c_Randomtitle}", ENDITEM, 
		"Name=firstname", "Value={p_firstname}", ENDITEM, 
		"Name=middlename", "Value=", ENDITEM, 
		"Name=lastname", "Value={p_lastname}", ENDITEM, 
		"Name=dateofbirth", "Value={p_dateofbirth}", ENDITEM, 
		"Name=gender1", "Value={c_Randomgender}", ENDITEM, 
		"Name=maritalstatus", "Value={c_Randommarital}", ENDITEM, 
		"Name=Qualification", "Value={c_RandomQualification}", ENDITEM, 
		"Name=phonenumber", "Value={p_phonenumber}", ENDITEM, 
		"Name=mobile", "Value={p_mobile}", ENDITEM, 
		"Name=currentaddress", "Value={p_currentaddress}", ENDITEM, 
		"Name=country", "Value={c_Randomcountry}", ENDITEM, 
		"Name=state", "Value={c_Randomstate}", ENDITEM, 
		"Name=city", "Value=", ENDITEM, 
		"Name=pincode", "Value={p_pincode}", ENDITEM, 
		"Name=yearsatresidence", "Value={c_Randomresidence}", ENDITEM, 
		"Name=numberofdependents", "Value={c_Randomdependents}", ENDITEM, 
		"Name=residentstatus", "Value={c_Randomresidentstatus}", ENDITEM, 
		"Name=officeaddress", "Value={p_officeaddress}", ENDITEM, 
		"Name=email", "Value={p_email}", ENDITEM, 
		"Name=pannumber", "Value={p_pannumber}", ENDITEM, 
		LAST);

	lr_save_string(lr_paramarr_random("c_city"), "c_Randomcity");	
	
	 web_reg_save_param_regexp(
    "ParamName=c_YouAre",
    "RegExp=<option value=\"([A-Za-z ]{8,30})\">",
    "Group=1",
    "Ordinal=All",
    LAST);
  
    web_reg_save_param_regexp(
    "ParamName=c_companynature",
    "RegExp=<option value=\"([A-Za-z-]{2,7})\">",
    "Group=1",
    "Ordinal=All",
    LAST);
  
    web_reg_save_param_regexp(
    "ParamName=c_totalyearsofexperience",
    "RegExp=<option value=\"([\\d]+)\">",
    "Group=1",
    "Ordinal=All",
    LAST);
	
	web_reg_save_param_regexp(
    "ParamName=c_totalyearsofexperience1",
    "RegExp=<option value=\"([\\d]+)\">",
    "Group=1",
    "Ordinal=All",
    LAST);
	
	//<input type="hidden" name="loginName" value="IQ14301">
	
	web_reg_save_param_regexp(
    "ParamName=c_accno",
    "RegExp=<input type=\"hidden\" name=\"loginName\" value=\"(.+?)\">",
    "Group=1",
    "Ordinal=All",
    LAST);

	web_submit_data("americonapply1.jsp", 
		"Action=http://{p_host}:{p_port}/LoanIQ/americonapply1.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/americonapply.jsp", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=loginName", "Value={c_accno}", ENDITEM, 
		"Name=title", "Value={c_Randomtitle}", ENDITEM, 
		"Name=firstname", "Value={p_firstname}", ENDITEM, 
		"Name=middlename", "Value=", ENDITEM, 
		"Name=lastname", "Value={p_lastname}", ENDITEM, 
		"Name=dateofbirth", "Value={p_dateofbirth}", ENDITEM, 
		"Name=gender1", "Value={c_Randomgender}", ENDITEM, 
		"Name=maritalstatus", "Value={c_Randommarital}", ENDITEM, 
		"Name=Qualification", "Value={c_RandomQualification}", ENDITEM, 
		"Name=phonenumber", "Value={p_phonenumber}", ENDITEM, 
		"Name=mobile", "Value={p_mobile}", ENDITEM, 
		"Name=pincode", "Value={p_pincode}", ENDITEM, 
		"Name=yearsatresidence", "Value={c_Randomresidence}", ENDITEM, 
		"Name=numberofdependents", "Value={c_Randomdependents}", ENDITEM, 
		"Name=residentstatus", "Value={c_Randomresidentstatus}", ENDITEM, 
		"Name=officeaddress", "Value={p_officeaddress}", ENDITEM, 
		"Name=email", "Value={p_email}", ENDITEM, 
		"Name=pannumber", "Value={p_pannumber}", ENDITEM, 
		"Name=currentaddress", "Value={p_currentaddress}", ENDITEM, 
		"Name=state", "Value={c_Randomstate}", ENDITEM, 
		"Name=city", "Value={c_Randomcity}", ENDITEM, 
		LAST);
	
	lr_save_string(lr_paramarr_random("c_YouAre"), "c_RandomYouAre");
	lr_save_string(lr_paramarr_random("c_companynature"), "c_Randomcompanynature");
	lr_save_string(lr_paramarr_random("c_totalyearsofexperience"), "c_Randomtotalyearsofexperience");
	lr_save_string(lr_paramarr_random("c_totalyearsofexperience1"), "c_Randomtotalyearsofexperience1");

	lr_end_transaction("AB_CardsApply_T07_FillPersonalDetails",LR_AUTO);

	lr_think_time(5);
	
	lr_start_transaction("AB_CardsApply_T08_FillCompanyDetails");

	lr_continue_on_error(1);

    web_reg_find(
    "Search=Body",
    "Text=You can't apply for this credit card",
    "SaveCount=count1",
    LAST);

    web_reg_find(
    "Search=Body",
    "Text=Your application number is:",
    "SaveCount=count2",
    LAST);

	
	web_submit_data("AmericonCard", 
		"Action=http://{p_host}:{p_port}/LoanIQ/AmericonCard", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_host}:{p_port}/LoanIQ/americonapply1.jsp", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=loginName", "Value={c_accno}", ENDITEM, 
		"Name=title", "Value={c_Randomtitle}", ENDITEM, 
		"Name=firstname", "Value={p_firstname}", ENDITEM, 
		"Name=middlename", "Value=", ENDITEM, 
		"Name=lastname", "Value={p_lastname}", ENDITEM, 
		"Name=dateofbirth", "Value={p_dateofbirth}", ENDITEM, 
		"Name=gender1", "Value={c_Randomgender}", ENDITEM, 
		"Name=maritalstatus", "Value={c_Randommarital}", ENDITEM, 
		"Name=Qualification", "Value={c_RandomQualification}", ENDITEM, 
		"Name=phonenumber", "Value={p_phonenumber}", ENDITEM, 
		"Name=mobile", "Value={p_mobile}", ENDITEM, 
		"Name=currentaddress", "Value={p_currentaddress}", ENDITEM, 
		"Name=country", "Value={c_Randomcountry}", ENDITEM, 
		"Name=state", "Value={c_Randomstate}", ENDITEM, 
		"Name=city", "Value={c_Randomcity}", ENDITEM, 
		"Name=pincode", "Value={p_pincode}", ENDITEM, 
		"Name=yearsatresidence", "Value={c_Randomresidence}", ENDITEM, 
		"Name=numberofdependents", "Value={c_Randomdependents}", ENDITEM, 
		"Name=residentstatus", "Value={c_Randomresidentstatus}", ENDITEM, 
		"Name=officeaddress", "Value={p_officeaddress}", ENDITEM, 
		"Name=email", "Value={p_email}", ENDITEM, 
		"Name=pannumber", "Value={p_pannumber}", ENDITEM, 
		"Name=youare", "Value={c_RandomYouAre}", ENDITEM, 
		"Name=nameofcompany", "Value={p_nameofcompany}", ENDITEM, 
		"Name=companynature", "Value={c_Randomcompanynature}", ENDITEM, 
		"Name=totalyearsofexperience", "Value={c_Randomtotalyearsofexperience}", ENDITEM, 
		"Name=totalyearsofexperience1", "Value={c_Randomtotalyearsofexperience1}", ENDITEM, 
		LAST);
	
	lr_continue_on_error(0);
	
	if (atoi(lr_eval_string("{count1}")) > 0)
    {
    lr_output_message("Credit card is already applied so can't apply again");
    }
    else if (atoi(lr_eval_string("{count2}")) > 0)
    {
    lr_output_message("Credir card application is Success");
    }
    else
    {
    lr_error_message("Text_Response_NOT_FOUND");
    lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_FAIL);
    }

	lr_end_transaction("AB_CardsApply_T08_FillCompanyDetails",LR_AUTO);
	
	lr_think_time(3);

	lr_start_transaction("AB_CardsApply_T09_UserLogout");
	
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

	lr_end_transaction("AB_CardsApply_T09_UserLogout",LR_AUTO);

	return 0;
}