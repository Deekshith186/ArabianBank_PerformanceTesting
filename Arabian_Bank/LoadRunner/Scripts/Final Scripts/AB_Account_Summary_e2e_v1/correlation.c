
void c_User(){
web_reg_save_param_regexp(
    "ParamName=c_User",
    "RegExp=class=\"PersonalData\">&nbsp;&nbsp;&nbsp;&nbsp;([A-Z0-9]+)",
    "Group=1",
    LAST); 
}

void c_Balance(){
	web_reg_save_param_regexp(
    "ParamName=c_Balance",
    "RegExp=class=\"PersonalData\">&nbsp;&nbsp;&nbsp;&nbsp;([\\d]+/-)",
    "Group=1",
    LAST);
}