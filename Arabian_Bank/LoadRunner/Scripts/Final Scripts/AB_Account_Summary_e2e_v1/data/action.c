Action()
{

	web_reg_find("Text=Welcome To LoanIQ", 
		LAST);

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("LoanIQ", 
		"URL=http://192.168.1.29:7001/LoanIQ/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("rb_bf18472vnr", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=2375958347&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1770719037933%7C1770719038368%7Cdn%7C68%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C3%7C_event_%7C1770719037933%7C_vc_%7CV%7C433%5Epc%7CVCD%7C1020%7CVCDS%7C1%7CVCS%7C488%7CVCO%7C1490%7CVCI%7C0%7CTS%7C0%7CVE%7C705%5Ep124%5Ep5700%5Eps%5Estd%3Anth-of-type%284%29%3Ea%3Afirst-child%3Eimg%3Afirst-child%7CS%7C355%2C2%7C4%7C_event_%7C1770719037933%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Ctd%3Anth-of-type%281%29%3Ediv%3Afirst-child%7ClcpS%7C6814%7ClcpT%7C"
		"396%7ClcpU%7C-%7ClcpLT%7C0%7Cfcp%7C396%7Cfp%7C396%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1770719038368%7C1770719038368%7Cdn%7C68%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1770719037933%7C_view_%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=192.168.1.29,$rId=RID_1895941921$rpId=1407582812$domR=1770719038367$tvn=%2FLoanIQ%2F$tvt=1770719037933$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1040$h=719$sw=1536$sh=864$nt="
		"a0b1770719037933e13f13g13h87i90k90l238m239o368p368q369r434s435t435u3547v3247w3247X200M1407582812V0$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2F$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119038262_963$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$nV=1$nVAT=1$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2F$time=1770719039447", 
		LAST);

	web_custom_request("rb_bf18472vnr_2", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=70357419&co=snappy&st=1770719040380&ss=0&qc=2865770359&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xE9\\x88\\x01D{\"data_version\":2,\\x05\\x11\\xF4\\x86\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719038178,\"duration\":70.20000004768372,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.29:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10329260206100503.js\",\"network.protocol.name\":\"http\",\"performance.time_origin\""
		":11\\x11D7933,\"dt.rum.schem=\\xB3 \"0.22.0\",2\\x15\\x01\\x00s=Y\\x14245.29\\x05\\x01\\x1852316286,\\x000next_hop_prot\\x01\\xA1\\x00\"\t\\x9C\\x0C/1.1:W\\x004domain_lookup_\\x05e\\x00\"\\x82`\\x0065\\x00\\x08end\\x863\\x00\\x18connect\\x19b\\x006r\\xC2\\x00\\x11/\r\\\\\\x087.1\\x05\\xEE\\x1C928474436\\xEF\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006(\\x00\\x04reE*\\x11\\x1E\\x002zW\\x00\\x1Cresponse\\x110\\x10313.6A\\xB5 002384186>_\\x00\r0\\x05\\xB5\\x10315.5>!\\x00\\x08dir=\\x05B\\x9F\\x00\r"
		"\\x1F\\x05@:\\x1D\\x00\\x14worker\\x11\\x8B:\\x1D\\x00\\x10fetch\\x11\\x1CN\\x1D\\x02a\n\\x15\\xD0AK,tus_code\":20:M\\x008render_blocking\\x01W\\x14tus\":\"\\x11\\x12:B\\x02\\x1Cfirst_ina\\x96\\x04m_>5\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\"\\x82b\\x01$delivery_t\\x89\\x18:\\x8A\\x00\\x14transf!&$ize\":12466:+\\x02\\x04en\\x01\\xF6\\x18d_body_\\x15'\\x003>'\\x00\\x04deB'\\x00\\x1C339192,\"ME(.server_tim!%Phint\":\"not_available\"\\x19-\\x0CtracE\\xA1\\x00te\\x9A\\x19-\\x0Cset\""
		"V\\xD7\\x04\\x08w3c!(\\x10ource\rf\\x0Cs\":t\\x85\\xE4\\x8D9\\x18applicaA\\xF2\\x00.\\xA5\\x90<ea7c4b59f27d43eb\\xBD\\xBD\\x10frame>\\xBF\\x05<c5a7f247ffb0696\"\\x95\\x93\\x14agent.\\xD5E0\"1.329.10.202\\xA5\\x0E\\x18-100503>2\\x00-\\x98\\x0Cjava\\xB5\\xB4\r\\xAD\\x00b\\xCDF\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x19Y\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-\\xA1/\rj\\x00i\\xCD\\xA4)\\x14\\x001\\xB1t\\xD08267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\",\"device.orienta!\\\\L\":\""
		"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,\\xF5M\\x14window\\x157\\x08040B\\x1C\\x00\\x118\\x08719B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\x10\":1.2\\x81q\\x18age.url\\x9E\\x05\\x07aD\\x01316\\x00_%\\xA0J\\x1B\\x02\\x05& detected_\\xCD\\xF2\\xF1K\\x11F\\x0Ctitl\\x0EA\\x08\\\\Welcome To LoanIQ\",\"view:g\\x00885fd644d4af8456!\\xC5\\x05&\\xB6\\xC0\\x00\\x053b\\x9A\\x00\\x04},\\xFE\\xE3\\x08\\xCE\\xE3\\x08\\x04516\\xFC\\x05\\x04in"
		":\\xD4\\x08\\x08imgZ\\xFA\\x03\\x8Dbq\\xED\\xAA\\x0C\\x01Himages/personal.JPG\\xFE\\xAE\\x08\\xFE\\xAE\\x08\\x1A\\xAE\\x08n8\\x07\\xFE\\xAE\\x08\\x0E\\xAE\\x08n`\\x00Z\\xAE\\x08n3\\x00\\x1AK\\x08\\xD1\\x98\\x0E*\\x08\\x8E/\\x00\\xE5\\xB9\\x10248.1j'\\x08\\xE2\\xAE\\x08vW\\x00>y\\x07\\x10296.1.5\t6\\x90\\x02\\x15/\t\\xB4\\x0496r\\xE1\\x00\\x00r\\x1E\\x9B\\x08\\x1A!\n:\\xD6\\x07\\x15\\x1F\\x05M:\\x1D\\x00\\xB6\\xBA\\x08>g\\x01\\xFE\\xBA\\x08\\x12\\xBA\\x08\\x0Cnon-\\xFE\\xBE\\x08\\x86\\xBE\\x08"
		"!Ejr\\x01\\xBA\\xBD\\x08\\x0C97876\\xB3\\x01N\\xBC\\x08\\x0494>&\\x00J\\xBB\\x08\r&\\x8DX^\\xBA\\x08\\x00_\\x16\\xA5\\x08\\x0Cinfo\\xFE\\xBA\\x08\\xFE\\xBA\\x08\\xFE\\xBA\\x08\\xFE\\xBA\\x08\\xFE\\xBA\\x08\\xFE\\xBA\\x08\\xFE\\xBA\\x08\\xFE\\xBA\\x08\\xFE\\xBA\\x08\\xFE\\xBA\\x08\\xFE\\xBA\\x08\\xFE\\xBA\\x08\\xFE\\xBA\\x08\\xFE\\xBA\\x08\\xFE\\xBA\\x08^\\xBA\\x08\\x04ch6?\\x11Dis_self_monitoring\\x1Eu\\x08J*\\x00\\x00i\\x0E\\xE2\r\\x08nal\\x11#\\xC5\\x0B\\x0E\\x9A\\x0C\\x0Ek\r&"
		"e\\x0B\\x0485.\\xEA\\x11\\x000\"S\\x0Cf\\xE6\\x10\\x1A\\xB7\\x0B\\x0Csfm_*\\x96\\x12 timestamp.H\\x12\\x10277,\"\\x0E\\x9B\r\\x12\\xB8\\x0E 0,\"messag\\x0Er\n\\x01\\x83 643675849\\x12\\xF5\t\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\xFB\\x0C\\\\ JavaScript tag\\\\\",[]]\"}]\\x15\\xCE\\xFE{\r\\xFE{\r\\xFE{\r\\xFE{\r\\xFE{\r\\xFE{\r\\xFE{\r\\xFE{\r\\xFE{\r\\xFE{\r\\xFE{\r\\xFE{\r\\xFE{\r\\xFE{\rn{\r\\x0E\\xEF\\x15j\\x80\\x0B\\xFE\\x8A\r\\xAE\\x8A\r\\x10corpo\\x0E\\x9F\\x0F\\x04ve\\xFE\\x8D\r"
		"\\xFE\\x8D\r.\\x8D\r.\\x17\\x0C:!\\x13\\xFE\\x8D\r\\x12\\x8D\rj`\\x00^\\x8D\rj3\\x00>\\x8D\r\\x0498ng\\x0B\\x11.\\x12\\x8B\\x0C\\x01,2[\\x006R\\x0B\\xDE\\x8B\r\\x0C98.7\t\\xB1\\x12\\x7F\\x17:C\\x01\"[\r\\xE5\"\\x18\":337.3\t/\\x14761581:\\x86\\x00\\x150\\x05\\xB3\\x01.r]\\x00\\x1A%\\x16\r]:m\r\\xFE\\x8A\r.\\x8A\r\t\\xB3\"r\\x17\\xFE\\x8A\r\\xFE\\x8A\r\\xAA\\x8A\r!Dnr\\x01\\xB6\\x8B\r\\x0C6457:\\xB3\\x01J\\x8B\r\\x08642>&\\x00J\\x8B\r\r&\\xFE\\x8B\r\\xFE\\x8B\r\\xFE\\x8B\r\\xFE\\x8B\r\\xFE\\x8B\r"
		"\\xFE\\x8B\r\\xFE\\x8B\r\\xFE\\x8B\r\\xFE\\x8B\r\\xFE\\x8B\r\\xFE\\x8B\r\\xFE\\x8B\r\\xFE\\x8B\r\\xFE\\x8B\r\\xFE\\x8B\r\\xEE\\x8B\r\\x16\\x8B\r\\xA5\\xBFB>\r:(\\x1F\\x10172.8\\x16\\xCB\\x08\\x14715255:\\x12\\x12\\xFE\\xCB\\x08\\xAE\\xCB\\x08\\x1Cbusiness\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\"\\xC8\\x08\\x08326n\\x9C\\x082\\xC8\\x08\\x0432vC\\x08\\xDA\\xC9\\x08~W\\x00\"\\x9A\\x08E\\xAE\\x0C\":41\\x9A\\x84\\x16\\x12\\xCA\\x08\\x01.\\x0E\\x91\\x1A*\\x0E!\""
		"\\x9F\\x08\rQ\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08R\\xBE\\x08!8n\\xC1\\x0C\\xB6\\xBE\\x08\\x08210\\x0E\\xB7\\x1E.\\x86\\x01J\\xBE\\x08\\x08207>&\\x00J\\xBE\\x08\r&"
		"\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\x9E\\xBE\\x08\\x0C87.3\\xFE\\xBE\\x08\\xFE\\xBE\\x08\\x1A\\xBE\\x08\\x08nri\\xFE\\xB9\\x08\\xFE\\xB9\\x08\\xFE\\xB9\\x08\\xFE\\xB9\\x08\\xFE\\xB9\\x08&\\xB9\\x08\\x0454r\\xA0\\x066\\xBA\\x08\\x0454"
		">\\x05\\x08\\xDE\\xAD\\x08\\x0454B\\x1E\\x1E.\\xD6\\x06B\\xAD\\x08\\x0432>z\\x00\\x15#\\x16\\xA0\\x08\\x0E\\x84)6B\\x00\\xFE\\\\\\x11\\xFE\\\\\\x11\\xFE\\\\\\x11\\xFE\\\\\\x11\\x8A\\\\\\x11JW\\x01\\xB6\\x91\\x08\\x0C1588\\x86O\\x11\\x08155>&\\x00J\\x91\\x08\r&"
		"\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08\\xFE\\x91\\x08Z\\x91\\x08\\x1Af/\"w0\\x08435r\\xB9\\x06BO\\x11\\x10navig\\x0E])\\x00n\\xFE\\xAB'B\\xAB'\\xFE\\x98'\\xEE\\x98'\\x1A\\x98':}\\x0F\\xFE\\xFA\\x19\\x0C12.8\\x163\\x18\\x1A\\xE6\\x18\\x0026m\\x19J\\xFA\\x19~3\\x00\\x1EJ\\x08\\x1A.\\x10"
		">\\xEB$\\x11\\x1F\\xE5\\xCE\\x0490r\\xDC\\x01\\xDAu\\x08\\x0890.ni1\"Q\\x08\r\\xA2\\x08238\\x960\\x00\\x05\\xB3\\x08239z.\\x00\\xFE\\x90\\x08\\x8E\\x90\\x08N\\x85\\x01\\xFE\\xEC\\x19\\xFE\\xEC\\x19\\xAA\\xEC\\x19~s\\x01\\xB6\\x9D\\x08\\x08354:d\\x15J-\\x11\\x0432>%\\x00J\\x9B\\x08\t%\\xFE\\x9A\\x08N\\x9A\\x08\\x12\\x89-\\x16\\x190.)-Z\\xA3\\x04\\x0EH0\\x99\\xC8\\x0Er\\x16\\x04in&J0>\\xE8#\\x08has\\x1D.\\x1E\\xEB#.%\\x0B\\x14unload\\x16\\xAA#Q\\xF7:J\\x042#\\x00E\\xEA:!\\x00\\x08dom\\x16O$ active\""
		":3\\x0E\\x9F5\\x89=\\x16p\\x1CB;\\x04\\x0E\\xDE3\\x10tent_\\x01~\\x00e:\\x80\\x00\\x01?.\\xA7\\x03:\\x91\\x1D\\x01o\\x04coJ?\\x00\\x05\\x9C\\x04366\\x86\\x03R=\\x00$mplete\":43:\\x9B\\x00\\x01\\x8F6\r\\x01\\x08434n\\xC1\\x1D\\x1D1\\x05\\x7F~\\x95\\x06\"3\\x15\\x08cou\\x0Ed2\\x040,\\xDD\\x97\\x1Eq1-\\xE1\\x0Es2\r\\x0B\\x08ion\\x0E\\xB17!\\xA2\\x01\\xB8\\x0C\"new\\x1E\\x83/\\x00s\\x0E\\x075\\x0E\\xC47 number\""
		":1\\xFE\\xD7$\\xFE\\xD7$\\xFE\\xD7$\\xFE\\xD7$\\xFE\\xD7$\\xFE\\xD7$\\xFE\\xD7$\\xFE\\xD7$\\xFE\\xD7$\\xFE\\xD7$\\xFE\\xD7$\\xFE\\xD7$\\xFE\\xD7$\\xFE\\xD7$V\\xD7$\\x0437a\\x99&\\xBE\nv|\\x19B\\xBD\n\\x10otherZ\\x15\\x06\\xCD\\x97\\xB1\\xE0\\x8Ec2$favicon.ic\\x0E\\x1F.\\x04ne\\xFE\\x02;\\x96\\x02;N\\xA0\\x06\\x10error\\x11\\xBBN!\\x00\\x14failed>\\xE5\\x00.\\xC5\\x06\\x12\\xAF\t\\xE1\\x0C\\xA5\\xD3\\x048.2\\xEC\"6|\\x06\\xFE\\x17\\x0B\\x004v_\\x00J\\x16\\x0Bz2\\x00\\x1E\\xF6\n"
		"\\x05\\xC4\\xC1\\x92\\x009r\\xEC\"\\x11/\\xCDm\\x049.6\\xA5\\x0B6\\xED\\x00\\xDA&\\x0B\\x004zW\\x00>'\\x0B\\x08486r\\xB4\\x00\\x150\t\\xB5\\x0486nQ\\x07\\xF5!-\\x11:l\\x08\\x15\\x1F\\x05L:\\x1D\\x00\\xA6\\x9C2J\\x95\\x01j%\\x0B\\x0440:Y\\x01bU;\\xFE\\x9B2\\x96\\x9B2!C\\xFE\\x11%&\\x11%\\x0414\\x0E\\xCA8.P\\x03J%\\x0B\\x0411>%\\x00J%\\x0B\t"
		"%\\x8D\\x8E\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xFE\\x992\\xAA\\x992\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_3", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=2514407681&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2F$tvt=1770719037933$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1040$h=719$sw=1536$sh=864$ni=4g|0.4$egf=1589PRTUX$rt="
		"1-1770719037933%3Bhttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2Fpersonal.JPG%7Cb246e0f0g0h2i3k3l51m51u19787v19487w19487X200E1F5890O155P38Q877R127I7M481336681V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2Fcorporative.JPG%7Cb246e0f0g0h53i53k53l92m92u64574v64274w64274X200E1F6460O170P38Q980R130I7M-1548117415V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2Fbusiness.JPG%7Cb246e0f0g0h81i82k82l172m173u21092v20792w20792X200E1F6080O160P38Q877R127I7M2088578123V0%7Chttp%3A%2F%2F192."
		"168.1.29%3A7001%2FLoanIQ%2Fimages%2Fnri.JPG%7Cb246e0f0g0h108i109k109l187m187u15884v15584w15584X200E2F5700O150P38Q777R127I7M634441506V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2Ffavicon.ico%7Cb439e0f0g0h1i1k1l48m48u1464v1164w1164X404I22M809631864V0$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2F$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119038262_963$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf="
		"http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2F$time=1770719041483", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("rb_bf18472vnr_4", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=1&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=3779610747&co=snappy&st=1770719053787&ss=1&qc=2707770648&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xEB\\x08D{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"background\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719053782,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.22.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(37933,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame>\\x14\\x01@c5a7f247ffb0696\","
		"\\x15Z\\x10gent.5\\x9A`\"1.329.10.20260206-100503>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-!\\x88-\\x17\\x08ins%\\xF9)\\x14\\x0C1770!\\xDA\\x9038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B0height\":864,\"1\\x07\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xE8\":1.25,\""
		"page.url.full\":\"http://192.168.1.29:7001/LoanIQ/\",\"\\x05316\\x00_%\\xA0J\\x1B\\x02\\x05&,detected_nam!\\xEA\\x08/Lo2F\\x00\\x0Ctitl\\x01\\x18(Welcome To \t\"\\x18\",\"view:g\\x00885fd644d4af8456!\\xC5\\x05&\\xB6\\xC0\\x00\\x053b\\x9A\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(10);

	web_custom_request("rb_bf18472vnr_5", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=1783001536&co=snappy&st=1770719066711&ss=0&qc=3415665554&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xEB\\x08D{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719064706,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.22.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(37933,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame>\\x14\\x01@c5a7f247ffb0696\","
		"\\x15Z\\x10gent.5\\x9A`\"1.329.10.20260206-100503>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-!\\x88-\\x17\\x08ins%\\xF9)\\x14\\x0C1770!\\xDA\\x9038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B0height\":864,\"1\\x07\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xE8\":1.25,\""
		"page.url.full\":\"http://192.168.1.29:7001/LoanIQ/\",\"\\x05316\\x00_%\\xA0J\\x1B\\x02\\x05&,detected_nam!\\xEA\\x08/Lo2F\\x00\\x0Ctitl\\x01\\x18(Welcome To \t\"\\x18\",\"view:g\\x00885fd644d4af8456!\\xC5\\x05&\\xB6\\xC0\\x00\\x053b\\x9A\\x00\\x0C}]}}", 
		LAST);

	lr_start_transaction("AB_AccountSummary_T02_AccessPersonalBanking");

	web_reg_find("Text=Welcome To LoanIQ", 
		LAST);

	web_url("login.jsp", 
		"URL=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.29:7001/LoanIQ/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf18472vnr_6", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=3085924486&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1770719070184%7C_viewend_%7Cinp%7C0%7Csvn%7C%2FLoanIQ%2F%7Csvt%7C1770719037933%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C7%7C_event_%7C1770719070184%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2F$rId=RID_1895941921$rpId=1407582812$domR=1770719038367$tvn=%2FLoanIQ%2F$tvt=1770719037933$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1040$h=719$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2F$title=Welcome%20To%20LoanIQ$isUnload="
		"1$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119038262_963$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$nV=1$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2F$time=1770719070185", 
		LAST);

	web_custom_request("rb_bf18472vnr_7", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=2310873549&co=snappy&st=1770719070189&ss=1&qc=1922996295&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xA8(D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"view.fo\\x11?,_time\":21329\r\\x1D\\x0Cback\t\\\\\r\\x1Dt10924,\"error.http_4xx_count\":12\\x19\\x00\\x005\\x19\\x19\\x000\\x11\\x19 exception\\x113\\x15\\x1A csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!'8us\":\"reported\",\\x05\\x18)b:-\\x00\\x14value\"\\x01\\x96\\x08fcp\\x11\\x0E\\x0C396,"
		"\\x05\\x10\\x1Cloading_\\x01S!z,dom_content_\\x01\\x1C\\x05\\\\\\x019\\x01!>t\\x00\\x08fidb\\x18\\x00\\x01=.Y\\x00$complete\",\\x117\\x04rt-\\x81\\x1C32113.10\\x05\\x01\\x1023842\t$\\x08dur%;\\x08\":3\r\\x12\\x04na!\\xCE,\"pointerdown\rO\\x18process\rq\\x04rt\\x013\\x08114JU\\x00\\x1D*\\x08end\\x15(\\x009\\x05\\x01\\x1028474\t}<cancelable\":true\t\\x168ui_element.tag_\r\\x90\\x08IMG\r\\x88\\x1D \\\\xpath\":[\"html\",\"body\",\"t\\x05S\\x08,\"t\\x11\\x10\\x0Cr[3]\\x01\\x10"
		"!\\xC5F\\x1D\\x00\\x11\\x1Ala\",\"img[@id=\\\\\"image1\\\\\"]\"],\"f:\\xD6\\x01\\x00pB|\\x01V\\xD5\\x01\\x00pR\\xBC\\x01\\x04in\\x1D\\x184below_threshol\\x01\\xA2\\x04lc\\x1D\\x1F]\\x7F\\x01\\x186\\x7F\\x02\\x041,\\x05\\x15\\x04st=\\xE9Av\\x01*A\\x1D-\\xFD\\x000\r' ize\":6814\t\\x10\\x14render\r$\\x158=_=\\x7F\\x0CDIV\"\t6\\x1D \\xA6\\x7F\\x01\\x0055\\x7F\\x08div!Q long_task\\x01\\xBDI\\xF5\\x0Cnot_\\x1D\\xEE\\x0Cttfb\\x19\\x1D>\\x19\\x00mr\\x10238.2EW 95231628,\t9\\x0CwaitA\\xAAY\\xE0\\x0C12.8\t"
		"*\\x14761581a\\x02\\x05d\\x10cache\\x1D)\\x000\rC\\x08dns\\x1D\\x16\\x0072\\xE9\\x02\\x08186\r&\\x14connec\\x85~\\x19l2j\\x03\\x08185\\x11\\x96\\x18request\\x1D*\\x0C148..\\x19\\x03(43,\"performa\\x1D\\x14.active\\xA2\\x81?\\x04rt\\x85e\\x00v\\xA1\\x81\\x00s\\x01L$nce_number\\xA5G\\x05\\x19\\x08pre2\\xDA\\x01X0,\"characteristics.has_\\x01,\\x1C_summaryq\\x7F\\x10navig\\x05n\\xC1\n\\x01r\\x85\\xB1\\x10new\",2\\x1D\\x00\\x04yp\\x81\\xC9\r/\\x04e\"6\\xB4\\x00\\xC1\\x10\\\\_origin\":1770719037933,\""
		".\\xAB\\x02:\\x1B\\x00=?D2253,\"dt.rum.schem\\xDD\\xEF\\x1C\"0.22.0\"\\x15!\\x14applic\t\\xB7Xid\":\"ea7c4b59f27d43eb\",\\xD5\\xE1\\x10frame>\\xE3\\x068c5a7f247ffb0696\\x1DZ\\x00g\\x81\\x86\\xF5i`\"1.329.10.20260206-100503>2\\x00- $javascript\\x19!\\x00b\\xEDj\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-=\\x17\\x08ins\\xE5\\xC8)\\x145m\\xD08267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\",\"device.orientaA\\xE0<\":\"landscape-priE9\\x15)"
		"$screen.wid\\xA1\\x92\\x0C1536>\\x1B\\x00(height\":8649\\x90\\x14window\\x197a\\xC11#\r\\x1C\\x118\\x08732B8\\x00\t\\xA6\\x1C_pixel_rA\\x03\\\\\":1.25,\"page.url.full\":\"\\xE1\\xE9l://192.168.1.29:7001/LoanIQ/A\\xC4\\x01316\\x00_%\\xA0J\\x1B\\x02\\x05&\\x1Cdetected\\xD1\\x9E>F\\x00\\x08tit\\xC1\\xD5,\"Welcome To \th\\x00\"\\x1A\"\t6g\\x00885fd644d4af8456!\\xC5\\x00va\\xE4\\x00u\\xB2\\xC0\\x00\\x053b\\x9A\\x00\\x04},\\xFE\\x07\n:\\x07\n%\t&F\n\\xCDH\\x1021330-\\x7F\\xFE\\x07\n\\xFE\\x07\n"
		"\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\n\\xFE\\x07\nz\\x07\nN\\xD6\t\\xA1\\x95\\x00_:\\xD6\t\\x01\\x14N\\x16\n\\x1A\\xBF\t\\x04io\\xFE\\xEE\t\\xEE\\xEE\t\\x16\\xEE\t\\x004\"\\xCD\t\\xFE\\xEE\t\\xFE\\xEE\t\\xFE\\xEE\t\\xFE\\xEE\t\\xFE\\xEE\t\\xFE\\xEE\t\\xFE\\xEE\t\\xFE\\xEE\t\\xFE\\xEE\t\\xFE\\xEE\t\\xFE\\xEE\t\\xFE\\xEE\t"
		"\\xFE\\xEE\t\\x1E\\xEE\t\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_8", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=2613132127&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7Cimage1%7CC%7C-%7C119038262_963%7C1770719070120%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2F%7C%7C%7C%2FLoanIQ%2F%7C1770719037933%2C1%7C1%7C_load_%7C_load_%7C-%7C1770719070123%7C1770719070308%7Cdn%7C54%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2F%2C2%7C3%7C_event_%7C1770719070123%7C_vc_%7CV%7C168%5Epc%7CVCD%7C1033%7CVCDS%7C1%7CVCS%7C238%7CVCO%7C1251%7CVCI%7C0%7CTS%7C0%7CVE%7C871%5Ep228%5Ep1625%5Eps%5Esimg%3Anth-"
		"of-type%281%29%7CS%7C104%2C2%7C4%7C_event_%7C1770719070123%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1770719070308%7C1770719070308%7Cdn%7C54%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1770719070123%7C_view_%7Csvn%7C%2FLoanIQ%2F%7Csvt%7C1770719037933%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=192.168.1.29,$rId=RID_1318254503$rpId=769694612$domR=1770719070307$tvn="
		"%2FLoanIQ%2Flogin.jsp$tvt=1770719070123$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1770719070123e15f15g15h15i15k16l57m57o105p105q107r184s185t185u3562v3262w3262X200M769694612V0$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119070200_248$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf="
		"http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$time=1770719071397", 
		LAST);

	lr_end_transaction("AB_AccountSummary_T02_AccessPersonalBanking",LR_AUTO);

	web_custom_request("rb_bf18472vnr_9", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=802799233&co=snappy&st=1770719072311&ss=0&qc=4192671856&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xCCTD{\"data_version\":2,\\x05\\x11\\xF4|\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719070193,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.29:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10329260206100503.js\",\"network.protocol.name\":\"http\",\"performance.time_origin\":1770719!\\x01<23,\"dt.rum.schem="
		"\\xA3\\x18\"0.22.0:I\\x00\\x00s=I\\x1070.39\\x05\\x01 7615814,\".@\\x01 next_hop_\\x11\\xA0\\x04\":\\x05\\x9B\\x0C/1.1:V\\x004domain_lookup_\\x05d\\x00\"~_\\x0064\\x00\\x08end\\x822\\x00\\x18connect\\x9A`\\x00\\x11.\\x8EZ\\x00\\x18secure_\r3\\x08ion\\x11d\\x0006\\x13\\x01\\x04reE%\\x11\\x1EzA\\x01\\x1Cresponse\\xBE/\\x00\\x8E\\xB2\\x00\\x10redir=\rB\\xA9\\x00\r\\x1F\\x05L:\\x1D\\x00Au\\x04er\\x11\\x96:\\x1D\\x00\\x10fetch\\x11\\x1CJ\\xE1\\x00a\\x0E\\x15\\xDAAO,tus_code\":20"
		":L\\x008render_blocking\\x01V\\x14tus\":\"\\x11\\x12:G\\x024first_interim_>?\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\">-\\x00(delivery_ty\\x85\\x0B\\x10cache:~\\x00\\x14transf!\\x19\\x08izeBB\\x00\\x04en\\x01\\xE5\\x18d_body_\t\"\\x141243636\"\\x02\\x04deB'\\x00\\x1C339192,\"M=(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracE\\x99\\x00te\\x8E\\x19-\\x0Cset\"V\\xCA\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85\\xD7\\x8D,\\x18applicaA\\xEA\\x00.\\xA5s"
		"<ea7c4b59f27d43eb\\xBD\\xA0\\x10frame:\\xA2\\x05@d7888393b7f61276\"\\x95\\x86\\x14agent.\\xD5(0\"1.329.10.202\\xA5\\x01\\x18-100503>2\\x00-\\x98\\x10javas\\xB1\\xA7\r\\xAD\\x00b\\xCD)\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x19Y\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-\\xA1\"\rj\\x00i\\xCD\\x87)\\x14\\x001\\xCDh\\x9038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,"
		"\\xF50\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7L\":1.25,\"page.url.ful\\xB1\\xECn\\xF8\\x06 login.jspaH\\x01<1?\\x00_%\\xA9J$\\x02\\x05&$detected_n\\xC9\\xEE\\xF1GBO\\x00\\x0Ctitl\\x0E6\\x08\\\\Welcome To LoanIQ\",\"view:p\\x00<4197891e5104a5cc\\x11&\\xDA\\xD2\\x00\\x05b\\x86\\xAC\\x00\\x04},\\xFE\\xEA\\x08:\\xEA\\x08\\x00c:\\x9C\\x08Dis_self_monitoringq\\xCCJ*\\x00\\x00i\\xA1;\\x08nal\\x11#\\xE5\\x8A\\x81\\x04\\x00e.7\t\\x08217:7\tm\\x00fC\\x08\\x11"
		"!\\x08fm_*\\xE3\t\\x0E\\x96\\x08\\x10stamp6^\\x00\\x081,\"\\xA1\\x05\\xC5\\x11 0,\"messag!\\xCAaR 643675849%;\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x81e\\x14 JavaS\\x85,0 tag\\\\\",[]]\"}]\\x99\\x8B\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04f\\xE5\\x04V\\x98\\x04\\x08194.\\x98\\x04\\x1096.60\\x05\\x01\\x1823841866j\tB\\xDF\r"
		"\\x08imgZ\\x12\t\\x1AM\t\\xB1\\x16\\xAA\\x12\\x06Himages/signup.JPG\",\\xFE\\xB7\r\\xEE\\xB7\r\\x16\\xB7\r\\x0016\t\\x01\\xEE\\xA8\r\\x12\\xA8\r:P\\x00N\\x99\r:#\\x00\\x00c:\\x8A\r\\x003rI\\x0E\\x11.\\x00e\\x12\\xE4\r\\x044.\\x0El\\x08\\x00e&\\xDC\\x0E\\xDE}\r\\x004r\\x1F\\x02>>\\x0C\\x10167.2EN\\x1C047683726F\\x01\\x150\\x05\\xA6\\x01.n}\\x02\\x00r\\x1E`\rE\\xCAB-\\x0C\\x15\\x1F\\x05M:\\xB9\\x0C\\xAA\\x7F\r\\x141,\"htt\\xEEp\r\\x16p\r\\x0Cnon-\\xFEt\r\\x86t\r!5nc\\x01>\\x85\r\\x0E8\n]\\x08:\\x80"
		"\r\\x0C63196\\xA3\\x01J\\x83\r\\x0460>%\\x00J\\x81\r\t%\\x8D\\x05^\\x7F\r\\x00_\\x16j\r\\x10info\"&\\xAC\r\t\\x15\\x04co\\xFE\\x7F\r\\xFE\\x7F\r\\xFE\\x7F\r\\xFE\\x7F\r\\xFE\\x7F\r\\xFE\\x7F\r\\xFE\\x7F\r\\xFE\\x7F\r\\xFE\\x7F\r\\xFE\\x7F\r\\xFE\\x7F\r\\xFE\\x7F\r\\xFE\\x7F\r\\xFE\\x7F\r\\xFE\\x7F\r\\xA2\\x7F\r\\xA5\\xD0B2\r:i\\x16\\x08112>\\xC5\\x06F\\x8E\\x08\\x08npu^\\xA2\\x11\\x8D\\x8B\\xE6\\x90\\x08\\x16,"
		"\\x0F\\xFE\\x8F\\x08\\xFE\\x8F\\x08\\x1A\\x8F\\x08\\x000r*\\x07\\xEE\\x9E\\x08\\x12\\x9E\\x08v_\\x00N\\xAD\\x08v2\\x00\\x1E\\x8E\\x08%\\xEA\\x14\":71.8\\x16\\x17\\x08\\x1871525576t\\x06\\x11.\\xE5\\xC9\\x0472r\\xEB\\x00\\xDE\\xC9\\x08\\x082.7\t\\x82v\\x99\\x08\r\\xB1\\x08182r\\xB2\\x00:\\xC9\\x08\\x0C83.1\t^RF\\x0B\"\\xAA\\x08\r^:\\xAC\\x08\\x15\\x1F%\\x00"
		":\\x1D\\x00\\xAA\\xC9\\x08F\\x93\\x01\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xAE\\xD8\\x08zr\\x01\\xB6\\xD8\\x08\\x0454\\x0E\\xB5\\x19.\\xF9\\x08J\\xD8\\x08\\x005\\x12\\xDA\\x19.%\\x00J\\xD8\\x08\t%\\x8DM\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xD6\\xD8\\x08\\x81\\x8B\\x00d\""
		"A\\x1F\\x08184r\\x8B\\x06B\\xE5\\x08\\x10navig\\x0ED\\x18\\x00n\\xFEz\\x11Bz\\x11\\x16\\xE3\\x08\\x00j\\x12^\\x18\\x08net\\xC1l\\x00.\\x1E\\x89\\x1E\\x00.\\x1A;\\x18\\xC1D>E\\x0E\\x0Cime_\\xFE)\\x1F>)\\x1F:\\xF8\\x06\\xFE\\xD3\\x08\\x001:\\x01\\x11J\\xC4\\x08>#\\x00\\x1E\\x87\\x08\\xED\\xA6^\\x1F\\x00\\xE5\\xA6>\\x1D\\x00\\xDA\\x97\\x08\\x0415:g\\x08:\\x1F \"h\\x08\r\\x94\\x0456\\x9A0\\x00\\x05\\xA5\\x0C57.3\\x16\\x97\\x08\\x1Aw\tB^\\x00\\x1A\\xC1\\x1E\r^:\\x83\\x01\\xFE\\x98\\x08\\x1A\\x98\\x08!+"
		"AE\\x15\\xCD\\xDE\\xD1\\x1E\\xFEa\\x11\\x96a\\x11~c\\x01\\xB6\\x89\\x08\\x08356:\\x04\\x13J\\x89\\x08\\x0432>%\\x00J\\x89\\x08\t%\\xFE\\x89\\x08N\\x89\\x08\\x122\\x1C\\x16\\xCB\\x1E\\xAE\\xC9\\x1BZ\\x8E\\x04\\x0E\\x1A\\x1F\\x99\\xB3\\x0E\\xE6\r\\x04in&\\x1C\\x1F>P\\x1B\\x08has\\x1D.\\x1E\\xAD\r.\\x94\t\\x14unload\\x16\\x12\\x1BZ\\xA9\\x022#\\x00E\\xFA:\\xCA\\x02\\x08dom\\x16\\xB7\\x1B\\x10activ\\x0E\\xA8\\x1B\\x000B\"\\x15\\x01$\\x12\\x84\\x12\\x08nt_\\x01r\\x00e"
		":t\\x00\\x013n\\xC5\\x0Cb@\\x00\\x05\\x91\\x10106.8\\x12\\x07$V\\x08$\t>\\x10mplet\\x01\\x9F\\x0483rl\\x00\\x01\\xA06\\x12\\x01\\xC1VnL\\x15\\x1D2\t\\x90z\\x86\\x06u\\xFC\\x08cou\\x0E<!\\x040,\\xDD\\x88\\x1EI -\\xE7\\x0EK!\r\\x0B\\x08ion\\x0El&!\\xA8\\x01\\xC8\\x14\"exist\\x0EO\\x1D\\x1AN\\x1E\\x00s\\x0E\\xDC#\\x0E\\x84& number\":1\\xFEJ\\x1C\\xFEJ\\x1C\\xFEJ\\x1C\\xFEJ\\x1C\\xFEJ\\x1C\\xFEJ\\x1C\\xFEJ\\x1C\\xFEJ\\x1C\\xFEJ\\x1C\\xFEJ\\x1C\\xFEJ\\x1C\\xFEJ\\x1C\\xFEJ\\x1CNJ\\x1C\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_10", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=1539193268&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1770719070123$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$rt=1-1770719070123%3Bhttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2Flogin.JPG%7Cb71e0f0g0h1i2k2l112m113u5423v5123w5123X200I13M18629272V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2Fsignup.JPG%7Cb71e0f0g0h2i4k4l96m97u6319v6019w6019X200E2F1625O65P25Q302R127I7M-1993462241V0$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$title="
		"Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119070200_248$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$time=1770719073434", 
		LAST);

	web_custom_request("rb_bf18472vnr_11", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=1&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=1346653554&co=snappy&st=1770719074398&ss=1&qc=2917544258&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x8F\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"background\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719074397,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.22.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\\x11\\x83$0123,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01Dd7888393b7f61276\","
		"\\x15Z\\x10gent.5\\x9A`\"1.329.10.20260206-100503>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-!\\x88-\\x17\\x08ins%\\xF9)\\x14\\x0C1770!\\xDA\\x9038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xF0B\":1.25,\""
		"page.url.full\":\"http://192.168.1.29:7001/LoanIQ/login.jsp\",\t<1?\\x00_%\\xA9\\x00dF$\\x02\\x05b,detected_nam!\\xF3\\x08/LoVO\\x00\\x0Ctitl\\x01!(Welcome To \t+\\x18\",\"view:p\\x00<4197891e5104a5cc\\x11&\\xDA\\xD2\\x00\\x05b\\x86\\xAC\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(5);

	web_custom_request("rb_bf18472vnr_12", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=1440817187&co=snappy&st=1770719079470&ss=0&qc=2501010167&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x8F\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719077464,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.22.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\\x11\\x83$0123,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01Dd7888393b7f61276\","
		"\\x15Z\\x10gent.5\\x9A`\"1.329.10.20260206-100503>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-!\\x88-\\x17\\x08ins%\\xF9)\\x14\\x0C1770!\\xDA\\x9038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xF0B\":1.25,\""
		"page.url.full\":\"http://192.168.1.29:7001/LoanIQ/login.jsp\",\t<1?\\x00_%\\xA9\\x00dF$\\x02\\x05b,detected_nam!\\xF3\\x08/LoVO\\x00\\x0Ctitl\\x01!(Welcome To \t+\\x18\",\"view:p\\x00<4197891e5104a5cc\\x11&\\xDA\\xD2\\x00\\x05b\\x86\\xAC\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(9);

	lr_start_transaction("AB_AccountSummary_T03_UserLogin");

	web_custom_request("rb_bf18472vnr_13", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=376464222&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C7%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1770719089434%7C1770719089434%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C8%7CReferenceError%7C_type_%7C-%7C1770719089436%7C1770719089436%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C9%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%5Ep65%5Ep104%7C_location_%7C-%7C1770719089437%7C1770719089437%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C10%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInputEle"
		"ment.onkeypress%20%28http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%3A65%3A104%29%7C_stack_%7C-%7C1770719089437%7C1770719089437%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C11%7C19234%7C_ts_%7C-%7C1770719089439%7C1770719089439%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C12%7CKD73%5Epaccno%7C_useraction_%7C-%7C1770719089440%7C1770719089440%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C13%7C1%7C_source_%7C-%7C1770719089441%7C1770719089441%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Es"
		"k0%5Esh0%2C1%7C6%7C_event_%7C1770719088028%7C_wv_%7CAAI%7C1%7CfIS%7C17784%7CfID%7C1$rId=RID_1318254503$rpId=769694612$domR=1770719070307$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1770719070123$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119070200_248$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf="
		"http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$time=1770719089443", 
		LAST);

	web_custom_request("rb_bf18472vnr_14", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=877514809&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C14%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1770719089885%7C1770719089885%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C15%7CReferenceError%7C_type_%7C-%7C1770719089887%7C1770719089887%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C16%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%5Ep65%5Ep104%7C_location_%7C-%7C1770719089887%7C1770719089887%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C17%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInput"
		"Element.onkeypress%20%28http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%3A65%3A104%29%7C_stack_%7C-%7C1770719089888%7C1770719089888%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C18%7C19685%7C_ts_%7C-%7C1770719089889%7C1770719089889%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C19%7CKD81%5Epaccno%7C_useraction_%7C-%7C1770719089890%7C1770719089890%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C20%7C1%7C_source_%7C-%7C1770719089892%7C1770719089892%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%"
		"5Esk0%5Esh0$rId=RID_1318254503$rpId=769694612$domR=1770719070307$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1770719070123$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119070200_248$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$time=1770719089894", 
		LAST);

	web_custom_request("rb_bf18472vnr_15", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=252991136&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C21%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1770719090261%7C1770719090261%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C22%7CReferenceError%7C_type_%7C-%7C1770719090262%7C1770719090262%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C23%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%5Ep65%5Ep104%7C_location_%7C-%7C1770719090262%7C1770719090262%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C24%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInput"
		"Element.onkeypress%20%28http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%3A65%3A104%29%7C_stack_%7C-%7C1770719090262%7C1770719090262%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C25%7C20061%7C_ts_%7C-%7C1770719090263%7C1770719090263%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C26%7CKD49%5Epaccno%7C_useraction_%7C-%7C1770719090263%7C1770719090263%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C27%7C1%7C_source_%7C-%7C1770719090264%7C1770719090264%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%"
		"5Esk0%5Esh0$rId=RID_1318254503$rpId=769694612$domR=1770719070307$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1770719070123$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119070200_248$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$time=1770719090264", 
		LAST);

	web_custom_request("rb_bf18472vnr_16", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=1236677636&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C28%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1770719090668%7C1770719090668%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C29%7CReferenceError%7C_type_%7C-%7C1770719090669%7C1770719090669%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C30%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%5Ep65%5Ep104%7C_location_%7C-%7C1770719090670%7C1770719090670%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C31%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInput"
		"Element.onkeypress%20%28http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%3A65%3A104%29%7C_stack_%7C-%7C1770719090671%7C1770719090671%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C32%7C20468%7C_ts_%7C-%7C1770719090672%7C1770719090672%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C33%7CKD52%5Epaccno%7C_useraction_%7C-%7C1770719090672%7C1770719090672%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C34%7C1%7C_source_%7C-%7C1770719090673%7C1770719090673%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%"
		"5Esk0%5Esh0$rId=RID_1318254503$rpId=769694612$domR=1770719070307$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1770719070123$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119070200_248$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$time=1770719090674", 
		LAST);

	web_custom_request("rb_bf18472vnr_17", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=1135427703&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C35%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1770719090884%7C1770719090884%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C36%7CReferenceError%7C_type_%7C-%7C1770719090885%7C1770719090885%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C37%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%5Ep65%5Ep104%7C_location_%7C-%7C1770719090885%7C1770719090885%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C38%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInput"
		"Element.onkeypress%20%28http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%3A65%3A104%29%7C_stack_%7C-%7C1770719090886%7C1770719090886%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C39%7C20684%7C_ts_%7C-%7C1770719090887%7C1770719090887%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C40%7CKD50%5Epaccno%7C_useraction_%7C-%7C1770719090888%7C1770719090888%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C41%7C1%7C_source_%7C-%7C1770719090889%7C1770719090889%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%"
		"5Esk0%5Esh0$rId=RID_1318254503$rpId=769694612$domR=1770719070307$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1770719070123$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119070200_248$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$time=1770719090891", 
		LAST);

	web_custom_request("rb_bf18472vnr_18", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=2590718538&co=snappy&st=1770719091446&ss=0&qc=2034666397&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x82:D{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719089433,\"duration\":0,\"dt.rum.schem\\x1D\\xAFP\"0.22.0\",\"error.sourc\\x01\\x92\\x10excep\\x05>T,\"characteristics.has_\\x05/\\x14\":trueZ!\\x00\\x15A\r%\\x15\\x11\\x18.messag\\x01f\\xB0Uncaught ReferenceError: valid is not defined\\x01\\xA5\\x11U\\x0C.typ\\x01A68\\x002\"\\x00 stack_tra\\x05\\xD06)"
		"\\x00Va\\x00\\xF0V\\\\n    at HTMLInputElement.onkeypress (http://192.168.1.29:7001/LoanIQ/login.jsp:65:104)2\\x96\\x000file.full\":\"h\\x9EJ\\x002B\\x00<line_number\":65,=Y\\x14column\\x15\\x1D\\x10104,\"-\\xF9\\x18applica!\\xD2\\x00.EL<ea7c4b59f27d43eb]y\\x10frame:{\\x02@d7888393b7f61276\"\\x19Z\\x00g!\"u\\x01`\"1.329.10.20260206-100503>2\\x00\\x00t)\\xC2$javascript\\x19!\\x00bm\\x02\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t"
		"0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-A\\xEF-\\x17\\x1Cinstance)\\x14\\x001mA\\x9038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,\\x95\t\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7@\":1.25,\"page.url.\\xCA\\x91\\x02\\x05<1?\\x00_%\\xA9J$\\x02\\x05&,detected_nama\\xB5\\x08/Lo6*\\x03\\x00\"\r\\x8B\\x0Ctitl\\x01!(Welcome To \t+\\x18\",\"view:p\\x00<4197891e5104a5cc\\x11"
		"&\\xDA\\xD2\\x00\\x05b\\x86\\xAC\\x00\\x04},"
		"\\xFE\\xC3\\x05\\x92\\xC3\\x05\\x0488a\\xBD\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xEA\\xC3\\x05\\x009\\x0E\\xFF\\x08\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\x"
		"FE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xF6\\x86\\x0B\\x1090667\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05"
		"\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\x0488\\x0E\\x94\\x17\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11\\xFEI\\x11ZI\\x11\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_19", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=1809756535&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C42%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1770719091687%7C1770719091687%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C43%7CReferenceError%7C_type_%7C-%7C1770719091688%7C1770719091688%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C44%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%5Ep65%5Ep104%7C_location_%7C-%7C1770719091688%7C1770719091688%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C45%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInput"
		"Element.onkeypress%20%28http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%3A65%3A104%29%7C_stack_%7C-%7C1770719091688%7C1770719091688%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C46%7C21487%7C_ts_%7C-%7C1770719091689%7C1770719091689%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C47%7CKD56%5Epaccno%7C_useraction_%7C-%7C1770719091689%7C1770719091689%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C48%7C1%7C_source_%7C-%7C1770719091690%7C1770719091690%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%"
		"5Esk0%5Esh0$rId=RID_1318254503$rpId=769694612$domR=1770719070307$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1770719070123$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119070200_248$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$time=1770719091690", 
		LAST);

	web_custom_request("rb_bf18472vnr_20", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=1670617449&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C49%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1770719091807%7C1770719091807%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C50%7CReferenceError%7C_type_%7C-%7C1770719091807%7C1770719091807%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C51%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%5Ep65%5Ep104%7C_location_%7C-%7C1770719091808%7C1770719091808%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C52%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInput"
		"Element.onkeypress%20%28http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%3A65%3A104%29%7C_stack_%7C-%7C1770719091810%7C1770719091810%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C53%7C21607%7C_ts_%7C-%7C1770719091811%7C1770719091811%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C54%7CKD53%5Epaccno%7C_useraction_%7C-%7C1770719091812%7C1770719091812%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C55%7C1%7C_source_%7C-%7C1770719091813%7C1770719091813%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%"
		"5Esk0%5Esh0$rId=RID_1318254503$rpId=769694612$domR=1770719070307$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1770719070123$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119070200_248$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$time=1770719091814", 
		LAST);

	web_custom_request("rb_bf18472vnr_21", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=167965694&co=snappy&st=1770719093689&ss=0&qc=3426869261&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xB9\\x17D{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719091687,\"duration\":0,\"dt.rum.schem\\x1D\\xAFP\"0.22.0\",\"error.sourc\\x01\\x92\\x10excep\\x05>T,\"characteristics.has_\\x05/\\x14\":trueZ!\\x00\\x15A\r%\\x15\\x11\\x18.messag\\x01f\\xB0Uncaught ReferenceError: valid is not defined\\x01\\xA5\\x11U\\x0C.typ\\x01A68\\x002\"\\x00 stack_tra\\x05\\xD06)"
		"\\x00Va\\x00\\xF0V\\\\n    at HTMLInputElement.onkeypress (http://192.168.1.29:7001/LoanIQ/login.jsp:65:104)2\\x96\\x000file.full\":\"h\\x9EJ\\x002B\\x00<line_number\":65,=Y\\x14column\\x15\\x1D\\x10104,\"-\\xF9,application.EL<ea7c4b59f27d43eb]y\\x10frame:{\\x02@d7888393b7f61276\"\\x19Z\\x00g!\"u\\x01`\"1.329.10.20260206-100503>2\\x00\\x00t)\\xC2$javascript\\x19!\\x00bm\\x02\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-A\\xEF-\\x17\\x1Cinstance)"
		"\\x14\\x001mA\\x9038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,\\x95\t\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7@\":1.25,\"page.url.\\xCA\\x91\\x02\\x05<1?\\x00_%\\xA9J$\\x02\\x05&,detected_nama\\xB5\\x08/Lo6*\\x03\\x00\"\r\\x8B\\x0Ctitl\\x01!(Welcome To \t+\\x18\",\"view:p\\x00<4197891e5104a5cc\\x11&\\xDA\\xD2\\x00\\x05b\\x86\\xAC\\x00\\x04},"
		"\\xFE\\xC3\\x05\\x92\\xC3\\x05\\x08805\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05f\\xC3\\x05\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_22", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=1971763868&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C56%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1770719093988%7C1770719093988%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C57%7CReferenceError%7C_type_%7C-%7C1770719093989%7C1770719093989%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C58%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%5Ep67%5Ep108%7C_location_%7C-%7C1770719093990%7C1770719093990%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C59%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInput"
		"Element.onkeypress%20%28http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%3A67%3A108%29%7C_stack_%7C-%7C1770719093991%7C1770719093991%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C60%7C23788%7C_ts_%7C-%7C1770719093992%7C1770719093992%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C61%7CKD%5Eppassword%7C_useraction_%7C-%7C1770719093993%7C1770719093993%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C62%7C1%7C_source_%7C-%7C1770719093994%7C1770719093994%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1"
		"%5Esk0%5Esh0$rId=RID_1318254503$rpId=769694612$domR=1770719070307$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1770719070123$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119070200_248$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$time=1770719093995", 
		LAST);

	web_custom_request("rb_bf18472vnr_23", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=1869740367&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C63%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1770719094168%7C1770719094168%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C64%7CReferenceError%7C_type_%7C-%7C1770719094169%7C1770719094169%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C65%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%5Ep67%5Ep108%7C_location_%7C-%7C1770719094170%7C1770719094170%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C66%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInput"
		"Element.onkeypress%20%28http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%3A67%3A108%29%7C_stack_%7C-%7C1770719094171%7C1770719094171%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C67%7C23968%7C_ts_%7C-%7C1770719094171%7C1770719094171%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C68%7CKD%5Eppassword%7C_useraction_%7C-%7C1770719094172%7C1770719094172%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C69%7C1%7C_source_%7C-%7C1770719094173%7C1770719094173%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1"
		"%5Esk0%5Esh0$rId=RID_1318254503$rpId=769694612$domR=1770719070307$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1770719070123$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119070200_248$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$time=1770719094175", 
		LAST);

	web_custom_request("rb_bf18472vnr_24", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=932489416&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C70%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1770719095495%7C1770719095495%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C71%7CReferenceError%7C_type_%7C-%7C1770719095496%7C1770719095496%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C72%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%5Ep67%5Ep108%7C_location_%7C-%7C1770719095496%7C1770719095496%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C73%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInput"
		"Element.onkeypress%20%28http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%3A67%3A108%29%7C_stack_%7C-%7C1770719095497%7C1770719095497%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C74%7C25295%7C_ts_%7C-%7C1770719095497%7C1770719095497%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C75%7CKD%5Eppassword%7C_useraction_%7C-%7C1770719095498%7C1770719095498%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C76%7C1%7C_source_%7C-%7C1770719095498%7C1770719095498%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1"
		"%5Esk0%5Esh0$rId=RID_1318254503$rpId=769694612$domR=1770719070307$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1770719070123$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119070200_248$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$time=1770719095499", 
		LAST);

	web_custom_request("rb_bf18472vnr_25", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=2070524246&co=snappy&st=1770719095994&ss=0&qc=3068928853&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xBF.D{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719093987,\"duration\":0,\"dt.rum.schem\\x1D\\xAFP\"0.22.0\",\"error.sourc\\x01\\x92\\x10excep\\x05>T,\"characteristics.has_\\x05/\\x14\":trueZ!\\x00\\x15A\r%\\x15\\x11\\x18.messag\\x01f\\xB0Uncaught ReferenceError: valid is not defined\\x01\\xA5\\x11U\\x0C.typ\\x01A68\\x002\"\\x00 stack_tra\\x05\\xD06)"
		"\\x00Va\\x00\\xF0V\\\\n    at HTMLInputElement.onkeypress (http://192.168.1.29:7001/LoanIQ/login.jsp:67:108)2\\x96\\x000file.full\":\"h\\x9EJ\\x002B\\x00<line_number\":67,=Y\\x14column\\x15\\x1D\\x10108,\"-\\xF9\\x18applica!\\xD2\\x00.EL<ea7c4b59f27d43eb]y\\x10frame:{\\x02@d7888393b7f61276\"\\x19Z\\x00g!\"u\\x01`\"1.329.10.20260206-100503>2\\x00\\x00t)\\xC2$javascript\\x19!\\x00bm\\x02\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t"
		"0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-A\\xEF-\\x17\\x08inse`)\\x14\\x001mA\\x9038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,\\x95\t\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7@\":1.25,\"page.url.\\xCA\\x91\\x02\\x05<1?\\x00_%\\xA9J$\\x02\\x05&,detected_nama\\xB5\\x08/Lo6*\\x03\\x00\"\r\\x8B\\x0Ctitl\\x01!(Welcome To \t+\\x18\",\"view:p\\x00<4197891e5104a5cc\\x11&"
		"\\xDA\\xD2\\x00\\x05b\\x86\\xAC\\x00\\x04},"
		"\\xFE\\xC3\\x05\\x8E\\xC3\\x05\\x0441a\\xDB\\x00d\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xEE\\xC3\\x05\\x0C5494\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x8"
		"6\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFA\\x86\\x0B\\x0C5881\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\"
		"xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05f\\xC3\\x05\\x08]}}", 
		LAST);

	lr_think_time(2);

	web_custom_request("rb_bf18472vnr_26", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=96226478&co=snappy&st=1770719098031&ss=0&qc=828010452&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xC5ED{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719096027,\"duration\":0,\"dt.rum.schem\\x1D\\xAFP\"0.22.0\",\"error.sourc\\x01\\x92\\x10excep\\x05>T,\"characteristics.has_\\x05/\\x14\":trueZ!\\x00\\x15A\r%\\x15\\x11\\x18.messag\\x01f\\xB0Uncaught ReferenceError: valid is not defined\\x01\\xA5\\x11U\\x0C.typ\\x01A68\\x002\"\\x00 stack_tra\\x05\\xD06)"
		"\\x00Va\\x00\\xF0V\\\\n    at HTMLInputElement.onkeypress (http://192.168.1.29:7001/LoanIQ/login.jsp:67:108)2\\x96\\x000file.full\":\"h\\x9EJ\\x002B\\x00<line_number\":67,=Y\\x14column\\x15\\x1D\\x10108,\"-\\xF9\\x18applica!\\xD2\\x00.EL<ea7c4b59f27d43eb]y\\x10frame:{\\x02@d7888393b7f61276\"\\x19Z\\x00g!\"u\\x01`\"1.329.10.20260206-100503>2\\x00-\\xC2$javascript\\x19!\\x00bm\\x02\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-A\\xEF-\\x17\\x00im`)"
		"\\x14\\x001mA\\x9038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,\\x95\t\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7@\":1.25,\"page.url.\\xCA\\x91\\x02\\x05<1?\\x00_%\\xA9J$\\x02\\x05&,detected_nama\\xB5\\x00/>*\\x03\\x00\"\r\\x8B\\x0Ctitl\\x01!(Welcome To \t+\\x18\",\"view:p\\x00<4197891e5104a5cc\\x11&\\xDA\\xD2\\x00\\x05b\\x86\\xAC\\x00\\x04},"
		"\\xFE\\xC3\\x05\\x92\\xC3\\x05\\x0419a\\xBD\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xF2\\xC3\\x05\\x08663\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B"
		"\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\xFE\\x86\\x0B\\x08897\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x0"
		"5\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFA\\xC3\\x05\\x08725\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xFE\\xC3\\x05\\xEE\\xC3\\x05\\xA5\\xC3\\x0452\\x0EW\\x1D\\xFE\\x0C\\x17\\xFE\\x0C\\x17"
		"\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17\\xFE\\x0C\\x17Z\\x0C\\x17\\x08]}}", 
		LAST);

	web_reg_find("Text=LoanIQ: Customerhome", 
		LAST);

	lr_think_time(2);

	web_submit_data("Login", 
		"Action=http://192.168.1.29:7001/LoanIQ/Login?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=accno", "Value=IQ14285", ENDITEM, 
		"Name=password", "Value=Akon@186", ENDITEM, 
		"Name=x", "Value=40", ENDITEM, 
		"Name=y", "Value=14", ENDITEM, 
		LAST);

	web_custom_request("rb_bf18472vnr_27", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=328857858&co=snappy&st=1770719100906&ss=1&qc=1405385670&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xA4.D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"view.fo\\x11?,_time\":27713\r\\x1D\\x0Cback\t\\\\\r\\x1Dp3068,\"error.http_4xx_count\":02\\x19\\x00\\x005J\\x19\\x00 exception\\x113\\x0417\\x114 csp_viola.\\x1F\\x00\\x15R\\x1Cdropped_BA\\x00\\x15\"\\x05\\x8D\\x10other\\x11\\\\\\x180,\"cls.!'4us\":\"reported\"\t\\x18)b:-\\x00\\x10value\\x05\\xCA\\x08fcp\\x11\\x0E\\x0C220,"
		"\\x05\\x10\\x1Cloading_\\x01S!z complete\"\t\\x1F\\x01\\x17>j\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-w\\x1417784,\\x05N\\x08dur%$\\x0C\":32\t\\x12\\x04na!\\xB7,\"pointerdown\\x01\\x91$id.process\r\\xB3\\x08rt\"\tH\\x08.89\\x05\\x01\\x1076158\tC\\x1D*\\x08endf(\\x00<cancelable\":true\t>8ui_element.tag_\r\\x90\\x10INPUT\r\\x8A\\x1D\"Lxpath\":[\"html\",\"body\\x01&\\x18orm\",\"t\\x01\\\\\\x08[2]\\x01\\x0B\r\\x1A\\x04tr\\x01\r!\\xB7\\x05\\x1D\\x01\r6\\x1A\\x00\t/$input\"],\"f"
		":\\xB9\\x01\\x00pri\\x01\\x00pR\\x9F\\x01\\x04inf\\x18\\x0069\\x02\\x042,\\x05-%{\\x04ac.\\xBD\\x02\\x08164\t\\x1Cj\\xE8\\x01\rh5\\xE8\\x1021681:\\xA0\\x01\\x01$9\\xF5\\x0456\tU\\x04na%\\xF5 keypress\"\t\\x16=\\xC8\\x04st%\\xF2\\x01R\\x082.3%\\xF11\\xF2\\x01R\\x1D*%\\xF2\\x1C21692.10\\x05\\x01\\x0C2384\r\\xD9F\\xF2\\x01\\x01>=\\xD0J\\xF2\\x01:\"\\x00\\xFE\\xF2\\x01\\x82\\xF2\\x01\\x04lcV\\xAE\\x01\\x01\\x186\\xAE\\x01\\x041,\\x05\\x15%\\x1Cm[e\\xDE\\x01*!\\xA7\r\\x14\\x000\r"
		"'\\x04iz\\xA1\\x10\\x0404\r7\\x14render\r$\\x158V\\x0C\\x01\\x08TD\"\tE\\x1D\\x1F\\xFE\t\\x012\t\\x01\\x04[4e%4d\"],\"long_task\\x01\\xDA\\x89\\x84\\x0Cnot_\\x9D\\xF2\\x0Cttfb\\x19\\x1D>\\x19\\x00\\x8D\\xF7\\x0C56.8E\\x00$071525574,\t9\\x0Cwait\\x81FY\\x87\\x0415\r\\x1B\\x10cache\\x1D\\x19\\x000\r\\x18\\x08dnsJ\\x16\\x00\\x10connei&\\x19L\\x113\\x18request\\x1D\\x1A\\x0441F\\x91\\x00\\x08per\\x81,\\x81\\x89\\x00.aq\\x00v\\xA5\\x0EQ\\xEF\\x000\\xCD\\xB9\\x00s\\x01L(nce_number\""
		"!\\xFA\\x00v\\xC1\\xEF\\x08pre2\\xC7\\x01\\xC1&\\x04haa\\xBB0eristics.has_\\x01,\\x1C_summary\\x91\\xEB\\x10navig\\x05n\\xE1_\\x01r\\xC5\\x06\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\xC1#\r4\\x81\\xB6.\\xB9\\x00\\xE1j\\x18_origin\\xA5m,0719070123,\".\\x9D\\x02\\x04172\\x1B\\x0094H30781,\"dt.rum.schem*I\\x08\\x1C\"0.22.0\"\\x15!\\x14applic\t\\xBCPid\":\"ea7c4b59f27d43eb\\xA1\\x89\\x1A;\\x08 frame.ins*=\\x08<d7888393b7f61276\\x1DZ\\x00g\\xA1\\xF7\"\\xC3\\x08`\"1.329.10.20260206-100503>2\\x00- "
		"$javascript\\x19!\\x11\\x89\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-=\\x17\\x11\\xE5)\\x141m\\x9038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\<\":\"landscape-priE>\\x04,\"\r)$screen.wid\\xE1\\x01\\x0C1536>\\x1B\\x00,height\":864,\"\\xCB\t\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_r\\x01\\xA7|\":1.25,\"page.url.full\":\"http://1\\xC1\\x08t68.1.29:7001/LoanIQ/login.jsp\"\r<1?"
		"\\x00_%\\xA9J$\\x02\\x05b\\x1Cdetected\\x1E\\x18\\x08bO\\x00\\x08tit\\x0EX\\x08,\"Welcome To \tz\\x00\"m\\xD56p\\x00<4197891e5104a5cc\\x11&\\x00u\\xD6\\xD2\\x00\\x00v\\x81\\x1E\\x86\\xAC\\x00\\x04},\\xFE\\x85\\x0B:\\x85\\x0B%$&\\xC4\\x0B\\xD1^\\x0C7714-gN\\x85\\x0B\"8\\x0B"
		"!\\xB5\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0B\\xFE\\x85\\x0BJ\\x85\\x0BNT\\x0B\\xC1\\xEA\\x00_"
		":T\\x0B\\x01\\x14N\\x94\\x0B\\x1A8\\x0B\\x04io\\xFEl\\x0B\\xFEl\\x0B\\xFEl\\x0B\\xFEl\\x0B\\xFEl\\x0B\\xFEl\\x0B\\xFEl\\x0B\\xFEl\\x0B\\xFEl\\x0B\\xFEl\\x0B\\xFEl\\x0B\\xFEl\\x0B\\xFEl\\x0B\\xFEl\\x0B\\xFEl\\x0B\\xF2l\\x0B\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_28", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=1156894731&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C77%7C_event_%7C1770719100903%7C_viewend_%7Cinp%7C56%7Csvn%7C%2FLoanIQ%2Flogin.jsp%7Csvt%7C1770719070123%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C78%7C_event_%7C1770719100903%7C_pageend_%7Cinp%7C56%7Curl%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$rId=RID_1318254503$rpId=769694612$domR=1770719070307$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1770719070123$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url="
		"http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119070200_248$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp$time=1770719100904", 
		LAST);

	web_custom_request("rb_bf18472vnr_29", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=3240822727&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/Login?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7Clogin%7CC%7C-%7C119070200_248%7C1770719100808%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%7C%7C%7C%2FLoanIQ%2Flogin.jsp%7C1770719070123%2C1%7C1%7C_load_%7C_load_%7C-%7C1770719100813%7C1770719101080%7Cdn%7C71%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Flogin.jsp%2C2%7C3%7C_event_%7C1770719100813%7C_vc_%7CV%7C264%5Epc%7CVCD%7C1028%7CVCDS%7C1%7CVCS%7C326%7CVCO%7C1335%7CVCI%7C0%7CTS%7C0%7CVE%7C1148%5Ep118"
		"%5Ep2100%5Eps%5Estd%3Anth-of-type%286%29%3Ediv%3Afirst-child%3Ea%3Afirst-child%3Eimg%3Afirst-child%7CS%7C118%2C2%7C4%7C_event_%7C1770719100813%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Cdiv.welcome%7ClcpS%7C7110%7ClcpT%7C132%7ClcpU%7C-%7ClcpLT%7C0%7Cfcp%7C132%7Cfp%7C132%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1770719101080%7C1770719101080%7Cdn%7C71%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1770719100813%7C_view_%7Csvn%7C%2FLoanIQ%2Flogin.jsp%7Csvt%7"
		"C1770719070123%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=192.168.1.29,$rId=RID_-2035572221$rpId=121540849$domR=1770719101078$tvn=%2FLoanIQ%2FLogin$tvt=1770719100813$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1770719100813e15f15g15h15i15k16l88m89o118p119q120r265s267t267u3924v3624w3624X200M121540849V0W1$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3DEwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN"
		"!861341624!1770719038016$title=LoanIQ%3A%20Customerhome$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119100916_785$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3DEwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016$time=1770719102170", 
		LAST);

	web_custom_request("rb_bf18472vnr_30", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=3561963729&co=snappy&st=1770719103096&ss=0&qc=3132519559&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/Login?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xF7\\xA7\\x01D{\"data_version\":2,\\x05\\x11\\xF4\\x81\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719100908,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.29:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10329260206100503.js\",\"network.protocol.name\":\"http\",\"performance.time_origin\":177071910081!\\x89"
		"(t.rum.schem=\\xA3\\x18\"0.22.0:I\\x00\\x00s=I\\x1096.30\\x05\\x01 7152557,\".@\\x01 next_hop_\\x11\\xA0\\x04\":\\x05\\x9B\\x0C/1.1:V\\x004domain_lookup_\\x05d\\x00\"~_\\x0064\\x00\\x08end\\x822\\x00\\x18connect\\x9A`\\x00\\x11.\\x8EZ\\x00\\x18secure_\r3\\x08ion\\x11d\\x0006\\x13\\x01\\x04reE%\\x11\\x1EzA\\x01\\x1Cresponse\\xBE/\\x00\\x8E\\xB2\\x00\\x10redir=\rB\\xA9\\x00\r\\x1F\\x05L:\\x1D\\x00Au\\x04er\\x11\\x96:\\x1D\\x00\\x10fetch\\x11\\x1CJ\\xE1\\x00a\\x0E\\x15\\xDAAO,tus_code\":20"
		":L\\x008render_blocking\\x01V\\x14tus\":\"\\x11\\x12:G\\x024first_interim_>?\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\">-\\x00\\x1Cdelivery\\x91\\x0B\\x10cache:~\\x00\\x14transf!\\x19\\x08izeBB\\x00\\x04en\\x01\\xE5\\x18d_body_\t\"\\x141243636\"\\x02\\x04deB'\\x00\\x1C339192,\"M=(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracE\\x99\\x00te\\x8E\\x19-\\x0Cset\"V\\xCA\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85\\xD7\\x8D,\\x18applicaA\\xEA\\x00.\\xA5s"
		"<ea7c4b59f27d43eb\\xBD\\xA0\\x10frame:\\xA2\\x058038e3ba7bcf05c5\\x01\\xB1\\x11Z\\x10gent.\\xD5(0\"1.329.10.202\\xA5\\x01 -100503\",62\\x00\\x04ty\\xA5\\xA3\\x10javas\\xB1\\xA7\rS\\x00b\\xCD)\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x19Y\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-\\xA1\"\rj\\x00i\\xCD\\x87)\\x14\\x001\\xC9h\\xD8038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,"
		"\\xF50\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03<\":1.25,\"page.url\\x9E\\xF8\\x06\\xF0PLogin?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!15p\\x08016a\\x9C\\x01\\x901\\x93\\x00_%\\xFDJx\\x02\\x05&$detected_n\\xE9B\\xF1\\x9B\\x05\\xA3\\x11K\\x0Ctitl\\x0E\\x86\\x08HLoanIQ: CustomerhomA\\xC1\\x0Cview:o\\x00848f7ed3a611eabbA\\xB5\\x05&\\xFE%\\x01\\xFE%\\x01=%\\x05\\x90v\\xFF\\x00\\x04},\\xFE\\x8D\t:\\x8D\t\\x00c:?\t"
		"Dis_self_monitoring\\x91oJ*\\x00\\x00i\\xA1\\xDE\\x08nal\\x11#\\x12-\\x08\\x81\\xA7\\x00e2\\xDA\t\\x002a\r.\\xDA\tm\\xA3f\\xE6\\x08\\x11!\\x08fm_*\\x86\n\\x0E9\t\\x10stamp6^\\x00\\x081,\"\\xA1\\xA8\\xC5\\xB4 0,\"messagA\\x1Da\\xF5 643675849%;\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\xA1\\x08\\x14 JavaS\\x85\\xCF0 tag\\\\\",[]]\"}]"
		"\\x99\\xFC\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xFE\\x88\\x05\\xF2\\x88\\x05Z;\\x05\\x0408.\\x15\\x0F\\x1091.39\\x05\\x01\\x1876158146\\xB0\nB%\\x0F\\x08imgZX\n\\x1A\\x93\n\\xB1\\xB9\\xAA\\x05\\x07Pimages/Accounts.JPG\",\\xFE\\xFF\\x0E\\xFE\\xFF\\x0E\\x0E\\xFF\\x0E\\x0E\\xF6\\x08\\x00e&"
		"f\\x0F\\x04ne\\xEE\\xF2\\x0E\\x12\\xF2\\x0E:R\\x00V\\xE5\\x0E:%\\x00\\x1Aw\\x0E\\x1E\\xBB\\x0C\\x0C97.8\\x12\\x96\\x0FV\\x97\\x0F\\x11.\\x12\\xDA\r\\x0C98.8%\\xDDV\\xDE\\x01\\xDE\\xD8\\x0E\\x0096%\\x02>\\x8A\r\\x08187rU\\x02\\x150\\x05\\xA4\\x01.n\\xA5\\x00\\xFE\\xCB\\x0E\\xA2\\xCB\\x0E\\x045,\\xFE\\xBE\\x0E\\x16\\xBE\\x0E\\x0Cnon-\\xFE\\xC2\\x0E\\x86\\xC2\\x0E!7n\\xBA\\x03>\\xD3\\x0E\\x0E\\xE7\n]\\xCC:\\xCE\\x0E\\x0C1361:A\\x0FN\\xD2\\x0E\\x0433>&\\x00J\\xD1\\x0E\r&\\x8D\\x10^"
		"\\xD0\\x0E\\x00_\\x16\\xBB\\x0E\\x10info\"&\\xFD\\x0E\t\\x15\\x04co\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E\\xFE\\xD0\\x0E.\\xD0\\x0E\\x92H\t\\x10107.2\\xE9k\\x1052316\\x0Ew\\x11.p\\x05\\xFEI\t\\xAEI\t\\x0E\\xC2\\x10\\xFEF\t\\xFEF\t*F\tn\\xAE\\x08\\xEES\t\\x1AS\tn_\\x00V`\tn2\\x00\\x1E?"
		"\t%\\xF5\\x08\":1\\x0E\\xFF\\x0F.\\xC8\\x01\\x11 \\x16\\xBB\\x08\\x0400rM\\x00\\xDA`\t\\x08101va\t\\x08203r\\x9B\\x196a\t\\x10204.1\\x162\n\\x182384186>^\\x00\\x1A\r\\x18\r\\xF4:\\x08\\x08\"\\x80\t\\x05\\xF3:\\x1D\\x00\\xB2,\\x18>x\\x01\\xFE,\\x18\\x12,\\x18\\xFEn\t\\x96n\t~r\\x01\\xBAn\t\\x08063:I\\x01Nn\t\\x0403>&\\x00Nn\t\t&\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\xFEn\t\\x82n\t"
		"\\x009.\\xB6\\x12\\x10121.6j\\xD3\\x06\\xFEn\t\\xAEn\t\\x0Ccard\\xFEn\t\\xFEn\t\"n\t\\x007r\\xEA\\x07\\xEEn\t\\x12n\tv_\\x00Nn\tv2\\x00\\x1EN\t\\x1Az\\x08\\x08118r\\xC0\\x00\\x11/\\x12\\x8A\\x08\\x08119r\\x05\t\\xDE}\t\\x0419\\x0E\n\\x12.\\xF4\t\"O\t\r\\xA7\\x08218r{\\x11\\x150\\x05\\xA8\\x01.\\x007I\\xAC\\x184768372\\xFE\\x7F\t\\xD2\\x7F\tF\\x89\\x01\\xFE\\x7F\t\\xFE\\x7F\t\\xAE\\x7F\tzr\\x01\\xBA\\x7F\t\\x0446\\x0E\\x94\\x1B.\\xE3\\x01N\\x7F\t\\x0443>&\\x00N\\x7F\t\t&\\xFE\\x7F\t\\xFE\\x7F\t"
		"\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xBA\\x7F\t\\x003v\\x01\\x07\\xFE\\x7F\t\\xAE\\x7F\t\\x18Billpay\\xFE5\\x1C\\xFE5\\x1C\\x1E5\\x1CFg\\x07.g\\x06\\xFE\\x81\t\\xFE\\x81\t\\x86\\x81\tv\\xBA\\x1BB\\x81\t\\x002j\\xD9\\x08\\xEA\\x81\tn\\xD9\\x1A\"^\t\\x1E\\x8E\t\\x0435r\\x87\\x00\\x150\\x16\\x8E\t\\x0435F\\xDF\t"
		"\\xFE\\x00\\x13\\x92\\x00\\x13F\\x1A\\x02\\xFE\\x81\t\\xFE\\x81\t\\xAE\\x81\tze\\x01\\xBA\\x81\t\\x0C07486\\x06\\x0BN\\x81\t\\x0404>&\\x00N\\x81\t\t&\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xFE\\x81\t\\xBA\\x81\t\\x0453\\xFE\\x00\\x13\\xFE\\x00\\x13\"\\x00\\x13\\x10Demat\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t\\xFE\\x7F\t"
		"\\xFE\\x7F\t\\x1A\\x7F\t\\x0452r\\xFB\\x086\\x7F\t\\x0452BR\\x1B.l\n\\xDE\\x7F\tzW\\x00\"O\t\\x1E\\x7F\t\\x0450r\\x87\\x13\\x150\\x16\\x7F\t\\x0450\\xFE\r\\x13\\xFE\r\\x13\\xFE\r\\x13\\xFE\r\\x13\\xEE\r\\x13\\x16\r\\x13zr\\x01\\xBE\\x8C\t\\x0417:\\xD0'J\\x8C\t\\x0498>%\\x00J\\x8B\t\t%\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t\\xFE\\x8A\t"
		"\\xFE\\x8A\t\\xBA\\x8A\t\\x0466r\\xBE,\\xFE\\x0B\\x13\\xAE\\x0B\\x13\\x10logou\\xFE\\x8B\t\\xFE\\x8B\t*\\x8B\tn\\x1D\\x12\\xEE\n\\x13\\x1A\n\\x13n_\\x00V\\x8B\\x1Cn2\\x00\\x1E\\\\\t\\x1A\\xD7\\x08\\x08172\\xAA\\x8B\\x1C\\x0472r\\x8F\\x0B\\xDE\\x8B\t\\x0472z-\t6A>\\x0C263..d%B\\xE8%\r/\\x16\\x8A\t\\x0464r\\xE1\\x00\"\\xF7%-\\x11:\\xB0$\\x15\\x1F\\x05M:\\x1D\\x00\\xAA\\x16&\\x007B\\x95\\x01\\xFE\\x16\\x13\\xFE\\x16\\x13\\xAE\\x16\\x13vq\\x01\\xBA\\x89\t\\x08111:.>J\\x89\t\\x08108>&\\x00J\\x8A\t\r&"
		"\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\t\\xFE\\x8B\tz\\x8B\t\\x0481\\x0E\\xDFF\"\\x06>\\x08266>\\xDB\\x19B~\t\\x10navig\\x0E\\xD6@\\x0E\\xF7?>\\x7F>\\x04ha\\xEE\\xE8G\\x12M@\\xFE\\xF0@j\\xF0@\\x08net\\xE1X\\x00.\\x1EoG\\x00.\\x1A\\xCD@\\xE10>\\xDD5\\x0Cime_\\xFE\\x0FH>\\x0FH:\\xE4\\x07\\xFE\\xC1\t\\x041463\t\\x005"
		":\\x11\\x1AJ\\xC2\t~3\\x00>\\xC3\tzb\\x00\\x11/\\x12\\xC2\\x08~-\\x00\\xDE\\xC3\t\\x0052\\x92\t\\x0457:`;\"\\x1E\\x13\\x1Af\t\\x0487>\\xC3\\x02\\x15\"\\x05\\xA7\\x0488F \\x00\\xFE\\xBE\\x1C\\x8E\\xBE\\x1CN\\x1F\\x01Ay\\x15\\x9F\\xDE\\xEBG\\xFE\\xBF/\\x96\\xBF/FW\\x01\\xB6\\x9C\t\\x08392:\\xB9\\x01J\\x9B\t\\x0436>%\\x00J\\x9A\t\t%\\xFE\\x99\tN\\x99\t\\x12\\xEAD\\x16\\xD7G\\xAE\\x82D\\x00l\\x0E\\xA7E\\x08.js\\x81DN\\x11\\x05\\x0E/H\\xB96\\x0E\\x8AC\\x04in&1HN2\\x00\\x19.\\x1E\\x0C"
		">.\\x97\\x16\\x14unload\\x16\\x84CQ\\xF6:[\\x042#\\x00E\\xF7:!\\x00\\x08dom\\x16)D\\x10activ\\x0E\\x1AD\\x0418BH\\x0C.u\\x00\\x011\\x12U:\\x08nt_\\x01\\x7F\\x00e:\\x81\\x00\\x01@n\\xA4)b@\\x00\\x05\\x9E\\x0E3*.x\r>*M\t>\\x10mplet\\x0ESD\\x0465r\\xE5\\x17\\x01\\xA06\\x1F\\x01J\\xD9\\x06\\x1D%\\x05\\x83J#\\x00\"\\xA2\r\\x12V?\\x12\\xB1J9\\x9A\\x1EQI\r\\x12\\x0E\\xE1F\r\\x0B\\x08ion\\x0EtO!\\x9B\\x01\\xAE\\x14\"exist\\x0E\\xB4E\\x00,\\x16MF\\x10seque\\x0E\\x8CO number\""
		":1\\xFE\\xAFD\\xFE\\xAFD\\xFE\\xAFD\\xFE\\xAFD\\xFE\\xAFD\\xFE\\xAFD\\xFE\\xAFD\\xFE\\xAFD\\xFE\\xAFD\\xFE\\xAFD\\xFE\\xAFD\\xFE\\xAFD\\xFE\\xAFD\\xFE\\xAFD\\xFE\\xAFD\\xDA\\xAFD\\x08]}}", 
		LAST);

	lr_end_transaction("AB_AccountSummary_T03_UserLogin",LR_AUTO);

	web_custom_request("rb_bf18472vnr_31", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=3857010432&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/Login?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2FLogin$tvt=1770719100813$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$rt="
		"1-1770719100813%3Bhttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2FAccounts.JPG%7Cb97e0f0g0h1i2k3l91m91u13610v13310w13310X200E1F2700O90P30Q652R127I7M-2024045161V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2FLoans.JPG%7Cb97e0f0g0h3i4k4l107m107u10630v10330w10330X200E1F2100O70P30Q652R127I7M-1476813297V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2Fcards.JPG%7Cb97e0f0g0h21i22k22l121m122u14603v14303w14303X200E1F3000O100P30Q652R127I7M-543547986V0%7Chttp%3A%2F%2F192.168.1.29%3A70"
		"01%2FLoanIQ%2Fimages%2FBillpay.JPG%7Cb97e0f0g0h20i22k22l138m138u10748v10448w10448X200E1F2250O75P30Q652R127I7M1575176587V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2FDemat.JPG%7Cb97e0f0g0h55i56k56l153m154u10179v9879w9879X200E1F2100O70P30Q652R127I7M389898891V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2Flogout.JPG%7Cb97e0f0g0h75i75k76l167m167u11113v10813w10813X200E2F2100O70P30Q652R127I7M462612703V0$url="
		"http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3DEwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016$title=LoanIQ%3A%20Customerhome$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119100916_785$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3DEwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016$time=1770719104205", 
		LAST);

	lr_think_time(2);

	web_custom_request("rb_bf18472vnr_32", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=1&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=1405862744&co=snappy&st=1770719106357&ss=1&qc=3811887638&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/Login?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xB2\nD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"background\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719106354,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.22.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\\x11\\x83\\x08081!\\x0B\\x08om_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D038e3ba7bcf05c5e\","
		"\\x15Z\\x10gent.5\\x9A`\"1.329.10.20260206-100503>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-!\\x88-\\x17\\x08ins%\\xF9)\\x14\\xB01770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xF0\\x87\":1.25,\""
		"page.url.full\":\"http://192.168.1.29:7001/LoanIQ/Login?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!9p\\x10016\",\t\\x901\\x93\\x00_%\\xFDJx\\x02\\x05\\xB6,detected_namAG\\x08/Lo\\x19\\xA3\\x11K\\x0Ctitl\\x01\\x1D\t\\x1C0: CustomerhomA\\xC1\\x0Cview:o\\x00D48f7ed3a611eabb3\",\t&\\xFE%\\x01\\xFE%\\x01=%\\x05\\xB6v\\xFF\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(4);

	web_custom_request("rb_bf18472vnr_33", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=2966650620&co=snappy&st=1770719111199&ss=0&qc=3833373256&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/Login?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xB2\nD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719109184,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.22.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\\x11\\x83\\x08081!\\x0B\\x08om_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D038e3ba7bcf05c5e\","
		"\\x15Z\\x10gent.5\\x9A`\"1.329.10.20260206-100503>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-!\\x88-\\x17\\x08ins%\\xF9)\\x14\\xB01770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xF0\\x87\":1.25,\""
		"page.url.full\":\"http://192.168.1.29:7001/LoanIQ/Login?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!9p\\x10016\",\t\\x901\\x93\\x00_%\\xFDJx\\x02\\x05\\xB6,detected_namAG\\x08/Lo\\x19\\xA3\\x11K\\x0Ctitl\\x01\\x1D\t\\x1C0: CustomerhomA\\xC1\\x0Cview:o\\x00D48f7ed3a611eabb3\",\t&\\xFE%\\x01\\xFE%\\x01=%\\x05\\xB6v\\xFF\\x00\\x0C}]}}", 
		LAST);

	lr_start_transaction("AB_AccountSummary_T04_SelectAccount");

	web_reg_find("Text=LoanIQ: Accounts", 
		LAST);

	lr_think_time(3);

	web_url("accounts.jsp", 
		"URL=http://192.168.1.29:7001/LoanIQ/accounts.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.29:7001/LoanIQ/Login?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf18472vnr_34", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=1551216297&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/Login?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1770719114259%7C_wv_%7CAAI%7C1%7CfIS%7C13288%7CfID%7C1%2C1%7C7%7C_event_%7C1770719114267%7C_viewend_%7Cinp%7C0%7Csvn%7C%2FLoanIQ%2FLogin%7Csvt%7C1770719100813%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1770719114267%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3DEwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRL...$rId=RID_-2035572221$rpId=121540849$domR=1770719101078$tvn=%2FLoanIQ%2FLogin$tvt=1770719100813$tvm="
		"i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3DEwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016$title=LoanIQ%3A%20Customerhome$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119100916_785$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf="
		"http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3DEwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016$time=1770719114268", 
		LAST);

	web_custom_request("rb_bf18472vnr_35", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=1539184805&co=snappy&st=1770719114269&ss=1&qc=3968534007&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/Login?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1770719038016", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xEC*D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"view.fo\\x11?,_time\":10625\r\\x1D\\x0Cback\t\\\\\r\\x1Dl2830,\"error.http_4xx_count\":6\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!&8us\":\"reported\",\\x05\\x18)a:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x0C132,\\x05\\x10\\x1Cloading_\\x01S!y,"
		"dom_content_\\x01\\x1C\\x05\\\\\\x019\\x01!>t\\x00\\x08fidb\\x18\\x00\\x01=.Y\\x00$complete\",\\x117\\x04rt-\\x80\\x1C13287.70\\x05\\x01\\x1047684\t$\\x08dur%;\\x08\":2\r\\x12\\x04na!\\xCD,\"pointerdown\rO\\x18process\rq\\x08rt\"\\x05U\\x008JU\\x00\\x1D*\\x08end\\x11(\\x008\\x05|\\x14071526\t}<cancelable\":true\t\\x168ui_element.tag_\r\\x90\\x08IMG\r\\x88\\x1D \\\\xpath\":[\"html\",\"body\",\"t\\x05S\\x08,\"t\\x11\\x10\\x0Cr[3]\\x01\\x10!\\xC5F\\x1D\\x00\\x11\\x1A\\x88div\",\"a\",\"img[@id=\\\\\""
		"image1\\\\\"]\"],\"fp6\\xDC\\x01\\x00pB\\x82\\x01V\\xDB\\x01\\x00pR\\xC2\\x01\\x04in\\x1D\\x184below_threshol\\x01\\xA8\\x04lc\\x1D\\x1F]\\x85\\x01\\x186\\x85\\x02\\x041,\\x05\\x15\\x04st2\\xEF\\x01\t\\x15A#M\\x03\\x000\t\\x12 size\":711\r\\x10\\x14render\r$E\\xB4\\x05bR\\x85\\x01\\x0CDIV\"\tF\\x1D \\xA6\\x85\\x01\\x0025\\x85!k,],\"long_task\\x01\\xBDI\\xFB\\x0Cnot_\\x1D\\xEE\\x0Cttfb\\x19\\x1D>\\x19\\x00mx\\x1087.5,\t+\\x0CwaitA\\xA2Y\\xD8\\x0C14.6Iz\\x1C23841858\r+\\x10cache\\x1D)\\x000\r"
		"\\x18\\x08dnsJ\\x16\\x00\\x14connec\\x85f\\x19\\\\\\x113\\x18request\\x1D\\x1A\\x1072.89\\x05\\x01<7615814,\"performA\\xF4\\x14.activey\\x81\\x16\\x00r\\xA9\\x05\\x00v\\xA1W\\x00s\\x01K(nce_number\"!\\xDE\\x05\\x19\\x08pre2\\xAB\\x01X0,\"characteristics.has_\\x01,\\x1C_summaryqV\\x10navig\\x05n\\xA1\\xE0\\x01r\\x85\\x88\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\x81\\xA5\r4\\x04e\"6\\xB9\\x00\\xA1\\xEB\\\\_origin\":1770719100812,\"2\\x81\\x026\\x1B\\x0093H13455,\"dt.rum.schem\\xDD\\xCA\\x1C\"0.22.0\""
		"\\x15!\\x14applic\t\\xBCXid\":\"ea7c4b59f27d43eb\",\\xD5\\xBC\\x10frame:\\xBE\\x068038e3ba7bcf05c5\\x01\\xCF\r{\\x04ag\\x81b\\xF5D`\"1.329.10.20260206-100503\\x1D\\x8C\\x052- $javascript\\x19!\\x00b\\xEDE\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-=\\x17\\x08ins\\xE5\\xA3)\\x14-m\\xD8038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\",\"device.orientaA\\xD4<\":\"landscape-priE>\\x15)$screen.wid\\xA1n\\x0C1536>\\x1B\\x00(height\""
		":8649\\x90\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t\\xA6\\x1C_pixel_rA\\x03\\x0C\":1.\\x0Ec\\x08<page.url.full\":\"\\xE1\\xC5\\xF0l://192.168.1.29:7001/LoanIQ/Login?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1I\\xDD\\x14038016a!\\x01\\x901\\x93\\x00_%\\xFDJx\\x02\\x05&\\x1Cdetected\\xD1\\xD72\\xA3\\x00\\x11K\\x08tit\\xE1\\x13\\x00\"\t\\xBF0: CustomerhomA\\xC1\\x00v\\x81(6o\\x00@48f7ed3a611eabb3\"\\x1A\\x88\t"
		"\\x00u\\xFE%\\x01\\xFE%\\x019%\\x05\\xB6v\\xFF\\x00\\x04},\\xFE\\xA9\n:\\xA9\n%s&\\xE8\n\\xD1\\xE5\\x0406\\x0E\\x82\\x08\\x05\\x1D\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xFE\\xA9\n\\xD2\\xA9\nNx\n\\xA1N\\x00_:x\n\\x01\\x14N\\xB8\n\\x1A\\\\\n\\x04io\\xFE\\x90\n\\xFE\\x90\n\\x1A\\x90\n\\x0E\\xCF\\x08\\xFE\\x90\n"
		"\\xFE\\x90\n\\xFE\\x90\n\\xFE\\x90\n\\xFE\\x90\n\\xFE\\x90\n\\xFE\\x90\n\\xFE\\x90\n\\xFE\\x90\n\\xFE\\x90\n\\xFE\\x90\n\\xFE\\x90\n\\xFE\\x90\n\\xFE\\x90\n\\xFE\\x90\n\\xFE\\x90\nR\\x90\n\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_36", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=967029457&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7Cimage1%7CC%7C-%7C119100916_785%7C1770719114208%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3DEwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN%21861341624%211770719038016%7C%7C%7C%2FLoanIQ%2FLogin%7C1770719100813%2C1%7C1%7C_load_%7C_load_%7C-%7C1770719114211%7C1770719114299%7Cdn%7C80%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3DEwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19T"
		"EBtIRLbtAN%21861341624%211770719038016%2C2%7C3%7C_event_%7C1770719114211%7C_vc_%7CV%7C82%5Epc%7CVCD%7C1028%7CVCDS%7C1%7CVCS%7C155%7CVCO%7C1165%7CVCI%7C0%7CTS%7C1%7CVE%7C421%5Ep422%5Ep6930%5Eps%5Esdiv.conditions%3Efont%3Afirst-child%7CS%7C82%2C2%7C4%7C_event_%7C1770719114211%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1770719114299%7C1770719114299%7Cdn%7C80%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1770"
		"719114211%7C_view_%7Csvn%7C%2FLoanIQ%2FLogin%7Csvt%7C1770719100813%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=192.168.1.29,$rId=RID_-1661599622$rpId=-1684708450$domR=1770719114299$tvn=%2FLoanIQ%2Faccounts.jsp$tvt=1770719114211$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1770719114211e14f14g14h14i14k16l52m53o82p83q83r88s88t88u4641v4341w4341X200M-1684708450V0$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Faccounts.jsp$title="
		"LoanIQ%3A%20Accounts$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119114278_938$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Faccounts.jsp$time=1770719115397", 
		LAST);

	web_custom_request("rb_bf18472vnr_37", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=3739219384&co=snappy&st=1770719116318&ss=0&qc=90337952&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xEB\\x9A\\x01D{\"data_version\":2,\\x05\\x11\\xF4|\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719114272,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.29:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10329260206100503.js\",\"network.protocol.name\":\"http\",\"performance.time_origin\":1770719!\\x01<10,\""
		"dt.rum.schem=\\xA3\\x18\"0.22.0:I\\x00\\x00s=I\\x1062.80\\x05\\x01$71525574,\".A\\x01 next_hop_\\x11\\xA1\\x04\":\\x05\\x9C\\x0C/1.1:W\\x004domain_lookup_\\x05e\\x00\"\\x82`\\x0065\\x00\\x08end\\x863\\x00\\x18connect\\x9Eb\\x00\\x11/\\x92\\\\\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006\\x17\\x01\\x04reE*\\x11\\x1E~F\\x01\\x1Cresponse\\xC20\\x00\\x92\\xB5\\x00\\x10redir=\\x12B\\xAC\\x00\r\\x1F\\x05M:\\x1D\\x00A}\\x04er\\x11\\x98:\\x1D\\x00\\x10fetch\\x11\\x1CN\\xE4\\x00a\\x17\\x15\\xDDAX,tus_code\":20"
		":M\\x008render_blocking\\x01W\\x14tus\":\"\\x11\\x12:O\\x024first_interim_>B\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\">-\\x00\\x1Cdelivery\\x91\\x14\\x10cache:~\\x00\\x14transf!\\x1A\\x08izeBB\\x00\\x04en\\x01\\xE5\\x18d_body_\t\"\\x141243636&\\x02\\x04deB'\\x00\\x1C339192,\"MA(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracE\\x9D\\x00te\\x96\\x19-\\x0Cset\"V\\xD3\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85\\xE0\\x8D5\\x18applicaA\\xEE\\x00.\\xA5|"
		"<ea7c4b59f27d43eb\\xBD\\xA9\\x10frame:\\xAB\\x05@8cf276b8a80cc74a\"\\x95\\x8F\\x14agent.\\xD510\"1.329.10.202\\xA5\n\\x18-100503>2\\x00\\x04ty\\xA5\\xAC\\x10javas\\xB1\\xB0\r\\xAD\\x00b\\xCD2\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x19Y\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-\\xA1+\rj\\x00i\\xCD\\x90)\\x14\\x001\\xC9q\\xD8038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,"
		"\\xF59\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03L\":1.25,\"page.url.ful\\xB1\\xF4n\\x01\\x07,accounts.jspaK\\x01?1B\\x00_%\\xACJ'\\x02\\x05&$detected_n\\xC9\\xFA\\xF1SNR\\x00\\x0Ctitl\\x0EE\\x08 LoanIQ: A\rv\\x18\",\"view:r\\x0080ee5496783f118bAg\\x05&\\xE6\\xD7\\x00\\x05?\\x92\\xB1\\x00\\x04},\\xFE\\xFE\\x08\\x9A\\xFE\\x08\\x003\\xAE\\xFE\\x08\\x08imgZ(\\x04\\x8Dc\\x91\\x1B\\xAA#\\x01\\x18images/1\\x8B\\x14.JPG\","
		"\\xFE\\xD8\\x08\\xEE\\xD8\\x08\\x16\\xD8\\x08:\\x8B\\x05\\xEE\\xC8\\x08\\x12\\xC8\\x08:P\\x00N\\xB8\\x08:#\\x00\\x1AE\\x08\\xD1\\x85^\\x1F\\x00\\xE5\\x96>\\x1D\\x00\\xDE\\x88\\x08:\\x83\\x00>6\\x07b \\x00R\\x85\\x00\\xFEX\\x08\\x9AX\\x08\\x043,\\xFEH\\x08\\x16H\\x08\\x0Cnon-\\xFEL\\x08\\xFEL\\x08\\xFEL\\x08\\x1AL\\x08\\x0433\\x0E\\xD5\\x0B.\\x88\\x0BJK\\x08\r&m\\xBA^J\\x08\\x00_\\x165\\x08\\x10info\"&w\\x08\t"
		"\\x15\\x04co\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08\\xFEJ\\x08NJ\\x08\\x0E\\xDD\t\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\x16G\\x08\\x08033:(\\x11NG\\x08\t&"
		"\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08\\xFEG\\x08BG\\x08\\x18Billpay\\xFE\\x90\\x10\\xFE\\x90\\x10\"\\x90\\x10\\x04.1\\x12g\\x19\\x1C023841866*\\x16\\xEE\\x9F\\x10\\x16\\x9F\\x10r_\\x00R\\xAE\\x10r2\\x00B\\xBD\\x10\\x92.\\x00\\x1AG\\x10r,\\x00\\xE2\\xDB\\x10rV\\x00F\\xEA\\x10\\x96/"
		"\\x00\\x8E\\xB2\\x00\\xFE\\x08\\x11\\x9E\\x08\\x11B\\xB2\\x00\\xFE_\\x19\\x12_\\x19\\xFE\\x17\\x11\\xFE\\x17\\x11\\xFE\\x17\\x11*\\x17\\x11\\x0C044868\\x03R\\xD0\\x08\\x05&"
		"\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08B\\xD0\\x08\\x0Ccard\\xFE\\x17\\x11\\xFE\\x17\\x11&"
		"\\x17\\x11B\\xAC\\x06.\\xAD\\x16\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\x96\\xCE\\x08\\x08430:\\xAF\\x1BN\\xCE\\x08\t&"
		"\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xFE\\xCE\\x08B\\xCE\\x08\\x10Demat\\xFE\\x9C\\x11\\xFE\\x9C\\x11&\\x9C\\x11\\x002\\x16\\x9C\\x11\\x184768371\\xFE\\x9D\\x11F\\x9D\\x11r`\\x00V\\x9E\\x11r3\\x00F\\x9F\\x11\\x92/"
		"\\x00\\x1E\\xEE\\x10r-\\x00\\xE6\\xA1\\x11rW\\x00J\\xA2\\x11\\x960\\x00\\x92\\xB5\\x00\\xFE\\xA4\\x11\\xA2\\xA4\\x11B\\xB4\\x00\\xFE\\xA5\\x11\\xFE\\xA5\\x11\\xFE\\xA5\\x11\\xFE\\xA5\\x11:\\xA5\\x11\\x0C9879\\x82\\xA4\\x11\t"
		"%\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08B\\xD5\\x08\\x10logou\\xFE\\xD6\\x08\\xFE\\xD6\\x08*\\xD6\\x08\\x003\\x16\\xD6\\x08\\xFE\\xDA3Z\\xDA3\\x003v`\\x00V\\xD6\\x08r\\x93\\x00F\\xD6\\x08\\x92/\\x00\\x1E"
		"!\\x08r-\\x00\\xE6\\xD6\\x08rW\\x00J\\xD6\\x08\\x960\\x00\\x92\\xB5\\x00\\xFE\\xD6\\x08\\xA2\\xD6\\x08B\\xB4\\x00\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08:\\xD6\\x08\\x0C1081\\x8A\\xAD\\x11\t&\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xFE\\xD8\\x08\\xC2\\xD8\\x08\\x00c:\\x8C"
		"<Dis_self_monitoring\\x1E\\x983J*\\x00\\x00i\\x0E\"9\\x08nal\\x11#\\x12y;\\x0E\\xEB7\\x00e2'=\\x0489:)4\\x1A\\xE76f3<\\x11!\\x08fm_*\\xD3=\\x0E\\x86<\\x10stamp6^\\x00\\x085,\"\\x0E\\xEC8\\x12\\xF89 0,\"messag\\x0E\\xAB5\\x0E97 643675849\\x12\\x175\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0EL8\\x14 JavaS\\x12\\x1380 tag\\\\\",[]]\"}]&"
		"r8\\xFE\\xCC8\\xFE\\xCC8\\xFE\\xCC8\\xFE\\xCC8\\xFE\\xCC8\\xFE\\xCC8\\xFE\\xCC8\\xFE\\xCC8\\xFE\\xCC8\\xFE\\xCC8\\xFE\\xCC8\\xFE\\xCC8\\xFE\\xCC8\\xFE\\xCC8\\xEE\\xCC8\\x0E\\xF44\\x00d\"\\xCAA\\x0C88.4\\x16\\xC0\\x0C\\x14953674:\\x7F\tB\\xDAA\\x10navig\\x0E\\xC3:\\x00n\\xFE\\xE38B\\xE38:\\x8B:\\x08net\\x0E7?\\x00.\\x1E\\x13A\\x00.\\x1A\\xBA:\\x0E4\\x0B\\x0E\\xFC:\\x00e\\xFE\\xB4Az\\xB4A:\\xD4-\\xFEn\\x1F\\x0414F\\xD5\\x14.\\xC4\\x00J\\xC9\r~3\\x00:\\xC9\r\\x9E/\\x00\\x12\\x14\r~-\\x00\\xDA\\xC9\r"
		">\\xD5\\x17>\\xB9\r\\x0452r\\xD3 \\x15/\\x05\\xA4\\x0852.\\x0E$==\\xE9\\xFE\\xAA\r\\x96\\xAA\rN\\x1C\\x01Av\\x15\\x9F\\xDE\\x84A\\xFE%(\\x96%(zd\\x01>\\x98A>L\\x036\\x93A\\x0C46416i\\x16J\\x96A\\x0443>%\\x00Jd\\x1F\t%\\xFE\\xB6\rN\\xB6\r\\x12\\xE1>\\x16}A\\xAEv>\\xF0PLogin?JSESSIONID=EwtHFEpAQ5gjuEXV2GOFjLppC1n6sDgHtVcwrZb19TEBtIRLbtAN!861341624!1\"\\xBD@\\x08016Z\\x1E\\x05\\x0E)B\\xB9C\\x0E@\n\\x04in&+B>x\n\\x08has\\x1D.\\x1E{\n.\\x11\\x03\\x14unload\\x16:\n\"\\x03=:\\xBA\\x042$\\x00eY>\""
		"\\x00\\x08dom\\x16\\xE1\n$active\":82r\\x16\\x06\\x010\\x12\\xD6:\\x08nt_\\x01\\x80\\x00e:\\x82\\x00\\x0C82.6\\xC9UR\\x87-b?\\x00\\x05\\x9D\\x008>\\xF2\\x126\\x7F\\x02\t=\\x10mplet\\x01\\xA9\\x007>#\\x04\\x01\\x906\\x10\\x01z\\xE3\\x06\\x1D1\t\\x80v\\x12\\x07\\x95\\x83\\x12\\x8AA\\x12\\xB4D9\\xD1\\x1ETC\r\\x12\\x0EVD\r\\x0B\\x08ion\\x0E\\x80I!\\xA4\\x01\\xB8\\x14\"exist\\x0Es\\x0C\\x1ATA\\x00s\\x0E\\xEBF\\x0E\\x98I number\""
		":1\\xFEn\\x0B\\xFEn\\x0B\\xFEn\\x0B\\xFEn\\x0B\\xFEn\\x0B\\xFEn\\x0B\\xFEn\\x0B\\xFEn\\x0B\\xFEn\\x0B\\xFEn\\x0B\\xFEn\\x0B\\xFEn\\x0B\\xFEn\\x0Bzn\\x0B\\x08]}}", 
		LAST);

	lr_end_transaction("AB_AccountSummary_T04_SelectAccount",LR_AUTO);

	web_custom_request("rb_bf18472vnr_38", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=3476934826&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2Faccounts.jsp$tvt=1770719114211$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$rt="
		"1-1770719114211%3Bhttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2FAccounts.JPG%7Cb63e0f0g0h0i0k0l0m0v13310w13310X200E1F2700O90P30Q652R127I7M-2024045161V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2FLoans.JPG%7Cb63e0f0g0h0i0k0l0m0v10330w10330X200E1F2100O70P30Q652R127I7M-1476813297V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2FBillpay.JPG%7Cb63e0f0g0h0i0k0l0m0v10448w10448X200E1F2250O75P30Q652R127I7M1575176587V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2Fcards.J"
		"PG%7Cb63e0f0g0h0i0k0l0m0v14303w14303X200E1F3000O100P30Q652R127I7M-543547986V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2FDemat.JPG%7Cb63e0f0g0h0i0k0l0m0v9879w9879X200E1F2100O70P30Q652R127I7M389898891V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2Flogout.JPG%7Cb63e0f0g0h0i0k0l0m0v10813w10813X200E1F2100O70P30Q652R127I7M462612703V0$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Faccounts.jsp$title=LoanIQ%3A%20Accounts$latC=0$app=ea7c4b59f27d43eb$vi="
		"EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119114278_938$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Faccounts.jsp$time=1770719117429", 
		LAST);

	lr_think_time(2);

	web_custom_request("rb_bf18472vnr_39", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=1&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=932912872&co=snappy&st=1770719120210&ss=1&qc=2542363425&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x9A\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"background\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719120209,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.22.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83\\x0C1421\\x01v\\x08om_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D8cf276b8a80cc74a\","
		"\\x15Z\\x10gent.5\\x9A`\"1.329.10.20260206-100503>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-!\\x88-\\x17\\x08ins%\\xF9)\\x14\\xB01770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xF0F\":1.25,\"page.url.full\":"
		"\"http://192.168.1.29:7001/LoanIQ/accounts.jsp\",\"\\x05?1B\\x00_%\\xACJ'\\x02\\x05&,detected_nam!\\xF6\\x08/LobR\\x00\\x0Ctitl\\x01$\t#\\x08: A\rv\\x18\",\"view:r\\x00<0ee5496783f118b3\\x11&\\x00u\\xE2\\xD7\\x00\\x05e\\x92\\xB1\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(4);

	web_custom_request("rb_bf18472vnr_40", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=3798692685&co=snappy&st=1770719125139&ss=0&qc=2593969778&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x9A\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719123131,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.22.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83\\x0C1421\\x01v\\x08om_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D8cf276b8a80cc74a\","
		"\\x15Z\\x10gent.5\\x9A`\"1.329.10.20260206-100503>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-!\\x88-\\x17\\x08ins%\\xF9)\\x14\\xB01770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xF0F\":1.25,\"page.url.full\":"
		"\"http://192.168.1.29:7001/LoanIQ/accounts.jsp\",\"\\x05?1B\\x00_%\\xACJ'\\x02\\x05&,detected_nam!\\xF6\\x08/LobR\\x00\\x0Ctitl\\x01$\t#\\x08: A\rv\\x18\",\"view:r\\x00<0ee5496783f118b3\\x11&\\x00u\\xE2\\xD7\\x00\\x05e\\x92\\xB1\\x00\\x0C}]}}", 
		LAST);

	lr_start_transaction("AB_AccountSummary_T05_ViewAccountSummary");

	web_reg_find("Text=LoanIQ: Account Summary", 
		LAST);

	lr_think_time(3);

	web_url("AccountSummary.jsp", 
		"URL=http://192.168.1.29:7001/LoanIQ/AccountSummary.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.29:7001/LoanIQ/accounts.jsp", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf18472vnr_41", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=3200982922&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1770719128309%7C_wv_%7CAAI%7C1%7CfIS%7C13998%7CfID%7C1%2C1%7C7%7C_event_%7C1770719128357%7C_viewend_%7Cinp%7C0%7Csvn%7C%2FLoanIQ%2Faccounts.jsp%7Csvt%7C1770719114211%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1770719128357%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Faccounts.jsp$rId=RID_-1661599622$rpId=-1684708450$domR=1770719114299$tvn=%2FLoanIQ%2Faccounts.jsp$tvt=1770719114211$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh="
		"864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Faccounts.jsp$title=LoanIQ%3A%20Accounts$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119114278_938$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Faccounts.jsp$time=1770719128358", 
		LAST);

	web_custom_request("rb_bf18472vnr_42", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=2801852568&co=snappy&st=1770719128360&ss=1&qc=3290398470&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xAA(D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"view.fo\\x11?,_time\":11225\r\\x1D\\x0Cback\t\\\\\r\\x1Dp2922,\"error.http_4xx_count\":02\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!&8us\":\"reported\",\\x05\\x18)a:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x0C100,\\x05\\x10\\x1Cloading_\\x01S!y "
		"complete\"\t\\x1F\\x01\\x17>j\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-v\\x1C13997.60\\x05\\x01\\x1423842,\\x05[\\x08dur%1\\x08\":3\r\\x12\\x04na!\\xC3,\"pointerdown\\x01\\x9E$id.process\r\\xC0\\x08rt\"\\x05U\\x008JU\\x00\\x1D*\\x08end\\x11(\\x008\\x05|\\x14071526\t}<cancelable\":true\t\\x168ui_element.tag_\r\\x90\\x00A\r\\x86\\x1D\\x1E\\\\xpath\":[\"html\",\"body\",\"t\\x05Q\\x08,\"t\\x11\\x10\\x0Cr[5]\\x01\\x10!\\xB9\\x1Cblockquo%t2\r\\x00\\x14a\"],\"f"
		":\\xB4\\x01\\x00prd\\x01\\x00pR\\x9A\\x01\\x04in\\x1D\\x184below_threshol\\x01\\x82\\x04lc\\x1D\\x1F]S\\x01\\x186S\\x02\\x041,\\x05\\x15\\x04st=\\xC7AJ\\x01*!\\xFB-\\xDB\\x000\r'\\x04iza{\\x0C4737\t\\x11\\x14render\r%\\x159=@\\x00t9^(BLOCKQUOTE\"\t=\\x1D'\\xFEg\\x01.g\\x01,],\"long_task\\x01\\xD9I\\xEF\\x0Cnot_=\n\\x0Cttfb\\x19\\x1D>\\x19\\x00mb\\x0C52.1IQA\\xCE\\x0C186,\t8\\x0CwaitA\\xA3Y\\xD9\\x0C14.2\t*\\x184768371\\x11+\\x10cache\\x1D)\\x000\rC\\x08dnsJ\\x16\\x00\\x14connec\\x85]"
		"\\x19\\\\\\x113\\x18request\\x1D\\x1A\\x1037.89\\x05\\x01<7615814,\"performA\\xF5\\x14.activez\\x81\r\\x00r\\x89\\xFC\\x00v\\xA1N\\x00s\\x01K(nce_number\"A\\x07\\x05\\x19\\x08pre2\\xD3\\x01X0,\"characteristics.has_\\x01,\\x1C_summaryqW\\x10navig\\x05n\\xA1\\xD7\\x01r\\x85\\x7F\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\x81\\x9C\r4\\x04e\"6\\xB9\\x00\\xA1\\xE2\\\\_origin\":1770719114210,\"2\\xAA\\x026\\x1B\\x0093H14147,\"dt.rum.schem\\xDD\\xC1\\x1C\"0.22.0\"\\x15!\\x14applic\t\\xBCXid\":\""
		"ea7c4b59f27d43eb\",\\xD5\\xB3\\x10frame:\\xB5\\x06<8cf276b8a80cc74a\\x1DZ\\x00g\\x81c\\xF5;`\"1.329.10.20260206-100503>2\\x00- $javascript\\x19!\\x00b\\xED<\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-=\\x17\\x08ins\\xE5\\x9A)\\x14-m\\xD8038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\",\"device.orientaA\\xD4<\":\"landscape-priE>\\x15)$screen.wid\\xA1q\\x0C1536>\\x1B\\x00(height\":8649\\x90\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t"
		"\\xA6\\x1C_pixel_rA\\x03\\x0C\":1.\\x0EZ\\x08<page.url.full\":\"\\xE1\\xBCt://192.168.1.29:7001/LoanIQ/ac\\x12a\\x08\\x10s.jspA\\xD0\\x01?1B\\x00_%\\xACJ'\\x02\\x05&\\x1Cdetected\\xD1\\x87nR\\x00\\x08tit\\xC1\\xCA\\x00\"\tu\\x08: A\rv\\x00\"\\x1A\\x0B\t6r\\x00<0ee5496783f118b3\\x11&\\x00u\\xE2\\xD7\\x00\\x00v\\x81?\\x92\\xB1\\x00\\x04},\\xFE\\x08\n:\\x08\n%,&G\n\\xD1u\\x001\\x12\\x08\n\\x05\\x1D\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n"
		"\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xFE\\x08\n\\xAE\\x08\nN\\xD7\t\\xA1E\\x00_:\\xD7\t\\x01\\x14N\\x17\n\\x1A\\xBB\t\\x04io\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\xFE\\xEF\t\\x1E\\xEF\t\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_43", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=285388604&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/AccountSummary.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CAccount%C2%A0Summary%7CC%7C-%7C119114278_938%7C1770719128283%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Faccounts.jsp%7C%7C%7C%2FLoanIQ%2Faccounts.jsp%7C1770719114211%2C1%7C1%7C_load_%7C_load_%7C-%7C1770719128285%7C1770719128386%7Cdn%7C130%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Faccounts.jsp%2C2%7C3%7C_event_%7C1770719128285%7C_vc_%7CV%7C98%5Epc%7CVCD%7C1022%7CVCDS%7C1%7CVCS%7C157%7CVCO%7C1160%7CVCI%7C0%7CT"
		"S%7C1%7CVE%7C572%5Ep527%5Ep6930%5Eps%5Estr%3Anth-of-type%286%29%3Etd%3Afirst-child%3Ediv%3Afirst-child%3Efont%3Afirst-child%7CS%7C98%2C2%7C4%7C_event_%7C1770719128285%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1770719128386%7C1770719128386%7Cdn%7C130%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1770719128285%7C_view_%7Csvn%7C%2FLoanIQ%2Faccounts.jsp%7Csvt%7C1770719114211%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh"
		"0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=192.168.1.29,$rId=RID_2057405799$rpId=100505178$domR=1770719128385$tvn=%2FLoanIQ%2FAccountSummary.jsp$tvt=1770719128285$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1770719128285e14f14g14h14i14k15l66m67o98p98q99r100s101t101u7236v6936w6936X200M100505178V0$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FAccountSummary.jsp$title=LoanIQ%3A%20Account%20Summary$latC=0$app=ea7c4b59f27d43eb$vi="
		"EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119128368_41$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FAccountSummary.jsp$time=1770719129467", 
		LAST);

	web_custom_request("rb_bf18472vnr_44", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=716111959&co=snappy&st=1770719130397&ss=0&qc=3222534197&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/AccountSummary.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xA1\\x9C\\x01D{\"data_version\":2,\\x05\\x11\\xF4\\x90\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719128363,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.29:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10329260206100503.js\",\"network.protocol.name\":\"http\",\"performance.time_origin\":1770719128285,\""
		"dt.rum.schem=\\xA3\\x18\"0.22.0:I\\x00\\x00s=I\\x0C78,\".1\\x01 next_hop_\\x11\\x91\\x04\":\\x05\\x8C\\x0C/1.1:G\\x004domain_lookup_\\x05U\\x00\"BP\\x006%\\x00\\x08endF#\\x00\\x18connect^B\\x00\\x11\\x1FR<\\x00\\x18secure_\r$\\x08ion\\x11F\\x0006\\xD7\\x00\\x04re%\\xDA\\x11\\x1E>\\xF6\\x00\\x1Cresponse\\x82 \\x00R\\x85\\x00\\x10redir\\x1D\\xC2B|\\x00\r\\x1F\\x05=:\\x1D\\x00!\\xFD\\x04er\\x11x:\\x1D\\x00\\x10fetch\\x11\\x1C\\x01\\xB4A\\x87\\x15\\xAD!\\xC8,tus_code\":20:="
		"\\x008render_blocking\\x01G\\x14tus\":\"\\x11\\x12:\\xCF\\x014first_interim_>\\x12\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\">-\\x00\\x1Cdeliveryq\\x84\\x10cache:~\\x00\\x14transf!\n\\x08izeBB\\x00\\x04en\\x01\\xE5\\x18d_body_\t\"\\x08124e\\xFB.\\xBD\\x02\\x04deB'\\x00\\x1C339192,\"M\\x01(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracE]\\x00te\\x16\\x19-\\x0Cset\"VC\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85P\\x04dte\\xA5\\x18applicaA\\xAE\\x00.\\x85\\xEC"
		"<ea7c4b59f27d43eb\\xBD\\x19\\x10frame:\\x1B\\x05D49ef4d120f102a96\",\\x15Z\\x10gent.\\xB5\\xA10\"1.329.10.202\\x85z\\x18-100503>2\\x00\\x04ty\\xA5\\x1C\\x10javas\\xB1 \r\\xAD\\x00b\\xAD\\xA2\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x19Y\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-\\x81\\x9B\rj\\x00i\\xCD\\x00)\\x14\\x001\\xA9\\xE1\\xD8038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,"
		"\\xD5\\xA9\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03<\":1.25,\"page.url\\x9Eq\\x06$AccountSum\\x01\\xD8\\x0C.jspaQ\\x01E1H\\x00_%\\xB2J-\\x02\\x05&$detected_n\\xC9p\\xD1\\xC9fX\\x00\\x0Ctitl\\xE1\\xC1\\x1CLoanIQ: \r*\\x00 \r\\x83\\x18\",\"view:\\x7F\\x008aba5c5d4429fdbe\\xC1C\\x05&\\xFE\\xEA\\x00\\x05E\\xAA\\xC4\\x00\\x04},\\xFE\\x8D\\x08\\xFE\\x8D\\x08N\\x8D\\x08\\x08imgZG\\x04\\x8D\\x82\\x91:\\xAA/\\x01\\x14images1\\xC8\\x18s.JPG\","
		"\\xFEg\\x08\\xEEg\\x08\\x1Ag\\x08\\x08.20\\x05\\x01\\x1847683726\\x9F\\x07\\xEEv\\x08\\x16v\\x08r_\\x00R\\x85\\x08r2\\x00\\x1AQ\\x08\\xD1\\xD1\\x007\\x96.\\x00\\xE5\\xE1z,\\x00\\xE2\\xB2\\x08r\\xB0\\x00>\\xAF\\x07z\\x85\\x00\\x15/\\x8E\\xB2\\x00\\xFE\\xDF\\x08\\x9E\\xDF\\x08B\\xE1\\x00\\xFE\\xEE\\x08\\x12\\xEE\\x08\\x0Cnon-\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\x1A\\xF2\\x08\\x08331:\\x87\tJ\\xF1\\x08\r&\\x8DA^\\xF0\\x08\\x00_\\x16\\xDB\\x08\\x10info\"&\\x1D\t\t"
		"\\x15\\x04co\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xCA\\xF0\\x08\\x0E\\x96\n\\xFE\\xED\\x08\\xFE\\xED\\x08*\\xED\\x08\\x003\\x12\\xEC\\x08\\x1C07152557\\xFE\\xED\\x08B\\xED\\x08n_\\x00V\\xED\\x08n2\\x00F\\xED\\x08\\x8E.\\x00\\x1E;\\x08n,\\x00\\xE6\\xED\\x08nV\\x00\""
		"\\xBE\\x08\"t\\x12\\x96/\\x00\\x8E\\xB2\\x00\\xFE\\xED\\x08\\xA2\\xED\\x08>\\xE1\\x00\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08>\\xED\\x08\\x08033\\x8A\\xED\\x08\t&"
		"\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xBE\\xED\\x08\\x18Billpay\\xFE\\xDC\\x11\\xFE\\xDC\\x11&\\xDC\\x11"
		">\\xCD\\x06.\\x95\\x17\\xEE\\xDC\\x11\\x1A\\xDC\\x11n_\\x00\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\x1E\\xEF\\x08\\x0444:\\x8A\\x1DN\\xDC\\x11\t&"
		"\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xBE\\xEF\\x08\\x0Ccard\\xFE\\xDC\\x11\\xFE\\xDC\\x11*\\xDC\\x11\\x004\\x16\\xDC\\x11\\x189536743\\xFE\\xDC\\x11B\\xDC\\x11n_\\x00V\\xED\\x08n2\\x00F\\xDC\\x11\\x8E.\\x00\\x1E*\\x11n,"
		"\\x00\\xE6\\xDC\\x11nV\\x00J\\xDC\\x11\\x92/\\x00\\x8E\\xB2\\x00\\xFE\\xDC\\x11\\xA2\\xDC\\x11>\\xB2\\x00\\xFE\\xDC\\x11\\xFE\\xDC\\x11\\xFE\\xDC\\x11\\xFE\\xDC\\x11>\\xDC\\x11\\x08430:8\\x03N\\xED\\x08\t&"
		"\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xBE\\xED\\x08\\x10Demat\\xFE\\xDA\\x11\\xFE\\xDA\\x11&\\xDA\\x11\\x0E\\x9B&\\x00e&\\x84,\\xEE\\xCD\\x11\\x1A\\xCD\\x11:R\\x00V\\xD3\\x08:%\\x00F\\xC6\\x08Z!\\x00\\x1E\\x07\\x08:\\x1F\\x00\\xE6\\xAC\\x08"
		":I\\x00J\\x9F\\x08^\"\\x00Z\\x8B\\x00\\xFE\\x85\\x08\\xA2\\x85\\x08\\x045,\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08\\xFEx\\x08>x\\x08\\x0C98796\\xAF\\x0BJw\\x08\t"
		"%\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xFEv\\x08\\xBEv\\x08\\x10logou\\xFEw\\x08\\xFEw\\x08*w\\x08\\x006\\x16d\\x11\\x1823841866\\xB5\\x05\\xEE\\x84\\x08\\x1A\\x84\\x08n_\\x00V\\x91\\x08n2\\x00F\\x9E\\x08\\x8E.\\x00\\x1E \\x08n,\\x00\\xE6\\xB8\\x08nV\\x00J\\xC5\\x08\\x92/\\x00\\x8E\\xB2\\x00\\xFE\\xDF\\x08\\xA2\\xDF\\x08"
		">\\xB2\\x00\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11\\xFEd\\x11>d\\x11\\x08081\\x8Ad\\x11\t&\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08>\\xEE\\x08\\x00c:\\\\=Dis_self_monitoring\\x1E\\xD94J*\\x00\\x00i\\x0E\\x82:\\x08nal\\x11#\\x12\\xE5)\\x0EK9\\x00e2\\xF7=\\x0480:\\xF7=\\x1AG8f\\x03=\\x11"
		"!\\x08fm_*\\xA3>\\x0EV=\\x10stamp2^\\x00\\x0C76,\"\\x0EL:\\x12X; 0,\"messag\\x0E\\xFF6\\x0E\\x998 643675849\\x12X6\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\xAC9\\x14 JavaS\\x12s90 tag\\\\\",[]]\"}]&\\xD29\\xFE,:\\xFE,:\\xFE,:\\xFE,:\\xFE,:\\xFE,:\\xFE,:\\xFE,:\\xFE,:\\xFE,:\\xFE,:\\xFE,:\\xFE,:\\xFE,:\\xFE,:f,:\\x0428\\x0E\\xB8A\"\\xB9B\\x08100B\\xD4\n.z\\x15B\\xCAB\\x10navig\\x0EC<\\x00n\\xFED:BD:\\x1A\\xDB;\\x1A\\xDA;\\x1A]<\\x08net\\x0E\\xAD@\\x00.\\x1E\\x19B\\x00.\\x1A:<\\x0Ey\\x0B\\x0E|"
		"<*&\\x16\\xA1\\x12\\x00_\\xFE\\xAAB>\\xAAB:\\x0E.\\xFE\\x06\\x0E\\x0414:\\xA7\\x1D:\\x93:J\\x07\\x0E~3\\x00:\\x08\\x0E\\x9E/\\x00\\x12W\r~-\\x00\\xDA\n\\x0E\\x04156V9\\x001:L\\x0F>\\x0B\\x0E\\x006^ \\x00\\x05\\xA5\\x0466r\\xA3\\x02\\xFE\\xFC\r\\x96\\xFC\rN*\\x01A\\x84\\x15\\xCC\\xDE\\x18C\\xFE*:\\x96*:>b\\x01>\\x1DC>K\\x036\\x18C\\x0472\\x0E\\xA9@.l\\x03J\\x1BC\\x0469>%\\x00J\\xE8\\x16\t%\\xFE\\xFA\rN\\xFA\r\\x12`@\\x16\\x02C\\xAE\\xE8?\\x00a\\x16\\xD2@\\x00s\\x8Do>\\x1A\n\\x08has\\x12]"
		"C\\x99\\xF7\\x0E\\x14\n\\x04in&_CN2\\x00\\x19.\\x1EO\n.<\\x01\\x14unload\\x16\\x0E\n\\x1EM4:g\\x042#\\x00e\\x05:!\\x00\\x08dom\\x16\\xB3\n,active\":97.8\\x16\\xBE\\x12R\\xFE5\\x010\\x12b;\\x08nt_\\x01~\\x00e:\\x80\\x00\\x0C98.1\t?R\\xFD\\x12b?\\x00\\x05\\x9C\\x009\\x0E\\xEEC\\x05\\x01j=\\x00\\x10mplet\\x01\\xA9\\x009\\x0E$\\x1A.\\x10\\x01\\x01\\x906\\x0E\\x01\\xC1\\x96:\\xE1\\x1A\\x1D%\\x05t\\x01#>\\x8D\\x11.U\\x00\\x95\\x16\\x12\\xB1B\\x12\\xDBE9\\x96\\x1E{D\r\\x12\\x0E}E\r"
		"\\x0B\\x08ion\\x0E\\x17J!\\x97\\x01\\xAD\\x14\"exist\\x0E:\\x0C\\x1AhB\\x00s\\x0E\\xD2G\\x0E/J number\":1\\xFE5\\x0B\\xFE5\\x0B\\xFE5\\x0B\\xFE5\\x0B\\xFE5\\x0B\\xFE5\\x0B\\xFE5\\x0B\\xFE5\\x0B\\xFE5\\x0B\\xFE5\\x0B\\xFE5\\x0B\\xFE5\\x0B\\xFE5\\x0B\\xF65\\x0B\\x08]}}", 
		LAST);

	lr_end_transaction("AB_AccountSummary_T05_ViewAccountSummary",LR_AUTO);

	web_custom_request("rb_bf18472vnr_45", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=4038524977&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/AccountSummary.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2FAccountSummary.jsp$tvt=1770719128285$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$rt="
		"1-1770719128285%3Bhttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2FAccounts.JPG%7Cb78e0f0g0h0i0k0l0m0v13310w13310X200E1F2700O90P30Q652R127I7M-2024045161V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2FLoans.JPG%7Cb78e0f0g0h0i0k0l0m0v10330w10330X200E1F2100O70P30Q652R127I7M-1476813297V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2FBillpay.JPG%7Cb78e0f0g0h0i0k0l0m0v10448w10448X200E1F2250O75P30Q652R127I7M1575176587V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2Fcards.J"
		"PG%7Cb78e0f0g0h0i0k0l0m0v14303w14303X200E1F3000O100P30Q652R127I7M-543547986V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2FDemat.JPG%7Cb79e0f0g0h0i0k0l0m0v9879w9879X200E1F2100O70P30Q652R127I7M389898891V0%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2Fimages%2Flogout.JPG%7Cb79e0f0g0h0i0k0l0m0v10813w10813X200E1F2100O70P30Q652R127I7M462612703V0$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FAccountSummary.jsp$title=LoanIQ%3A%20Account%20Summary$latC=0$app=ea7c4b59f27d43eb$vi="
		"EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119128368_41$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FAccountSummary.jsp$time=1770719131498", 
		LAST);

	web_custom_request("rb_bf18472vnr_46", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=1&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=948720312&co=snappy&st=1770719132965&ss=1&qc=4254217095&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/AccountSummary.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xB9\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"background\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719132962,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.22.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(28285,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D49ef4d120f102a96\","
		"\\x15Z\\x10gent.5\\x9A`\"1.329.10.20260206-100503>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-!\\x88-\\x17\\x08ins%\\xF9)\\x14\\xB01770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xF0L\":1.25,\"page.url.full\":"
		"\"http://192.168.1.29:7001/LoanIQ/AccountSummary.jsp\",\"\\x05E1H\\x00_%\\xB2\\x004F-\\x02\\x05&,detected_nam!\\xFC\\x08/LozX\\x00\\x0Ctitl\\x01*\t)\\x08: A\t\\x82\\x00 \r\\x83\\x18\",\"view:\\x7F\\x00<aba5c5d4429fdbe1\\x11&\\xFE\\xEA\\x00\\x05k\\xAA\\xC4\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(4);

	web_custom_request("rb_bf18472vnr_47", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=3522419612&co=snappy&st=1770719137645&ss=0&qc=1877639870&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/AccountSummary.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xB9\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719135636,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.22.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(28285,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D49ef4d120f102a96\","
		"\\x15Z\\x10gent.5\\x9A`\"1.329.10.20260206-100503>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-!\\x88-\\x17\\x08ins%\\xF9)\\x14\\xB01770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xF0L\":1.25,\"page.url.full\":"
		"\"http://192.168.1.29:7001/LoanIQ/AccountSummary.jsp\",\"\\x05E1H\\x00_%\\xB2\\x004F-\\x02\\x05&,detected_nam!\\xFC\\x08/LozX\\x00\\x0Ctitl\\x01*\t)\\x08: A\t\\x82\\x00 \r\\x83\\x18\",\"view:\\x7F\\x00<aba5c5d4429fdbe1\\x11&\\xFE\\xEA\\x00\\x05k\\xAA\\xC4\\x00\\x0C}]}}", 
		LAST);

	lr_start_transaction("AB_AccountSummary_T06_UserLogout");

	web_reg_find("Text=LoanIQ : Logout", 
		LAST);

	lr_think_time(2);

	web_url("Logout.jsp", 
		"URL=http://192.168.1.29:7001/LoanIQ/Logout.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.29:7001/LoanIQ/AccountSummary.jsp", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf18472vnr_48", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=3433899188&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/AccountSummary.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1770719140274%7C_wv_%7CAAI%7C1%7CfIS%7C11889%7CfID%7C7%2C1%7C7%7C_event_%7C1770719140292%7C_viewend_%7Cinp%7C0%7Csvn%7C%2FLoanIQ%2FAccountSummary.jsp%7Csvt%7C1770719128285%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1770719140292%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FAccountSummary.jsp$rId=RID_2057405799$rpId=100505178$domR=1770719128385$tvn=%2FLoanIQ%2FAccountSummary.jsp$tvt=1770719128285$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h="
		"732$sw=1536$sh=864$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FAccountSummary.jsp$title=LoanIQ%3A%20Account%20Summary$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119128368_41$v=10329260206100503$vID=1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FAccountSummary.jsp$time=1770719140294", 
		LAST);

	web_custom_request("rb_bf18472vnr_49", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=1153747349&co=snappy&st=1770719140296&ss=1&qc=3190401900&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/AccountSummary.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xB8(D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"view.fo\\x11?(_time\":9334\r\\x1C\\x0Cback\t[\r\\x1Cp2675,\"error.http_4xx_count\":02\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!%8us\":\"reported\",\\x05\\x18)`:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x0C124,\\x05\\x10\\x1Cloading_\\x01S!x "
		"complete\"\t\\x1F\\x01\\x17>j\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-v\\x1C11888.5,\\x05P\\x08dur%&\\x0C\":32\t\\x12\\x04na!\\xB7,\"pointerdown\\x01\\x93$id.process\r\\xB5\\x08rt\"\\x01J\\x1095.10\\x05\\x01\\x0C2384\rC\\x1D*\\x08end\\x11(\\x002\\x05'\\x1004768!\\x04Hid.cancelable\":true\t\\x818ui_element.tag_\r\\x90\\x08IMG\r\\x88\\x1D Lxpath\":[\"html\",\"body\\x01&\\x18orm\",\"t\\x05Z\\x08,\"t\r\\x17\\x10tr[3]\\x01\\x10!\\xB7F\\x1D\\x00\\x05\\x1A\\x04[6\\x01\"Ddiv\",\"a\",\"img\"],\"f"
		":\\xC1\\x01\\x00prq\\x01\\x04p.N\\xBF\\x01\\x04in\\x1D\\x184below_threshol\\x01\\x91\\x04lc\\x1D\\x1F]`\\x01\\x186`\\x02\\x041,\\x05\\x15\\x04st=\\xD4AW\\x01*A\\x08-\\xE8\\x000\r'\\x1Cize\":725\r7\\x14render\r$\\x158=U=u\\x0CDIV\"\tF\\x1D \\xC2u\\x01\\x002!S%u!X,],\"long_task\\x01\\xC4I\\xE7\\x0Cnot_\\x1D\\xF5\\x0Cttfb\\x19\\x1D>\\x19\\x00mZ\\x0866,\t)\\x0CwaitA\\x97Y\\xCD\\x0C14.4Io\\x14953674A\\xDD\\x05T\\x10cache\\x1D)\\x000\r"
		"C\\x08dnsJ\\x16\\x00\\x14connec\\x85F\\x19\\\\\\x113\\x18request\\x1D\\x1A\\x1051.59\\x05\\x01,0463257,\"perA\\x8EA\\xE9\\x14.activena\\xF6\\x00r\\x89\\xE5\\x00v\\xA16<sequence_number\"!\\xE3\\x05\\x19\\x08pre2\\xB0\\x01X0,\"characteristics.has_\\x01,\\x1C_summaryqK\\x10navig\\x05n\\xA1\\xBF\\x01r\\x85h\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\x81\\x85\r4\\x04e\"6\\xB9\\x00\\xA1\\xCA\\\\_origin\":1770719128285,\"2\\x86\\x026\\x1B\\x0093H12009,\"dt.rum.schem\\xDD\\xA9\\x1C\"0.22.0\"\\x15!\\x14applic"
		"\t\\xBCXid\":\"ea7c4b59f27d43eb\",\\xD5\\x9B\\x10frame:\\x9D\\x06<49ef4d120f102a96\\x1DZ\\x00g\\x81W\\xF5#`\"1.329.10.20260206-100503>2\\x00- $javascript\\x19!\\x00b\\xED$\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x198\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-=\\x17\\x08ins\\xE5\\x82)\\x14-m\\xD8038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\",\"device.orientaA\\xD4<\":\"landscape-priE>\\x15)$screen.wid\\xA1c\\x0C1536>\\x1B\\x00(height\""
		":8649\\x90\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t\\xA6\\x1C_pixel_rA\\x03\\\\\":1.25,\"page.url.full\":\"\\xE1\\xA5t://192.168.1.29:7001/LoanIQ/Ac\\x12J\\x08\\x00Si\\x16\\x0C.jspA\\xD6\\x01E1H\\x00_%\\xB2\\x004F-\\x02\\x05&\\x1Cdetected\\xD1\\x81\\x86X\\x00\\x08tit\\xC1\\xCA\\x00\"\t\\x81\\x04: \r\\x82\\x00 \r\\x83\\x00\"\\x1A\\x07\t6\\x7F\\x00<aba5c5d4429fdbe1\\x11&\\x00u\\xFA\\xEA\\x00\\x00v\\x81X\\xAA\\xC4\\x00\\x04},\\xFE\\x0F\n:\\x0F\n%E&N\n\\xCDq\\x16\\x0F\n"
		"\\x05\\x1C\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\n\\xFE\\x0F\nR\\x0F\nN\\xDE\t\\xA1.\\x00_:\\xDE\t\\x01\\x14N\\x1E\n\\x1A\\xC2\t\\x04io\\xFE\\xF6\t\\xFE\\xF6\t\\xFE\\xF6\t\\xFE\\xF6\t\\xFE\\xF6\t\\xFE\\xF6\t\\xFE\\xF6\t\\xFE\\xF6\t\\xFE\\xF6\t\\xFE\\xF6\t\\xFE\\xF6\t\\xFE\\xF6\t\\xFE\\xF6\t\\xFE\\xF6\t\\xFE\\xF6"
		"\t\\xFE\\xF6\t\\x9A\\xF6\t\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_50", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&svrid=-17984&flavor=post&vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0&modifiedSince=1770643675849&bp=3&app=ea7c4b59f27d43eb&crc=2656806093&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/Logout.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7Clogout%7CC%7C-%7C119128368_41%7C1770719140247%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FAccountSummary.jsp%7C%7C%7C%2FLoanIQ%2FAccountSummary.jsp%7C1770719128285%2C1%7C1%7C_load_%7C_load_%7C-%7C1770719140250%7C1770719140321%7Cdn%7C60%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FAccountSummary.jsp%2C2%7C3%7C_event_%7C1770719140250%7C_vc_%7CV%7C69%5Epc%7CVCD%7C1029%7CVCDS%7C1%7CVCS%7C127%7CVCO%7C1138%7CVCI%7C0%7"
		"CTS%7C1%7CVE%7C589%5Ep509%5Ep5040%5Eps%5Esdiv%3Anth-of-type%282%29%3Efont%3Afirst-child%7CS%7C69%2C2%7C4%7C_event_%7C1770719140250%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1770719140321%7C1770719140321%7Cdn%7C60%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1770719140250%7C_view_%7Csvn%7C%2FLoanIQ%2FAccountSummary.jsp%7Csvt%7C1770719128285%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%"
		"5Esh0$dO=192.168.1.29,$rId=RID_1021942582$rpId=-1735806996$domR=1770719140320$tvn=%2FLoanIQ%2FLogout.jsp$tvt=1770719140250$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1770719140250e12f12g12h12i12k13l40m40o69p70q70r70s71t71u3098v2798w2798X200M-1735806996V0$ni=3g|0.4$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FLogout.jsp$title=LoanIQ%20%3A%20Logout$latC=0$app=ea7c4b59f27d43eb$vi=EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-0$fId=119140305_924$v=10329260206100503$vID="
		"1770719038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2$rf=http%3A%2F%2F192.168.1.29%3A7001%2FLoanIQ%2FLogout.jsp$time=1770719141409", 
		LAST);

	web_custom_request("rb_bf18472vnr_51", 
		"URL=http://192.168.1.29:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D17984_sn_JE5JC9TGGM0QPIODKHEJER3VE68AJLLH&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1770643675849&av=1.329.10&cy=event&bc=1506634305&co=snappy&st=1770719142322&ss=0&qc=672259466&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.29:7001/LoanIQ/Logout.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xBF2D{\"data_version\":2,\\x05\\x11\\xF4\\x90\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"51485315ae0430e3\",\"start_time\":1770719140299,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.29:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10329260206100503.js\",\"network.protocol.name\":\"http\",\"performance.time_origin\":1770719140249,\"dt.rum.schem="
		"\\xA3\\x18\"0.22.0:I\\x00\\x00s=I\\x1050.79\\x05\\x01$52316284,\".A\\x01 next_hop_\\x11\\xA1\\x04\":\\x05\\x9C\\x0C/1.1:W\\x004domain_lookup_\\x05e\\x00\"\\x82`\\x0065\\x00\\x08end\\x863\\x00\\x18connect\\x9Eb\\x00\\x11/\\x92\\\\\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006\\x17\\x01\\x04reE*\\x11\\x1E~F\\x01\\x1Cresponse\\xC20\\x00\\x92\\xB5\\x00\\x10redir=\\x12B\\xAC\\x00\r\\x1F\\x05M:\\x1D\\x00A}\\x04er\\x11\\x98:\\x1D\\x00\\x10fetch\\x11\\x1CN\\xE4\\x00a\\x17\\x15\\xDDAX,tus_code\":20"
		":M\\x008render_blocking\\x01W\\x14tus\":\"\\x11\\x12:O\\x024first_interim_>B\\x01:]\\x00\\x10final\\x19%\\x1Cheaders_M\\x85:-\\x00(delivery_ty\\x85\\x14\\x10cache:~\\x00\\x14transf!\\x1A\\x0Cize\">B\\x000encoded_body_\t\"\\x141243636&\\x02\\x04deB'\\x00\\x1C339192,\"MA(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracE\\x9D\\x00te\\x96\\x19-\\x0Cset\"V\\xD3\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85\\xE0\\x04dt\\x855\\x18applicaA\\xEE\\x00.\\xA5|"
		"<ea7c4b59f27d43eb\\xBD\\xA9\\x10frame:\\xAB\\x0582f01dd153f96915\\x01\\xB1\\x11Z\\x10gent.\\xD510\"1.329.10.202\\xA5\n -100503\",62\\x00-\\x98\\x10javas\\xB1\\xB0\rS\\x08bro\\xC52\\x00s\\x05\\xAA|JE5JC9TGGM0QPIODKHEJER3VE68AJLLH\\x19Y\t0\\x80EFHRGBMSVNKGGMLUVFPMFHVPWDULRACI-\\xA1+\rj\\x08ins\\xC5\\x90)\\x14\\x001\\xC9q\\xD8038267736H6MS84NOKUDGBKV3BVB6L8KR6A7T2\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,"
		"\\xF59\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03L\":1.25,\"page.url.ful\\xB1\\xF4n\\x01\\x07$Logout.jspaI\\x01=1@\\x00_%\\xAAJ%\\x02\\x05&$detected_n\\xC9\\xF8\\xF1QFP\\x00\\x0Ctitl\\x0EA\\x08 LoanIQ : \t#\\x18\",\"view:o\\x00<1dc8127a80c92058\\x11&\\xDE\\xD2\\x00\\x05c\\x8A\\xAC\\x00\\x08},{\\xFE\\xF5\\x086\\xF5\\x08\\x00c:\\xA7\\x08Dis_self_monitoringq\\xCEJ*\\x00\\x00i\\xA1=\\x08nal\\x11#\\xA5\\x0F\\x81\\x06\\x08e\":M\\xD1\\x1014031Al.B\t"
		"m\\x02fN\\x08\\x11!\\x08fm_*\\xEE\t\\x0E\\xA1\\x08\\x10stamp6^\\x00\\x083,\"\\xA1\\x07\\xC5\\x13 0,\"messag!\\xCA\\x01\\x83 643675849%;\\x08tim~B\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x81g\\x14 JavaS\\x85.0 tag\\\\\",[]]\"}]\\x99"
		"[\\xFE\\xE7\\x04\\xFE\\xE7\\x04\\xFE\\xE7\\x04\\xFE\\xE7\\x04\\xFE\\xE7\\x04\\xFE\\xE7\\x04\\xFE\\xE7\\x04\\xFE\\xE7\\x04\\xFE\\xE7\\x04\\xFE\\xE7\\x04\\xFE\\xE7\\x04\\xFE\\xE7\\x04\\xFE\\xE7\\x04\\xFE\\xE7\\x04n\\xE7\\x04V\\x9A\\x04\\x0424\\x0E\\xDB\\x0C\\x95\\x9A\\x0C71.1\\x12\\xAB\\x0C\\x189284744:n\tB\\xEC\r\\x10navig\\xC1\\xD5\\x00nZ\\x1D\t\\x1AX\t\\xB1\\x1F\\xDE\\x1D\\x06\\x08net\\x0EG\\x0B\\x00.\\x1E#\r\\x00.\\xCD\\xCC\\x0E\\x1E\\x0B\\xE1\\x0E\\x00e\\xFE\\xC4\rz\\xC4\r:\\xDF\n"
		"\\x00n\\x12\\x1D\n\\xE6\\xB3\r\\x0C11.8)g\\x1C76158142:\\xD6\n\\x00o.\\xE8\r\\x00e\\x0E\\xB3\r~3\\x00\\x1AP\r\\x00_%\\xE7\\x00\"\\xA2/\\x00\\x92\\\\\\x00\\xDA\\xB3\r\\xC1\\x97.\\x9A\\x01>a\\x0C\\x1039.60\\x05\\x01\\x1823841866\\x05\\x01\\x15/\\x05\\xA4\\x0439:3\\x01>-\\x00\\x1A\\x82\r-\\x00:\\xB1\\x01\\x00r\\x11\\x1F\\x05L:\\x1D\\x00AZ\\x0E\\x87\\x0C\\x0CtartB\\x88\\x0C\\x04fe*\\xA1\rN\\x85\\x01A\\x83\\x15\\xAC\\xDE\\xA1\r\\x18non-blo\\x12\\xB7\r:\\xD0\\x02\\xFE\\xA5\r*\\xA5\rzq\\x01>\\xB5\r"
		":\\x89\\x00:\\xB0\r\\x0C30986\\x84\\x01J\\xB3\r\\x0427>%\\x00J\\xB1\r\t%\\x8D*^\\xAF\r\\x00_\\x16\\x9A\r\\x10info\"&\\xDC\r\t\\x15\\x04coZ\\xAF\r\\x12\\x00\\x0B\\x16\\x9A\r\\xAE\\x98\n$AccountSum\\x0EB\\x0C\\x1Ar\\x0B>\\xFD\t\\x08has\\x12\\xFB\r\\xB9\\x03\\x0E\\xF7\t\\x08ing\"\\xFD\rN2\\x00\\x19.\\xB1\\x13\\x00p\\x9D\\xBC\\x14unload\\x16\\xF1\tZ\\xCA\\x022#\\x00N\\xCE\\x02\\x0Cdom_\\x12\\x96\n,active\":69.32m\\x046\\xB6\\x01\\x010%A\\x08nt_\\x01~\\x00e:\\x80\\x00\\x006v\\xA6\\x03b?"
		"\\x00\\x05\\x9C\\x0C70.2\t|\\x1A\\xFC\\x12N|\\x00\\x18mplete\"~-\\x00\\x01\\x9D6\\x1B\\x01\\xC1\\xAE\\x85@VA\\x04\\x1D1\t\\x8Dv\\xDD\\x06\\x95$%\\xFD\\x85\t9\\xAE\\x1E1\\x0F\r\\x12\\x0E\\x82\\x0F\r\\x0B\\x08ion\\x0E]\\x15\\x00_\\x1E~\\x15\\x10exist\\x0E5\\x0C\\x1A6\r\\x00s\\x0E\\xC8\\x12\\x0Eu\\x15 number\":1\\xFE0\\x0B\\xFE0\\x0B\\xFE0\\x0B\\xFE0\\x0B\\xFE0\\x0B\\xFE0\\x0B\\xFE0\\x0B\\xFE0\\x0B\\xFE0\\x0B\\xFE0\\x0B\\xFE0\\x0B\\xFE0\\x0B\\xFE0\\x0BV0\\x0B\\x08]}}", 
		LAST);

	lr_end_transaction("AB_AccountSummary_T06_UserLogout",LR_AUTO);

	return 0;
}