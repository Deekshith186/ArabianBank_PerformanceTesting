
void c_JSESSIONID(){
	web_reg_save_param(
    "c_JSESSIONID",
    "LB=action=\"./Login?JSESSIONID=",
    "RB=\"",
    LAST);
}

void c_commission(){
	web_reg_save_param(
    "c_commission",
    "LB=<input name=\"ddcomm\" type=\"text\" value='",
    "RB='",
    LAST);
}