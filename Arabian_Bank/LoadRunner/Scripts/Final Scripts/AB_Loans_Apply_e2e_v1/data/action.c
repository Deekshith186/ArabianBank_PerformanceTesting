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

	lr_start_transaction("AB_LoanApply_T01_Launch");

	lr_end_transaction("AB_LoanApply_T01_Launch",LR_AUTO);

	lr_start_transaction("AB_LoanApply_T02_AccessPersonalBanking");

	web_reg_find("Text=Welcome To LoanIQ", 
		LAST);

	lr_think_time(14);

	web_url("personal.JPG", 
		"URL=http://192.168.1.4:7001/LoanIQ/login.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_LoanApply_T02_AccessPersonalBanking",LR_AUTO);

	lr_start_transaction("AB_LoanApply_T03_UserLogin");

	web_reg_find("Text=LoanIQ: Customerhome", 
		LAST);

	lr_think_time(27);

	web_submit_data("Login", 
		"Action=http://192.168.1.4:7001/LoanIQ/Login?JSESSIONID=JArB1K0w3k7JWzmiC4p6_HQyCFF30Bt2zbY5zS3rc8QytsYrgvg3!-1787524884!1772778466608", 
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
		"Name=x", "Value=46", ENDITEM, 
		"Name=y", "Value=12", ENDITEM, 
		LAST);

	lr_end_transaction("AB_LoanApply_T03_UserLogin",LR_AUTO);

	lr_start_transaction("AB_LoanApply_T04_SelectLoans");

	web_reg_find("Text=LoanIQ: Loans", 
		LAST);

	lr_think_time(44);

	web_url("Loans.JPG", 
		"URL=http://192.168.1.4:7001/LoanIQ/loans.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/Login?JSESSIONID=JArB1K0w3k7JWzmiC4p6_HQyCFF30Bt2zbY5zS3rc8QytsYrgvg3!-1787524884!1772778466608", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_LoanApply_T04_SelectLoans",LR_AUTO);

	lr_start_transaction("AB_LoanApply_T05_SelectHomeLoans");

	web_reg_find("Text=LoanIQ: HomeLoan", 
		LAST);

	lr_think_time(18);

	web_url("Home Loan", 
		"URL=http://192.168.1.4:7001/LoanIQ/hloan.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/loans.jsp", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_LoanApply_T05_SelectHomeLoans",LR_AUTO);

	lr_start_transaction("AB_LoanApply_T06_ApplyLoan");

	web_reg_find("Text=LoanIQ: HomeLoan Apply", 
		LAST);

	lr_think_time(20);

	web_url("Apply", 
		"URL=http://192.168.1.4:7001/LoanIQ/homeloan.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/hloan.jsp", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_LoanApply_T06_ApplyLoan",LR_AUTO);

	lr_start_transaction("AB_LoanApply_T07_FillPersonalDetails");

	web_reg_find("Text=LoanIQ: HomeLoan Apply", 
		LAST);

	lr_think_time(9);

	web_submit_data("homeloan.jsp", 
		"Action=http://192.168.1.4:7001/LoanIQ/homeloan.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/homeloan.jsp", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=loanamountrequiredrupees", "Value=214000", ENDITEM, 
		"Name=Tenure", "Value=24", ENDITEM, 
		"Name=title", "Value=Mr.", ENDITEM, 
		"Name=firstname", "Value=Akon1", ENDITEM, 
		"Name=middlename", "Value=", ENDITEM, 
		"Name=lastname", "Value=Shon1", ENDITEM, 
		"Name=dateofbirth", "Value=14-10-1994", ENDITEM, 
		"Name=gender1", "Value=Male", ENDITEM, 
		"Name=maritalstatus", "Value=Single", ENDITEM, 
		"Name=Qualification", "Value=Post Graduate", ENDITEM, 
		"Name=phonenumber", "Value=9848022331", ENDITEM, 
		"Name=mobile", "Value=7290825091", ENDITEM, 
		"Name=currentaddress", "Value=11-16", ENDITEM, 
		"Name=country", "Value=USA", ENDITEM, 
		"Name=state", "Value=", ENDITEM, 
		"Name=city", "Value=", ENDITEM, 
		"Name=pincode", "Value=523186", ENDITEM, 
		"Name=yearsatresidence", "Value=5", ENDITEM, 
		"Name=numberofdependents", "Value=3", ENDITEM, 
		"Name=residentstatus", "Value=Own house", ENDITEM, 
		"Name=officeaddress", "Value=Madhapur-1", ENDITEM, 
		"Name=email", "Value=Akon1@gmail.com", ENDITEM, 
		"Name=pannumber", "Value=BZJPB9999M1", ENDITEM, 
		LAST);

	web_reg_find("Text=LoanIQ: HomeLoan Apply", 
		LAST);

	lr_think_time(5);

	web_submit_data("homeloan.jsp_2", 
		"Action=http://192.168.1.4:7001/LoanIQ/homeloan.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/homeloan.jsp", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=loanamountrequiredrupees", "Value=214000", ENDITEM, 
		"Name=Tenure", "Value=24", ENDITEM, 
		"Name=title", "Value=Mr.", ENDITEM, 
		"Name=firstname", "Value=Akon1", ENDITEM, 
		"Name=middlename", "Value=", ENDITEM, 
		"Name=lastname", "Value=Shon1", ENDITEM, 
		"Name=dateofbirth", "Value=14-10-1994", ENDITEM, 
		"Name=gender1", "Value=Male", ENDITEM, 
		"Name=maritalstatus", "Value=Single", ENDITEM, 
		"Name=Qualification", "Value=Post Graduate", ENDITEM, 
		"Name=phonenumber", "Value=9848022331", ENDITEM, 
		"Name=mobile", "Value=7290825091", ENDITEM, 
		"Name=currentaddress", "Value=11-16", ENDITEM, 
		"Name=country", "Value=USA", ENDITEM, 
		"Name=state", "Value=California", ENDITEM, 
		"Name=city", "Value=", ENDITEM, 
		"Name=pincode", "Value=523186", ENDITEM, 
		"Name=yearsatresidence", "Value=5", ENDITEM, 
		"Name=numberofdependents", "Value=3", ENDITEM, 
		"Name=residentstatus", "Value=Own house", ENDITEM, 
		"Name=officeaddress", "Value=Madhapur-1", ENDITEM, 
		"Name=email", "Value=Akon1@gmail.com", ENDITEM, 
		"Name=pannumber", "Value=BZJPB9999M1", ENDITEM, 
		LAST);

	web_reg_find("Text=HomeLoan page", 
		LAST);

	lr_think_time(18);

	web_submit_data("homeloan1.jsp", 
		"Action=http://192.168.1.4:7001/LoanIQ/homeloan1.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/homeloan.jsp", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=loginName", "Value=IQ14301", ENDITEM, 
		"Name=loanamountrequiredrupees", "Value=214000", ENDITEM, 
		"Name=Tenure", "Value=24", ENDITEM, 
		"Name=title", "Value=Mr.", ENDITEM, 
		"Name=firstname", "Value=Akon1", ENDITEM, 
		"Name=middlename", "Value=", ENDITEM, 
		"Name=lastname", "Value=Shon1", ENDITEM, 
		"Name=dateofbirth", "Value=14-10-1994", ENDITEM, 
		"Name=gender1", "Value=Male", ENDITEM, 
		"Name=maritalstatus", "Value=Single", ENDITEM, 
		"Name=Qualification", "Value=Post Graduate", ENDITEM, 
		"Name=phonenumber", "Value=9848022331", ENDITEM, 
		"Name=mobile", "Value=7290825091", ENDITEM, 
		"Name=pincode", "Value=523186", ENDITEM, 
		"Name=yearsatresidence", "Value=5", ENDITEM, 
		"Name=numberofdependents", "Value=3", ENDITEM, 
		"Name=residentstatus", "Value=Own house", ENDITEM, 
		"Name=officeaddress", "Value=Madhapur-1", ENDITEM, 
		"Name=email", "Value=Akon1@gmail.com", ENDITEM, 
		"Name=pannumber", "Value=BZJPB9999M1", ENDITEM, 
		"Name=currentaddress", "Value=11-16", ENDITEM, 
		"Name=state", "Value=California", ENDITEM, 
		"Name=city", "Value=Los Angeles", ENDITEM, 
		LAST);

	lr_end_transaction("AB_LoanApply_T07_FillPersonalDetails",LR_AUTO);

	lr_start_transaction("AB_LoanApply_T08_FillCompanyDetails");

	web_reg_find("Text=LoanIQ : Home", 
		LAST);

	web_reg_find("Text=Recheck Page", 
		LAST);

	lr_think_time(41);

	web_submit_data("HomeLoan", 
		"Action=http://192.168.1.4:7001/LoanIQ/HomeLoan", 
		"Method=GET", 
		"EncType=", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/homeloan1.jsp", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=loginName", "Value=IQ14301", ENDITEM, 
		"Name=loanamountrequiredrupees", "Value=214000", ENDITEM, 
		"Name=tenure", "Value=24", ENDITEM, 
		"Name=title", "Value=Mr.", ENDITEM, 
		"Name=firstname", "Value=Akon1", ENDITEM, 
		"Name=middlename", "Value=", ENDITEM, 
		"Name=lastname", "Value=Shon1", ENDITEM, 
		"Name=dateofbirth", "Value=14-10-1994", ENDITEM, 
		"Name=gender1", "Value=Male", ENDITEM, 
		"Name=maritalstatus", "Value=Single", ENDITEM, 
		"Name=Qualification", "Value=Post Graduate", ENDITEM, 
		"Name=phonenumber", "Value=9848022331", ENDITEM, 
		"Name=mobile", "Value=7290825091", ENDITEM, 
		"Name=currentaddress", "Value=11-16", ENDITEM, 
		"Name=country", "Value=USA", ENDITEM, 
		"Name=state", "Value=California", ENDITEM, 
		"Name=city", "Value=Los Angeles", ENDITEM, 
		"Name=pincode", "Value=523186", ENDITEM, 
		"Name=yearsatresidence", "Value=5", ENDITEM, 
		"Name=numberofdependents", "Value=3", ENDITEM, 
		"Name=residentstatus", "Value=Own house", ENDITEM, 
		"Name=officeaddress", "Value=Madhapur-1", ENDITEM, 
		"Name=email", "Value=Akon1@gmail.com", ENDITEM, 
		"Name=pannumber", "Value=BZJPB9999M1", ENDITEM, 
		"Name=youare", "Value=Software Engineer", ENDITEM, 
		"Name=nameofcompany", "Value=Quantum-1", ENDITEM, 
		"Name=companynature", "Value=IT", ENDITEM, 
		"Name=totalyearsofexperience", "Value=5", ENDITEM, 
		"Name=totalyearsofexperience1", "Value=5", ENDITEM, 
		"Name=otherloan", "Value=no", ENDITEM, 
		LAST);

	lr_end_transaction("AB_LoanApply_T08_FillCompanyDetails",LR_AUTO);

	lr_start_transaction("AB_LoanApply_T09_UserLogout");

	web_reg_find("Text=LoanIQ : Logout", 
		LAST);

	lr_think_time(23);

	web_url("logout.JPG", 
		"URL=http://192.168.1.4:7001/LoanIQ/Logout.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.4:7001/LoanIQ/HomeLoan?loginName=IQ14301&loanamountrequiredrupees=214000&tenure=24&title=Mr.&firstname=Akon1&middlename=&lastname=Shon1&dateofbirth=14-10-1994&gender1=Male&maritalstatus=Single&Qualification=Post+Graduate&phonenumber=9848022331&mobile=7290825091&currentaddress=11-16&country=USA&state=California&city=Los+Angeles&pincode=523186&yearsatresidence=5&numberofdependents=3&residentstatus=Own+house&officeaddress=Madhapur-1&email=Akon1%40gmail.com&pannumber="
		"BZJPB9999M1&youare=Software+Engineer&nameofcompany=Quantum-1&companynature=IT&totalyearsofexperience=5&totalyearsofexperience1=5&otherloan=no", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AB_LoanApply_T09_UserLogout",LR_AUTO);

	return 0;
}