void c_JSESSIONID(){
		web_reg_save_param(
	    "c_JSESSIONID",
	    "LB=action=\"./Login?JSESSIONID=",
	    "RB=\"",
	    LAST);
}

void c_Balance(){
web_reg_save_param_regexp(
	    "ParamName=c_Balance",
	    "RegExp=class=\"PersonalData\">&nbsp;&nbsp;&nbsp;&nbsp;([\\d]+/-)",
	    "Group=1",
	    LAST);
}

void c_tAccountNumber(){
web_reg_save_param_regexp(
    "ParamName=c_tAccountNumber",
    "RegExp=Account Number : ([A-Z0-9]+)",
    LAST);
}

void c_tAccountName(){
	web_reg_save_param_regexp(
    "ParamName=c_tAccountName",
    "RegExp=Account Name   : ([\\w. ]+)",
    LAST);
}

void c_tAccountType(){
	web_reg_save_param_regexp(
    "ParamName=c_tAccountType",
    "RegExp=Account Type   : ([A-Z])",
    LAST);
}

void c_tAddress(){
	web_reg_save_param_regexp(
    "ParamName=c_tAddress",
    "RegExp=Accountant address   : ([\\w-]+)",
    LAST);
}

void c_tCity(){
	web_reg_save_param_regexp(
    "ParamName=c_tCity",
    "RegExp=Accountant city   : ([A-Za-z]+)",
    LAST);
}

void c_tPhoneNo(){
	web_reg_save_param_regexp(
    "ParamName=c_tPhoneNo",
    "RegExp=Accounant Phoneno   : ([0-9]+)",
    LAST);
}

void c_tEmail(){
	web_reg_save_param_regexp(
    "ParamName=c_tEmail",
    "RegExp=Accountant email   : ([\\w.@]+)",
    LAST);
}