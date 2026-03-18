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

	web_custom_request("rb_bf18472vnr", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=1440331764&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1771909584392%7C1771909584792%7Cdn%7C68%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C3%7C_event_%7C1771909584392%7C_vc_%7CV%7C397%5Epc%7CVCD%7C1018%7CVCDS%7C1%7CVCS%7C458%7CVCO%7C1459%7CVCI%7C0%7CTS%7C0%7CVE%7C949%5Ep124%5Ep5700%5Eps%5Estd%3Anth-of-type%284%29%3Ea%3Afirst-child%3Eimg%3Afirst-child%7CS%7C358%2C2%7C4%7C_event_%7C1771909584392%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Ctd%3Anth-of-type%281%29%3Ediv%3Afirst-child%7ClcpS%7C6814%7ClcpT%7C"
		"392%7ClcpU%7C-%7ClcpLT%7C0%7Cfcp%7C392%7Cfp%7C392%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1771909584791%7C1771909584792%7Cdn%7C68%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1771909584392%7C_view_%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=192.168.1.2,$rId=RID_1895941921$rpId=1006033471$domR=1771909584790$tvn=%2FLoanIQ%2F$tvt=1771909584392$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt="
		"a0b1771909584392e14f14g14h80i87k88l245m246o370p370q372r398s399t400u3547v3247w3247X200V1$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109584719_823$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$nV=1$nVAT=1$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$time=1771909585871", 
		LAST);

	web_custom_request("rb_bf18472vnr_2", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=314394680&co=snappy&st=1771909586801&ss=0&qc=4178263185&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xBE\\x88\\x01D{\"data_version\":2,\\x05\\x11\\xF0\\xBA\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909584643,\"duration\":58.200000047683716,\"performance.initiator_typ\\x01\\x90\\xF0\\xA2script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.2:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10331260218130851.js\",\"network.protocol.nam\\x01\\xA7\\x01p\\x00\"6\\xCB\\x00"
		"(time_origin.\\x11\\x01@391,\"dt.rum.schem=\\xB3\\x18\"0.23.0:I\\x00\\x00s=Y\\x10252.1!? 0023841866u\\x00 next_hop_\\x11\\xA1\\x00\")\\x0C\\x0C/1.1:W\\x004domain_lookup_\\x05e\\x00\"\\x82`\\x0065\\x00\\x08end\\x863\\x00\\x18connect.b\\x00\\x0489\\x05\\x01\\x1876158146\\xC2\\x00\\x11/\r\\\\\\x083.6j\\xEF\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006U\\x00M)\\x11\\x1E\\x10253.7\tW\\x0447A\\x87\\x002>/\\x00\\x14sponse\\x110\\x0C308.2\\xB7\\x02Z/\\x00\\x05\\xB4\\x10310.3\t]\\x1071525:\\xA2\\x01\\x10redir="
		"\\x10B\\xAA\\x00\r\\x1F\\x05L:\\x1D\\x00\\x14worker\\x11\\x96:\\x1D\\x00\\x10fetch\\x11\\x1CN(\\x02A\\xA4\\x04.r\r\\xDBAV,tus_code\":20:M\\x008render_blocking\\x01W\\x14tus\":\"\\x11\\x12:M\\x02\\x1Cfirst_ina\\xA0\\x04m_\\x11e\\x017\\x08rt\"B\\xAA\\x00\\x0Cinal\\x19%\\x18headers\\x11-zm\\x01 delivery_\\x8D!:\\x89\\x00\\x14transf!%(ize\":1271686\\xAF\\x01\\x04en\\x01\\xF5\\x18d_body_\\x11'\\x0468>'\\x00\\x04deB'\\x00 345597,\"r\\x89x(.server_tim!$Phint\":\"not_available\""
		"\\x19-\\x0CtracE\\xAB\\x00te\\xA4\\x19-\\x04se^\\xE0\\x04\\x08w3c!'\\x10ource\rf\\x04s\"\\x8D\\xED\\x8DC\\x18applicaA\\xFC\\x00.\\xA5\\x9A<ea7c4b59f27d43eb\\xBD\\xC7\\x0Cfram\\xA1c\\x00s\\xBD\\xC9@0e11ea99742b6eb7\"\\x95\\x9D\\xA5\\x1F\\x00.\\xD5O4\"1.331.17.2026\\xA1\\x18\\x08-13\\xA1\\x19>2\\x00-\\x98\\x0Cjava\\xB5\\xBD\r\\xAD\\x00b\\xCDP\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x19Y\t0\\x80MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-\\xA19\rj\\x00i\r\\xE5)"
		"\\x14\\x001\\xD5\\x8F\\x88723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,\\xF5W\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA74\":1.25,\"page.u\\xA2\\x0E\\x07aC\\x01215\\x00_%\\x9FJ\\x1A\\x02\\x05& detected_\\xCD\\xFB\\x00/\\xEDT\\x11F\\x0Ctitl\\xE1\\x13(Welcome To \t\"\\x18\",\"view:g\\x00897042353bcac223AO\\x05&\\xB2\\xBF\\x00\\x052b\\x99\\x00\\x04},"
		"\\xFE\\xEB\\x08\\xCE\\xEB\\x08\\x044264\\x06\\x001:\t\\x06\\x00i>\\xEB\\x08\\x08img\\xFE\\xE8\\x08>\\xE8\\x08Pimages/personal.JPG\",\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\x12\\xC5\\x08\\x003\\x12\\x02\\x08V\\x03\\x08\\xFE\\xC5\\x08\\x0E\\xC5\\x08n`\\x00Z\\xC5\\x08n3\\x00\\x1Ab\\x08\\xD1\\xA4\\x08254r\\x87\t\\x11/\\xE5\\xC5\\x01-nn\\x08\\xE2\\xC5\\x08\\x084.8*h\\x08\\x005^\\x96\\x08\\x1E\\xDB\t\\x009:j\t\\xF5\\xA6\t\\xA6\\x0494rk\t\\xFE\\xB8\\x08\\xA6\\xB8\\x08"
		">\\x88\\x01\\x08htt\\xEE\\xB8\\x08\\x16\\xB8\\x08\\x0Cnon-\\xFE\\xBC\\x08\\x86\\xBC\\x08Bd\\x01\\xBA\\xAE\\x08\\x08978:\\xC6\\x01N\\xAD\\x08\\x0494>&\\x00J\\xAC\\x08\r&r\\xAB\\x08\\x18invalid\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08\\xFE\\xA5\\x08V\\xA5\\x08>1\\x11Dis_self_monitoring\\x1EK\\x0CJ*\\x00\\x12\\xCA\r"
		"\\x08nal\\x11#\\xC5D\\x0E\\x83\\x0C\\x0ET\r&N\\x0B\\x0445.\\xDD\\x11\\x000\"<\\x0Cf\\xD9\\x10\\x1A\\xA0\\x0B\\x0Csfm_*\\x89\\x12\\x0E,\\x11\\x10stamp.*\\x11\\x10734,\"\\x0E\\x84\r\\x12\\xA0\\x0E 0,\"messag\\x0E\\\\\n\\x01\\x83 507651721\\x12\\xE0\t\\x8AB\\x00\\x003.B\\x00@[\\\\\"OneAgent JavaS\\x12h\\x120 tag\\\\\",[]]\"}]\\x15\\xCE\\xFEd\r\\xFEd\r\\xFEd\r\\xFEd\r\\xFEd\r\\xFEd\r\\xFEd\r\\xFEd\r\\xFEd\r\\xFEd\r\\xFEd\r\\xFEd\r\\xFEd\r\\xFEd\rfd\r\\x04966d\r:\\xC8\\x13\\xFEc\r\\xAAc\r"
		"\\x10corpo\\x0E\\x85\\x0F\\x04ve\\xFEf\r\\xFEf\r*f\r\\x0056\\xFA\\x12\\xFEY\r\\x0EY\r:S\\x00ZL\r:&\\x00\\x1E\\x10\r\\xC5G\\x10\":295rl\\x0C\\x11/\\x1A\\x99\\x0C\\x006nP\\x15\\xDE>\rvV\\x00\"\\x1C\r\r\\xB2\\x0434\\xAE\\x02\\x16\\x04486\\xF1\r6\\x86\\x01\\xFEJ\r\\xA6J\r\\x045,\\xFE=\r\\xFE=\r\\xAE=\r!7jf\\x17\\xB6K\r\\x0C6457:\\xF0\\x0EJK\r\\x08642>&\\x00JK\r\r&\\xFEK\r\\xFEK\r\\xFEK\r\\xFEK\r\\xFEK\r\\xFEK\r\\xFEK\r\\xFEK\r\\xFEK\r\\xFEK\r\\xFEK\r\\xFEK\r\\xFEK\r\\xFEK\r\\xFEK\r\\xE6K\r"
		"\\xC5\\x05B\\xFE\\x0C:\\xDB\\x1E\\x0412:\\xF1\\x15\\xFE\\x8D\\x08\\xE6\\x8D\\x08\\x1Cbusiness\\xFE\\x8A\\x08\\xFE\\x8A\\x08*\\x8A\\x08\\x006\\x16\\xAA\\x14\\xFE\\xB5\\x1Eb\\xB5\\x1En`\\x00Z\\xA4\\x08n3\\x00\\x1E\\x82\\x08%\\xFA\\x08\":3\\x12V\\x19*\\xA8 \\x11 \\x12\\xA2\\x08\\x08325B\\xB5\\x14.-\\x00\\xDA\\xA3\\x08\\x01Wn\\xA4\\x00B\\xA4\\x08\\x0474n@\\x07\\x15/\t\\xB4\\x0076>\\x16:\\x9D\\x18\\xFE\\xA4\\x08\\xA6\\xA4\\x08>\\xE2\\x00\\xFE\\xEE\\x15\\xFE\\xEE\\x15\\xAA\\xEE\\x15!D\\xFE\\xB1\\x08\""
		"\\xB1\\x08\\x0C2109:2\\x04J\\xB1\\x08\\x08207>&\\x00J\\xB1\\x08\r&\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08\\xFE\\xB1\\x08~\\xB1\\x08\\x04446\\xA7\\x0E:\\x7F\\x04\\xFE>\\x11\\xAA>\\x11\\x08nri\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08&\\xAC\\x08\\x04562\\x18\\x1E"
		":\\xDA\\x076\\xBA\\x08\\x0457\\xFE\\\\\\x11J\\\\\\x11\\x01V:\\x01\\x12\"}\\x08\\x1EQ\t\\x009r\\xA5\\x00\\x15/\\x16\\xAC\\x08\\x009r\\xA6\\x00\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\x96\\xAC\\x08vq\\x01\\xB6]\\x11\\x0C1588\\x86]\\x11\\x08155>&\\x00J\\xAC\\x08\r&"
		"\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08\\xFE\\xAC\\x08>\\xAC\\x08\\x16'/\"80\\x08399B*\\x0E.c\\x0FB\\xAC\\x08\\x10navig\\x0E\\x14)\\x00n\\xFET'>T'\\xFEA'\\xEEA'\\x1AA':\\xAD-\\xFE\\xD7\\x19\\x041321\\x08B9\\x17J@\\x11~3\\x00\\x1Ef\\x08\\xED\\xEF\\x0480\\xA6/'\\x0086\\xED\\x07>\\xD7&\\xDAM\\x11\\x0487~"
		"\\x93\\x08\\x002z\\x0F\\x0B6\\x94\\x08\\x08245:5\\x01\\xFE\\xE5\\x19\\xCE\\xE5\\x19N\\x87\\x01\\xFEA\\x11\\xFEA\\x11\\xAAA\\x11~s\\x01\\xB6\\x96\\x08\\x08354:\\x85\\x01JA\\x11\\x0432>%\\x00J\\x94\\x08\t%\\xFE\\x93\\x086\\x93\\x08\\x12<-\\x16\\xCB/.\\xDC,Z\\x9E\\x04\\x0E\\xFA/\\x99\\xC3\\x0E{\\x16\\x04in&\\xFC/>\\xB1#\\x0E\\x0C5\\x19.\\x1E\\xB4#. \\x05\\x1A\\x95/\r%\\x0E\\x970.\\x1E\\x00\\x14unload\\x16\\x91#q\\xB3:d\\x042#\\x00\\x12\\x96\\x0B:!\\x00\\x08dom\\x166$$active\""
		":37v\\xF5\\x03\\x011\\x1Ccontent_\\x01\\x7F\\x00e:\\x81\\x00\\x01@jH3b?\\x00\\x05\\x9D\\x08371r0\\x06\t>\\x10mplet\\x01\\xAB\\x0498nk\\x00\\x01\\x9E6\\x1D\\x01\\xC1\\x8F>\\xA7*.Q\\x01\\x1D2\t\\x8Fz\\xBF\\x06\"\\xC3\\x0C\\x08cou\\x0EE2\\x040,1\\xAB\\x08ion1\\xBD\\x08har\\x0E\\xAB)-\\xC4\\x05\\x19\\x04ab!\\xAF\\x01\\xC3\\x0C\"new\\x1Ea/\\x00s\\x0E\\x9F2\\x0E\\xAB7\\x1Cnumber\":&"
		"r6\\xFE\\xCB$\\xFE\\xCB$\\xFE\\xCB$\\xFE\\xCB$\\xFE\\xCB$\\xFE\\xCB$\\xFE\\xCB$\\xFE\\xCB$\\xFE\\xCB$\\xFE\\xCB$\\xFE\\xCB$\\xFE\\xCB$\\xFE\\xCB$\\xFE\\xCB$*\\xCB$\\x007\\x0E\\x90/&\\xE2\n\\x002\\x0EY5\\x05\\x01\\x16\\x938\\x82/2\\x10otherZ?\\x06\\xCD\\xBB\\xD1\n\\x8AL3(favicon.ico\\xFE\\xE1\n\\xAA\\xE1\nN\\xC9\\x06\\x10error\\x11\\xBAN!\\x00\\x14failed>\\xE4\\x00.\\x7F\\x05\\x12v\n\\xE15\\x14e\":403r\\xAB\\x05\\xFE=\\x0B~`\\x00J=\\x0B~3\\x00:=\\x0B\\x08404\\xA6>\\x0B\\x01-:|"
		"\\x13\\xDA2\\x0B\\x01J\\x006E\\x91V\\xB6\\x1D\"\\x10\\x0B%n\\x0C\":43v\\xF0\\x07\\x150\\xE5\\x12\\x01.v^\\x00\\x1A\\x08;\r^:n\\x08\\xF51\\x05M:\\x1D\\x00\\xA6';N\\x8A\\x01j@\\x0B\\x0440:\\xF6\\x12b';\\xFEo2\\x96o2!En\\x0E>\\xB6@\\x0B\\x0414\\x0E\\x9D8.H\\x03J@\\x0B\\x0411>%\\x00J@\\x0B\t%\\x8D\\x85\\x00.R&;\\xFE{2\\xFE{2\\xFE{2\\xFE{2\\xFE{2\\xFE{2\\xFE{2\\xFE{2\\xFE{2\\xFE{2\\xFE{2\\xFE{2\\xFE{2\\xFE{22{2\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_3", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=1392733580&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2F$tvt=1771909584392$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$rt="
		"1-1771909584392%3Bhttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fpersonal.JPG%7Cb252e0f0g0h2i2k2l42m42u19787v19487w19487X200E1F5890O155P38Q877R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fcorporative.JPG%7Cb253e0f0g0h43i44k44l96m96u64574v64274w64274X200E1F6460O170P38Q980R130I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fbusiness.JPG%7Cb253e0f0g0h72i73k73l122m122u21092v20792w20792X200E1F6080O160P38Q877R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fn"
		"ri.JPG%7Cb253e0f0g0h104i105k105l144m145u15884v15584w15584X200E2F5700O150P38Q777R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2Ffavicon.ico%7Cb403e0f0g0h1i1k1l27m27u1464v1164w1164X404I22V1$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109584719_823$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$time=1771909587902", 
		LAST);

	web_custom_request("rb_bf18472vnr_4", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=1&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=2608390989&co=snappy&st=1771909588354&ss=1&qc=1500062436&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xE9\\x08D{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"background\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909588344,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\\x11\\x83$4391,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D0e11ea99742b6eb7\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x0015W\\x88723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xE0\":1.25,\"page.url.full\":\""
		"http://192.168.1.2:7001/LoanIQ/\",\t215\\x00_%\\x9FJ\\x1A\\x02\\x05X,detected_nam!\\xE9>F\\x00\\x0Ctitl\\x01\\x18,Welcome To L\\x05h\\x18\",\"view:g\\x00897042353bcac223AO\\x05&\\xB2\\xBF\\x00\\x052b\\x99\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(5);

	web_custom_request("rb_bf18472vnr_5", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=2155367227&co=snappy&st=1771909595159&ss=0&qc=1890657575&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xE9\\x08D{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909593155,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(84391,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D0e11ea99742b6eb7\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x0015W\\x88723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xE0\":1.25,\"page.url.full\":\""
		"http://192.168.1.2:7001/LoanIQ/\",\t215\\x00_%\\x9FJ\\x1A\\x02\\x05X,detected_nam!\\xE9>F\\x00\\x0Ctitl\\x01\\x18,Welcome To L\\x05h\\x18\",\"view:g\\x00897042353bcac223AO\\x05&\\xB2\\xBF\\x00\\x052b\\x99\\x00\\x0C}]}}", 
		LAST);

	lr_start_transaction("AB_DDRequest_T01_Launch");

	web_reg_find("Text=Welcome To LoanIQ", 
		LAST);

	web_url("LoanIQ_2", 
		"URL=http://192.168.1.2:7001/LoanIQ/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf18472vnr_6", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=1213056532&co=snappy&st=1771909606593&ss=1&qc=2070565544&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xC6\"D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"view.fo\\x11?,_time\":17391\r\\x1D\\x0Cback\t\\\\\r\\x1Dp4809,\"error.http_4xx_count\":12\\x19\\x00\\x005\\x19\\x19\\x000\\x11\\x19 exception\\x113\\x15\\x1A csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!&8us\":\"reported\",\\x05\\x18)a:-\\x00\\x14value\"\\x01\\x96\\x08fcp\\x11\\x0E\\x0C392,"
		"\\x05\\x10\\x1Cloading_\\x01S!y,dom_content_\\x01\\x1C\\x05\\\\\\x019\\x01!>t\\x00\\x08fid\\x19\\x18\\x0Cnot_\\x1D\\x90\\x00f:l\\x00\\x00p\\x9Ak\\x00\\x00p\\x19R\\x1DN\\x04in\\x1D\\x184below_threshol\\x01\\xFD\\x04lc\\x1D\\x1F\\x1D7\\x01\\x186\\x15\\x01\\x041,\\x05\\x15\\x10start-\\xFF%\\x0C\\x01*\\x01\\xF0\r\\x14\\x000\r' ize\":6814\t\\x10\\x14render\r$\\x158@ui_element.tag_naAr\\x10\"DIV\"\t6\\x1D 0xpath\":[\"htmlA\\xDB(ody\",\"table\\x01\\x08\\x11\\x10\\x0Cr[5]\\x01\\x10\\x01\\xDD<div\"],\""
		"long_task\\x01\\xBD)\\x8B:s\\x01\\x0Cttfb\\x19\\x1D=\\x07\\x05\\x19M\\x08\\x14244.70\\x05\\x01\\x1C4768372,\t \\x0CwaitA\n\\x08durE\\xB1\\x14\":13.8\\x05) 071525574\r+\\x10cache\\x1D)\\x000\r\\x18\\x08dns\\x1D\\x16\\x1066.29\\x05\\x01\\x185231628\r&\\x14connece\\x14\\x19l\\x087.2\tk\t\\x95\\x0416\r-\\x18request\\x1D*\\x10157.3\\x05W\\x1097615%\\x9C@performance.activ\\x05\\xC2A\\xD5\\x04rtE\\xFB\\x00v\\x81\\x16\\x00s\\x01L$nce_numbere\\xDD\\x05\\x19\\x08pre2\\xDA\\x01X0,\"characteristics.has_\\x01,"
		"P_summary\":true,\"navig\\x05n\\x81\\x9F\\x01reG\\x0Cnew\"6\\x1D\\x00\\x04ypa_\\x08har!\\xD3.\\xB0\\x00\\x81\\xA1\\x14_origi!s 771909584\\x85\\xB0.\\xA7\\x02:\\x1B\\x009;H22200,\"dt.rum.schem\\xBD\\x80\\x1C\"0.23.0\"\\x15!\\x14applic\t\\xB3Xid\":\"ea7c4b59f27d43eb\",\\xB5r\\x10frame:t\\x05<0e11ea99742b6eb7\\x1DZ\\x00ga\\x03\\xB5\\xFA\\x1C\"1.331.1!\\xDB0260218-130851>2\\x00-\\x1C$javascript\\x19!\\x00b\\xAD\\xFB\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t"
		"0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"5\\x17\\x08ins\\xC5Y)\\x149m\\x88723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\\x01w,evice.orient%\\\\<\":\"landscape-priE5\\x04,\"\r)$screen.wid\\x81\\x0F\\x0C1536>\\x1B\\x00(height\":8649\\x90\\x14window\\x197aT1#\r\\x1C\\x118\\x08732B8\\x00\t}\\x1C_pixel_r\\x01\\xA7\\xE0\":1.25,\"page.url.full\":\"http://192.168.1.2:7001/LoanIQ/\",\t215\\x00_%\\x9FJ\\x1A\\x02\\x05X\\x1Cdetected\\xB1\\x1A>F\\x00\\x0Ctitla\\x1D,Welcome To L\\x05h\\x00\""
		"\\xED\\xB26g\\x00897042353bcac223AO\\x00va\\xDF\\xB2\\xBF\\x00\\x052b\\x99\\x00\\x04},\\xFE\\x96\\x08:\\x96\\x08%\\x08&\\xD5\\x08\\x00_a\\xF5\\x16\\x96\\x08\\x002-}\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xFE\\x96\\x08\\xCE\\x96\\x08Ne\\x08\\x81*\\x00_:e\\x08\\x01\\x14N\\xA5\\x08\\xFE}\\x08\\xFE}\\x08\\x1A}\\x08\\x001\\xF5E\\xFE}"
		"\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\xFE}\\x08\\x16}\\x08\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_7", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=1273992547&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1771909606591%7C_viewend_%7Cinp%7C0%7Csvn%7C%2FLoanIQ%2F%7Csvt%7C1771909584392%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C7%7C_event_%7C1771909606591%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$rId=RID_1895941921$rpId=1006033471$domR=1771909584790$tvn=%2FLoanIQ%2F$tvt=1771909584392$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=3g|1.25$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$title=Welcome%20To%20LoanIQ$isUnload="
		"1$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109584719_823$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$nV=1$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$time=1771909606592", 
		LAST);

	web_custom_request("rb_bf18472vnr_8", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=686108136&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1771909600811%7C1771909606622%7Cdn%7C68%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C3%7C_event_%7C1771909600811%7C_vc_%7CV%7C5810%5Epc%7CVCD%7C1028%7CVCDS%7C0%7CVCS%7C5876%7CVCO%7C6887%7CVCI%7C0%7CTS%7C1%7CVE%7C572%5Ep486%5Ep6930%5Eps%5Estd%3Anth-of-type%281%29%3Ediv%3Afirst-child%3Efont%3Afirst-child%7CS%7C5809%2C2%7C4%7C_event_%7C1771909600811%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7"
		"C1771909606622%7C1771909606622%7Cdn%7C68%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1771909600811%7C_view_%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=192.168.1.2,$rId=RID_1895941921$rpId=-1584626989$domR=1771909606622$tvn=%2FLoanIQ%2F$tvt=1771909600811$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a1b1771909600811e3f3g3h3i3k4l5775m5776o5810p5810q5810r5811s5811t5811u3548v3248w3248X200V1$ni=3g|1.25$egf=1589PRTUX$url="
		"http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109606600_116$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$time=1771909607716", 
		LAST);

	web_custom_request("rb_bf18472vnr_9", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=1533364214&co=snappy&st=1771909608624&ss=0&qc=3258780049&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xBFuD{\"data_version\":2,\\x05\\x11\\xF4T\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909606596,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.2:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10331260218130851.js\",\"network.protocol.name\":\"\\x01p\\x08\",\".\\xCB\\x00(time_origin=\\x00D0811,\"dt.rum.schem="
		"\\xA2\\x18\"0.23.0:I\\x00\\x00s=H\\x185785.60\\x05\\x01\\x10238426t\\x00$next_hop_p\r\\xA0\\x08\":\"\\x01\\x9B\\x0C/1.1:V\\x004domain_lookup_\\x05d\\x00\"~_\\x0064\\x00\\x08end\\x822\\x00\\x18connect\\x9A`\\x00\\x11.\\x8EZ\\x00\\x18secure_\r3\\x08ion\\x11d\\x0006\\x13\\x01\\x04reE$\\x11\\x1EzA\\x01\\x1Cresponse\\xBE/\\x00\\x8E\\xB2\\x00\\x10redir=\rB\\xA9\\x00\r\\x1F\\x05L:\\x1D\\x00\\x14worker\\x11\\x96:\\x1D\\x00\\x10fetch\\x11\\x1CJ\\xE1\\x00A\\x02\\x15\\xDAAO,tus_code\":20"
		":L\\x008render_blocking\\x01V\\x14tus\":\"\\x11\\x12:G\\x024first_interim_>?\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\">-\\x00,delivery_typ\\x81\\x89\\x10cache:~\\x00\\x14transf!\\x19\\x08izeBB\\x00\\x04en\\x01\\xE5\\x18d_body_\t\"\\x141268686\"\\x02\\x04deB'\\x00 345597,\"rI=(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracE\\x99\\x00te\\x8E\\x19-\\x0Cset\"V\\xC9\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85\\xD6\\x8D,\\x18applicaA\\xEA\\x00.\\xA5r"
		"<ea7c4b59f27d43eb\\xBD\\x9F\\x10frame:\\xA1\\x05@db5bcb223299adcf\"\\x95\\x86\\xA5\\x08\\x00.\\xD5'4\"1.331.17.2026\\xA1\\x01\\x00-\\xA9\\x02>2\\x00-\\x98\\x1Cjavascri\\xA5\\xA6\r\\xAD\\x00b\\xCD(\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x19Y\t0\\x80MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-\\xA1\"\rj\\x00i\\xCD\\x86)\\x14\\x001\\xC9g\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,\\xF5/"
		"\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03L\":1.25,\"page.url.ful\\xB1\\xECj\\xF7\\x06a>\\x01215\\x00_%\\x9FJ\\x1A\\x02\\x05&(detected_na\\xC5\\xE4\\x00/\\xED=\\x11F\\x0Ctitla\\x99(Welcome To \t\"\\x18\",\"view:g\\x00<9bfcf6535dc29c28\\x11&\\xB2\\xBF\\x00\\x05Xb\\x99\\x00\\x04},\\xFE\\xC3\\x08\\xFE\\xC3\\x08N\\xC3\\x08\\x08imgZ\\xF7\\x03\\x8D2q\\xEA\\xA6\n\\x01Timages/personal.JPG\",\""
		"\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xFE\\x9D\\x08\\xE6\\x9D\\x08\\x0Cnon-\\xFE\\xA1\\x08\\xFE\\xA1\\x08\\xFE\\xA1\\x08\\x1A\\xA1\\x08\\x0C9487\\x82\\xA0\\x08\r&\\x8D@V\\x9F\\x08\\x1Cinvalid\"&"
		"\\xC6\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xA6\\x99\\x08\\x10corpo\\x0E\\xAA\n\\x04ve\\xFE\\x9C\\x08\\xFE\\x9C\\x082\\x9C\\x08\\x009\\x05\\x01\\x10284746d\\x05\\xFE9\\x11\\x169\\x11\\x05^N_\\x00b9\\x11b2\\x00\\x1A\\xD8\\x10\\x1E\\x1C\\x0F\\x16\\xD6\\x0F\\x82.\\x00\\x00e&"
		"\\x93\\x11b,\\x00\\xF29\\x11bV\\x00>\\xFA\\x0Fz\\xB1\\x00\\x15/\\x8E\\xB2\\x00\\x00r\\x1E\\x1A\\x11\\x1A\\xA6\\x12:V\\x10\\x15\\x1F\\x05L:\\x1D\\x00\\xBE9\\x112\\xE1\\x00\\xFE9\\x11\\x129\\x11\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08&\\x9C\\x08\\x08642>8\\x03J<\\x11\r&"
		"\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08\\xFE\\x9C\\x08b\\x9C\\x08\\x1Cbusiness\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x"
		"08\\xFE\\x99\\x08*\\x99\\x08\\x0C2079:\n\\x1DJ\\x99\\x08\r&"
		"\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08\\xFE\\x99\\x08b\\x99\\x08\\x08nri\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\x"
		"FE\\x94\\x08*\\x94\\x08\\x0C1558:e\\x14J\\x94\\x08\r&\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xFE\\x94\\x08\\xE6\\x94\\x08\\x00c:\\xD7*Dis_self_monitoring\\x1E\\x1E\"J*\\x00\\x12w'\\x08nal\\x11#\\x12 \\x17\\x0E@&\\x00e*r*\\x08661\\x0E\\xFA+.r+\\x1A<%f\\x7F*\\x11!\\x08fm_*\\x1E,\\x0E\\xD2*\\x10stamp2^\\x00\\x0C08,\"\\x0EA'\\x12M( "
		"0,\"messag\\x0E\\x19$\\x0E\\x8E% 507651721\\x12\\x9D#\\x8AB\\x00\\x003.B\\x00@[\\\\\"OneAgent JavaS\\x12h&0 tag\\\\\",[]]\"}]&\\xC7&\\x00p\\xFE!'\\xFE!'\\xFE!'\\xFE!'\\xFE!'\\xFE!'\\xFE!'\\xFE!'\\xFE!'\\xFE!'\\xFE!'\\xFE!'\\xFE!'\\xFE!'\\x1E!'\\x1A\\xE4.\\x95r\\x145811.3\\x16Z\\x1B\\x0C7615:\\x80+B\\xF4/\\x10navig\\x0E\\xE7(\\x00n\\xFE8'>8'\\xFE%'\\xEE%'\\x1A%':\\xA0\\x1C\\xFEy\\x1E\\x042.\\x0E\\x07*\\x04er\"B1Jk\\x1EB$\\x00:]\\x1Eb \\x00\\x12Q\\x1DB\\x1E\\x00\\xDAA\\x1E\\x003>\\xAA\\x00\""
		"\\x04\\x1E\\xC5\\xB7\\x0EK0\\x0C75.2I'\\x10523166\\xA3\\x1F\\x15/\\x05\\x96\\x005\\x01-6\\xAE\\x1D.\\x06\\x01\"\\x14\\x1E\r\\\\:v\\x01\\x15\\x1F\\x05L:\\x1D\\x00\\xA63\\x1E%\\x1B\\xFE%\\x1E\\xFE%\\x1E\\xAA%\\x1E%5fb\\x01>r/\\x0E\\xE9+]Z:m/\\x08354:\\xC9\\x03Jp/\\x0432>%\\x00J\\x05\r\t%\\xFE\\x04\r6\\x04\r\\x12\\xC2,\\x16Q/.b,ZQ\\x04\\x0E\\x80/\\x99v\\x0EB\t\\x04in&\\x82/>z\t\\x08has\\x1D.\\x1E}\t2+\\x01\\x16\\xB30\\x10reloa\\x0E\\x82'.\\x1C\\x00\\x04un\\x01\\x15\\x16X\t"
		"Q\\x9F\\x0C5783j\\xD7323\\x00E\\xB3z1\\x00\\x08dom\\x16\\x1D\n,active\":5809>\\x80\\x03\\x01%\\x1Ccontent_\\x01\\x93\\x00e>\\x95\\x00\\x014fl4b?\\x00\t\\xA1\\x08810nk\\x02$om_complet\\x05\\x9E\\x0410jj\\x00\\x01\\x9D:0\\x01vR\\x06\\x1D1\\x11\\x8Dn\\x81\\x06\\x95\\x0E\\x08cou\\x0E\\xDA1\\x040,\\xDD\\x83\\x1E\\xE70\\x08har!\\xCAY&\\x0E\\x057!\\xC0\\x01\\xC1\\x14\"exist\\x0E\\xAD\\x0B\\x1A\\xFB.\\x00s\\x0E92\\x0E\\x1D7\\x1Cnumber\":&\\xF55\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n"
		"\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\xFE\\xA8\n\\x92\\xA8\n\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_10", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=366605186&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2F$tvt=1771909600811$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$rt="
		"1-1771909600811%3Bhttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fpersonal.JPG%7Cb5786e0f0g0h0i0k0l0m0v19487w19487X200E1F5890O155P38Q877R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fcorporative.JPG%7Cb5786e0f0g0h0i0k0l0m0v64274w64274X200E1F6460O170P38Q980R130I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fbusiness.JPG%7Cb5786e0f0g0h0i0k0l0m0v20792w20792X200E1F6080O160P38Q877R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fnri.JPG%7Cb5786e0f0g0h0i0k0l0m"
		"0v15584w15584X200E1F5700O150P38Q777R127I7V1$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109606600_116$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$time=1771909609741", 
		LAST);

	lr_end_transaction("AB_DDRequest_T01_Launch",LR_AUTO);

	lr_think_time(7);

	web_custom_request("rb_bf18472vnr_11", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=1&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=1487884623&co=snappy&st=1771909622676&ss=1&qc=2389793419&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xE9\\x08D{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"background\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909622673,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(00811,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01Ddb5bcb223299adcf\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x001)W\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\xE0\":1.25,\""
		"page.url.full\":\"http://192.168.1.2:7001/LoanIQ/\",\t215\\x00_%\\x9FJ\\x1A\\x02\\x05X,detected_nam!\\xE9>F\\x00\\x0Ctitl\\x01\\x18,Welcome To L\\x05h\\x18\",\"view:g\\x00<9bfcf6535dc29c28\\x11&\\xB2\\xBF\\x00\\x05Xb\\x99\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(3);

	web_custom_request("rb_bf18472vnr_12", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=667420964&co=snappy&st=1771909629299&ss=0&qc=152256103&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xE9\\x08D{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909627292,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(00811,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01Ddb5bcb223299adcf\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x001)W\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\xE0\":1.25,\""
		"page.url.full\":\"http://192.168.1.2:7001/LoanIQ/\",\t215\\x00_%\\x9FJ\\x1A\\x02\\x05X,detected_nam!\\xE9>F\\x00\\x0Ctitl\\x01\\x18,Welcome To L\\x05h\\x18\",\"view:g\\x00<9bfcf6535dc29c28\\x11&\\xB2\\xBF\\x00\\x05Xb\\x99\\x00\\x0C}]}}", 
		LAST);

	lr_start_transaction("AB_DDRequest_T02_AccessPersonalBanking");

	web_reg_find("Text=Welcome To LoanIQ", 
		LAST);

	lr_think_time(3);

	web_url("login.jsp", 
		"URL=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf18472vnr_13", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=2655445103&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1771909632485%7C_viewend_%7Cinp%7C40%7Csvn%7C%2FLoanIQ%2F%7Csvt%7C1771909600811%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C7%7C_event_%7C1771909632485%7C_pageend_%7Cinp%7C40%7Curl%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$rId=RID_1895941921$rpId=-1584626989$domR=1771909606622$tvn=%2FLoanIQ%2F$tvt=1771909600811$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$title=Welcome%20To%20LoanIQ$isUnload"
		"=1$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109606600_116$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F$time=1771909632486", 
		LAST);

	web_custom_request("rb_bf18472vnr_14", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=3139178108&co=snappy&st=1771909632488&ss=1&qc=3165915887&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xA2-D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"view.fo\\x11?,_time\":27057\r\\x1D\\x0Cback\t\\\\\r\\x1Dp4618,\"error.http_4xx_count\":02\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!&8us\":\"reported\",\\x05\\x18)a:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x105840,\\x05\\x11\\x1Cloading_\\x01T!z "
		"complete\"\t\\x1F\\x01\\x17>k\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-w\\x1C31579.5,\\x05P\\x08dur%'\\x04\":\\x05\\x99\\x10id.na!\\xB9,\"pointerdown\\x01\\x93$id.process\r\\xB5\\x08rt\"\\x01J\\x1082.29\\x05\\x01\\x1052316\tU\\x1D*\\x08end\\x11(\\x003\\x05'\\x14976158\t(<cancelable\":true\t\\x168ui_element.tag_\r\\x90\\x08IMG\r\\x88\\x1D \\\\xpath\":[\"html\",\"body\",\"t\\x05S\\x08,\"t\\x11\\x10\\x0Cr[3]\\x01\\x10!\\xB1F\\x1D\\x00\\x11\\x1Ala\",\"img[@id=\\\\\"image1\\\\\"]\"],\"f"
		">\\xC2\\x01\\x00prr\\x01\\x00pR\\xA8\\x01\\x04inf\\x18\\x00BC\\x02\\x01-%\\x82\\x04ac.\\xC7\\x02\\x043,\\x05\\x1Aj\\xEF\\x01\\x019\\x04stJ\\xEF\\x01\\x01\\x196\\xEF\\x01\\x01\\x12-_6\\xEF\\x01\\x01\\x19=\\xC5\\x05O1\\xC76\\xEF\\x01:*\\x00b\\xEF\\x01\\x01(F\\xEF\\x01\\x01\\x16=\\xCFB\\xEF\\x01: \\x00\\xFE\\xEF\\x01\\xA2\\xEF\\x01\\x04lcV\\xAA\\x01\\x01\\x186\\xAA\\x01\\x041,\\x05\\x15%\"m`i\\xE4\\x01+!\\xA6\r\\x15\\x000\r( ize\":6814\t\\x10\\x14render\r$\\x199V\\x14\\x01\\x0CDIV\"\t7\\x1D "
		"\\xA6\\x14\\x01\\x005u\\x03\\x08divA\\xD5 long_task\\x01\\xBF\\x89n\\x0Cnot_\\x9D\\xDD\\x0Cttfb\\x19\\x1D>\\x19\\x00\\x8D\\xE2\\x0C5775:\\x16\\x02\\x058\\x0Cwait\\x81-Yt\\x002\\x81v\\x05\\x1C\\x10cache\\x1D\\x1A\\x040,\t\\x18\\x08dnsJ\\x16\\x00\\x10connei\\x07\\x19M\\x113\\x18request\\x1D\\x1A\\x145772.7\\x89n\\x005\\x89\\x96\\x18perform\\x81p\\x00.aQ\\x00v\\x85\\xF5Q\\xD9\\x000\\xCD\\xA2\\x00s\\x01K(nce_number\"!\\xDE\\x00v\\xC1\\xD8\\x08pre2\\xAA\\x01\\x140,\"chaa\\x9B0eristics.has_\\x01,"
		"\\x1C_summary\\x91\\xD2\\x10navig\\x05n\\xE1H\\x01r\\xA5\\xEF\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\xC1\\x0C\\x08har\\x81\\xAA.\\xB5\\x00\\xE1O\\\\_origin\":1771909600811,\".}\\x02:\\x1B\\x009/H31675,\"dt.rum.schem*.\\x08\\x1C\"0.23.0\"\\x15!\\x14applic\t\\xB8Pid\":\"ea7c4b59f27d43eb\\xA1n\\x1A \\x08\\x18frame.i2\"\\x08<db5bcb223299adcf\\x1DZ\\x00g\\xA1\\xDA\"\\xA8\\x08`\"1.331.17.20260218-130851>2\\x00-\\x1C$javascript\\x19!\\x11\\x89\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t"
		"0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"5\\x17\\x11\\xE5)\\x14-m\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta\\xA1\\xD7<\":\"landscape-priE:\\x15)$screen.wid\\xC1\\xE6\\x0C1536>\\x1B\\x00,height\":864,\"\\xB0\t\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t\\xA6\\x1C_pixel_rA\\x03\\\\\":1.25,\"page.url.full\":\"\\x0E)\tl://192.168.1.2:7001/LoanIQ/\"\r215\\x00_%\\x9FJ\\x1A\\x02\\x05X\\x1Cdetected\\xF1\\xF1>F\\x00\\x08tit\\x0E(\\x08,\"Welcome To \th\\x00\""
		"m\\xBE6g\\x00<9bfcf6535dc29c28\\x11&\\x00u\\xAE\\xBF\\x00\\x00va\\xFDb\\x99\\x00\\x04},\\xFED\\x0B:D\\x0B%\\x08&\\x83\\x0B\\xCD\\x17\\x1027056-KND\\x0B\\x089,\"\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\xFED\\x0B\\x16D\\x0BN\\x13\\x0B\\xC1\\xD3\\x00_"
		":\\x13\\x0B\\x01\\x14NS\\x0B\\xFE+\\x0B\\xFE+\\x0B\\xFE+\\x0B\\xFE+\\x0B\\xFE+\\x0B\\xFE+\\x0B\\xFE+\\x0B\\xFE+\\x0B\\xFE+\\x0B\\xFE+\\x0B\\xFE+\\x0B\\xFE+\\x0B\\xFE+\\x0B\\xFE+\\x0B\\xFE+\\x0Bn+\\x0B\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_15", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=1798724900&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7Cimage1%7CC%7C-%7C109606600_116%7C1771909632437%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F%7C%7C%7C%2FLoanIQ%2F%7C1771909600811%2C1%7C1%7C_load_%7C_load_%7C-%7C1771909632440%7C1771909632598%7Cdn%7C54%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2F%2C2%7C3%7C_event_%7C1771909632440%7C_vc_%7CV%7C156%5Epc%7CVCD%7C1026%7CVCDS%7C1%7CVCS%7C209%7CVCO%7C1217%7CVCI%7C0%7CTS%7C0%7CVE%7C871%5Ep228%5Ep1625%5Eps%5Esimg%3Anth-of"
		"-type%281%29%7CS%7C72%2C2%7C4%7C_event_%7C1771909632440%7C_wv_%7ClcpE%7CTD%7ClcpSel%7Ctr%3Anth-of-type%284%29%3Etd%3Afirst-child%7ClcpS%7C2041%7ClcpT%7C92%7ClcpU%7C-%7ClcpLT%7C0%7Cfcp%7C92%7Cfp%7C92%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1771909632598%7C1771909632598%7Cdn%7C54%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1771909632440%7C_view_%7Csvn%7C%2FLoanIQ%2F%7Csvt%7C1771909600811%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7"
		"Ci1%5Esk0%5Esh0$dO=192.168.1.2,$rId=RID_1318254503$rpId=1473435764$domR=1771909632597$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1771909632440$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1771909632440e15f15g15h15i15k16l41m42o72p73q74r157s158t158u3565v3265w3265X200V1$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109632496_230$v=10331260218130851$vID="
		"1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$time=1771909633678", 
		LAST);

	web_custom_request("rb_bf18472vnr_16", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=2662828241&co=snappy&st=1771909634601&ss=0&qc=1707844826&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xCCUD{\"data_version\":2,\\x05\\x11\\xF4T\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909632490,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.2:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10331260218130851.js\",\"network.protocol.name\":\"\\x01p\\x08\",\".\\xCB\\x00(time_origin2\\x00\\x01<39,\"dt.rum.schem="
		"\\xA2\\x18\"0.23.0:I\\x00\\x00s=H\\x1051.79\\x05\\x01 52316284,2u\\x00$next_hop_p\r\\xA1\\x08\":\"\\x01\\x9C\\x0C/1.1:W\\x004domain_lookup_\\x05e\\x00\"\\x82`\\x0065\\x00\\x08end\\x863\\x00\\x18connect\\x9Eb\\x00\\x11/\\x92\\\\\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006\\x17\\x01\\x04reE)\\x11\\x1E\\x005zF\\x01\\x1Cresponse\\xC20\\x00\\x92\\xB5\\x00\\x10redir=\\x12B\\xAC\\x00\r\\x1F\\x05M:\\x1D\\x00\\x14worker\\x11\\x98:\\x1D\\x00\\x10fetch\\x11\\x1CN\\xE4\\x00A\n\\x15\\xDDAX,tus_code\":20"
		":M\\x008render_blocking\\x01W\\x14tus\":\"\\x11\\x12:O\\x024first_interim_>B\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\">-\\x00,delivery_typ\\x81\\x92\\x10cache:~\\x00\\x14transf!\\x1A\\x08izeBB\\x00\\x04en\\x01\\xE5\\x18d_body_\t\"\\x18126868,2=\\x03\\x04deB'\\x00 345597,\"rIA(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracE\\x9D\\x00te\\x96\\x19-\\x0Cset\"V\\xD2\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85\\xDF\\x8D5\\x18applicaA\\xEE\\x00.\\xA5{"
		"<ea7c4b59f27d43eb\\xBD\\xA8\\x10frame:\\xAA\\x05@107551c0449aeb4f\"\\x95\\x8F\\xA5\\x11\\x00.\\xD504\"1.331.17.2026\\xA1\n\\x00-\\xA9\\x0B>2\\x00-\\x98\\x1Cjavascri\\xA5\\xAF\r\\xAD\\x00b\\xCD1\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x19Y\t0\\x80MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-\\xA1+\rj\\x00i\\xCD\\x8F)\\x14\\x001\\xC9p\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,"
		"\\xF58\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03L\":1.25,\"page.url.ful\\xB1\\xF4j\\x00\\x07\\x1Clogin.js\\xC5\\xB4\\x01;1>\\x00_%\\xA8J#\\x02\\x05&(detected_na\\xC5\\xF6\\x00/\\xEDOBO\\x00\\x0Ctitla\\xAB(Welcome To \t+\\x18\",\"view:p\\x008b64d703b5052d65!\\x91\\x05&\\xD6\\xD1\\x00\\x05;\\x86\\xAB\\x00\\x04},\\xFE\\xF0\\x08:\\xF0\\x08\\x00c:\\xA2\\x08Dis_self_monitoringq\\xCAJ*\\x00\\xA59\\x08nal\\x11#\\xE5\\x90\\x81\\x02\\x00e.=\\x08\\x08508:=\t"
		"M\\xFEfJ\\x08\\x11!\\x08fm_*\\xE9\t\\x0E\\x9D\\x08\\x10stamp6^\\x00\\x083,\"\\xA1\\x03\\xC5\\x0F 0,\"messag!\\xC9aP 507651721%;\\x8AB\\x00\\x003.B\\x00@[\\\\\"OneAgent JavaS\\x85*0 tag\\\\\",[]]\"}]\\x99\\x89\\xFE\\xE3\\x04\\xFE\\xE3\\x04\\xFE\\xE3\\x04\\xFE\\xE3\\x04\\xFE\\xE3\\x04\\xFE\\xE3\\x04\\xFE\\xE3\\x04\\xFE\\xE3\\x04\\xFE\\xE3\\x04\\xFE\\xE3\\x04\\xFE\\xE3\\x04\\xFE\\xE3\\x04\\xFE\\xE3\\x04\\xFE\\xE3\\x04^\\xE3\\x04V\\x96\\x04:\\xD3\r\\x1089.20\\x05\\x01\\x1847683726f\tB\\xE3\r\\x0Cinpu^"
		"\\x10\t\\x1AK\t\\xB1\\x16\\xA6\\x11\\x06\\x14images\\xCD\\x9A\\x14JPG\",\"\\xFE\\xBC\r\\xEE\\xBC\r\\x1A\\xBC\r\\x008\\x12\\xBB\r\\x189761581\\xFE\\xBB\rF\\xBB\rn_\\x00V\\xBA\rn2\\x00\\x1AV\r\\x1E\\x96\\x0B\\x0C52.6\t\\xBF\\x1C284744266\\xD8\\x01\\x11/\\x00e\\x12\\x15\\x0E\\x083.3\t-R\\xEC\\x00\\xDE\\xB8\r\\x043.\\x0E\\xEC\\x08\\x04er\"0\\x10>h\\x0C\\x081406\\xA6\\x00\\x0036\\xA5\\x00\\x150\\x05\\xA6\\x10141.1E\\xAA\\x180238418:\\xD3\\x00\\x00r\\x1E\\x8B\rE\\xF8BW\\x0C\\x15\\x1F\\x05M"
		":\\xE3\\x0C\\xB2\\xAA\r>\\x87\\x01\\xFE\\xA9\r\\x12\\xA9\r\\x0Cnon-\\xFE\\xAD\r\\x86\\xAD\r~r\\x01>\\xBE\rv\\xB9\r\\x08542:\\xB2\\x01J\\xBC\r\\x0451>%\\x00J\\xBA\r\t%\\x8D@V\\xB8\r\\x1Cinvalid\"&\\xDF\r\\xFE\\xB2\r\\xFE\\xB2\r\\xFE\\xB2\r\\xFE\\xB2\r\\xFE\\xB2\r\\xFE\\xB2\r\\xFE\\xB2\r\\xFE\\xB2\r\\xFE\\xB2\r\\xFE\\xB2\r\\xFE\\xB2\r\\xFE\\xB2\r\\xFE\\xB2\r\\xFE\\xB2\r\\xFE\\xB2\r\\xBA\\xB2\r\\xA5\\xD7Be\r\\x08491.e\r"
		"\\x0410Bv\\x06F\\xC3\\x08\\x04mgZ\\xD1\\x11\\x8D\\x81\\xE2\\xC1\\x08\\x14signup\\xFE\\xC2\\x08\\xFE\\xC2\\x08\\x1E\\xC2\\x08\\x082.1\\xE9\\xD6V\\x03\\x08\\xEE~\\x16\\x12~\\x16z`\\x00N\\xC4\\x08z3\\x00\\x1E\\x96\\x08%\\xEB\\x0C\":53Bl\\x07\\x00p*O\\x08\\x11.\\xE5\\xD1\\x0454\\xFE\\xC4\\x08R\\xC4\\x08\\x004\\x82\\xC4\\x08\\x04556g\\x01:\\x12\\x07:\\xC4\\x08\\x0455z\\xF2\\x08\\x1AO\\x16-\\x02"
		":\\xA7\\x08\\xFE\\xC4\\x08\\x1E\\xC4\\x08J\\x87\\x01\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xAE\\xC5\\x08zs\\x01\\xB6\\xC5\\x08\\x0C63196w\nJ\\xC5\\x08\\x0460>%\\x00J\\xC5\\x08\t%\\x8DD\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xB6\\xC5\\x08\\x003\\x0Eg\\x1E\"g\\x1F\\x08157"
		":9\\x1E6\\xA1\\x04B\\xD2\\x08\\x10navig\\x0Eb\\x18\\x00n\\xFE\\xD9\\x08>\\xD9\\x08.-\\x18\\xFE\\x93\\x11\\xFE\\x93\\x11:\r\\x07\\xFE\\xC0\\x08\\x0415:2\\x08:\\xFB\\x12J\\xC0\\x08~3\\x00\\x1E\\x92\\x08\\xED\\xBE\\x9E/\\x00\\x12\\xC1\\x08~-\\x00\\xDA\\x86\\x11\\x0C16.2\\x16\\x06\nV\\x84 \"\\xA0\\x08\r\\xB4\\x0841.n\\x0C\\x12\\x15/\\x05\\xB4\\x0441r\\xA1\t\"\\xAF\\x08\r\\\\:\\xC1\\x01\\x15\\x1F\\x05L"
		":\\x1D\\x00\\xA6\\x92\\x11N9\\x01\\xFE\\xCE\\x08\\xFE\\xCE\\x08\\xAA\\xCE\\x08zq\\x01\\xB6\\xCD\\x08\\x08356:t\\x13J\\xCD\\x08\\x0432>%\\x00J\\xCD\\x08\t%\\xFE\\xCD\\x086\\xCD\\x08\\x12\\x97\\x1C\\x16/\\x1F\\xAA.\\x1CZ\\xD3\\x04\\x0E}\\x1F\\x99\\xF8\\x0E\\x18\\x0E\\x04in&\\x7F\\x1F>\\xB5\\x1B\\x08has\\x1D.\\x1E\\xE1\r.N\\x0C\\x1A\\x18\\x1F\rS\\x0E\\x1A .\\x1E\\x00\\x14unload\\x16\\x95\\x1BZ\\xCF\\x022#\\x00N\\xD3\\x02\\x08dom\\x16:\\x1C active\":7:\\x88\\x0B:;\\x0C\\x010\\x1Ccontent_\\x01~\\x00e"
		":\\x80\\x00\\x0472>\\x9D\\x0Cb2\\x00\\x05\\x8F\\x007vO\r\t=\\x10mplet\\x0E\\xC7\\x1C\\x0456r\\x84\\x06\\x01\\x916\\x0F\\x01\\xC1\\xB6\\x006j\\xA0\\x15\\x1D2\\x05\\x8F\\x010\\x0072\\x9B\\x046\\xE6\\x06\\x00r\\x1E\\x0C\r\\x08cou\\x0E\\xBA!\\x040,1\\x9D\\x08ion1\\xAF\\x08har\\x0E\\x13\\x14-\\xB6\\x05\\x19\\x04ab!\\xA1\\x01\\xC4\\x14\"exist\\x0E\\xCB\\x1D\\x00,\\x16h\\x1E\\x00s\\x0E\\x19\"\\x0E\\x06'\\x1Cnumber\":\\x0E"
		"<\\x10\\x16\\xDE%\\xFE\\xC6\\x1C\\xFE\\xC6\\x1C\\xFE\\xC6\\x1C\\xFE\\xC6\\x1C\\xFE\\xC6\\x1C\\xFE\\xC6\\x1C\\xFE\\xC6\\x1C\\xFE\\xC6\\x1C\\xFE\\xC6\\x1C\\xFE\\xC6\\x1C\\xFE\\xC6\\x1C\\xFE\\xC6\\x1C\\xFE\\xC6\\x1C\"\\xC6\\x1C\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_17", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=2254898813&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1771909632440$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$rt=1-1771909632440%3Bhttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Flogin.JPG%7Cb52e0f0g0h1i2k2l89m89u5423v5123w5123X200I13V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fsignup.JPG%7Cb52e0f0g0h2i2k2l103m104u6319v6019w6019X200E2F1625O65P25Q302R127I7V1$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app="
		"ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109632496_230$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$time=1771909635709", 
		LAST);

	lr_end_transaction("AB_DDRequest_T02_AccessPersonalBanking",LR_AUTO);

	web_custom_request("rb_bf18472vnr_18", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=1&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=48507647&co=snappy&st=1771909648302&ss=1&qc=87258647&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x8D\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"background\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909648300,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(32439,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D107551c0449aeb4f\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\xB01771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xF0B\":1.25,\"page.url.full\":\""
		"http://192.168.1.2:7001/LoanIQ/login.jsp\",\"\\x05;1>\\x00_%\\xA8J#\\x02\\x05&,detected_nam!\\xF2bO\\x00\\x0Ctitl\\x01!,Welcome To L\\x05z\\x18\",\"view:p\\x00<b64d703b5052d653\\x11&\\xD6\\xD1\\x00\\x05a\\x86\\xAB\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(8);

	web_custom_request("rb_bf18472vnr_19", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=3730798688&co=snappy&st=1771909656465&ss=0&qc=3483845322&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x8D\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909654455,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(32439,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D107551c0449aeb4f\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\xB01771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\\x01w,evice.orient%\\\\L\":\"landscape-primary\\x19)Lscreen.width\":1536,\"\rD\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_r\\x01\\xA7\\xF0B\":1.25,\"page.url.full\":\""
		"http://192.168.1.2:7001/LoanIQ/login.jsp\",\"\\x05;1>\\x00_%\\xA8J#\\x02\\x05&,detected_nam!\\xF2bO\\x00\\x0Ctitl\\x01!,Welcome To L\\x05z\\x18\",\"view:p\\x00<b64d703b5052d653\\x11&\\xD6\\xD1\\x00\\x05a\\x86\\xAB\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(5);

	lr_start_transaction("AB_DDRequest_T03_UserLogin");

	web_custom_request("rb_bf18472vnr_20", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=600769951&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C6%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1771909661729%7C1771909661729%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C7%7CReferenceError%7C_type_%7C-%7C1771909661731%7C1771909661731%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C8%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%5Ep67%5Ep108%7C_location_%7C-%7C1771909661732%7C1771909661732%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C9%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInputEleme"
		"nt.onkeypress%20%28http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%3A67%3A108%29%7C_stack_%7C-%7C1771909661733%7C1771909661733%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C10%7C29233%7C_ts_%7C-%7C1771909661734%7C1771909661734%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C11%7CKD%5Eppassword%7C_useraction_%7C-%7C1771909661735%7C1771909661735%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C12%7C1%7C_source_%7C-%7C1771909661736%7C1771909661736%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0"
		"%5Esh0$rId=RID_1318254503$rpId=1473435764$domR=1771909632597$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1771909632440$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109632496_230$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$time=1771909661738", 
		LAST);

	web_custom_request("rb_bf18472vnr_21", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=2865213172&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C13%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1771909662020%7C1771909662020%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C14%7CReferenceError%7C_type_%7C-%7C1771909662021%7C1771909662021%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C15%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%5Ep67%5Ep108%7C_location_%7C-%7C1771909662022%7C1771909662022%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C16%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInputE"
		"lement.onkeypress%20%28http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%3A67%3A108%29%7C_stack_%7C-%7C1771909662023%7C1771909662023%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C17%7C29524%7C_ts_%7C-%7C1771909662024%7C1771909662024%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C18%7CKD%5Eppassword%7C_useraction_%7C-%7C1771909662025%7C1771909662025%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C19%7C1%7C_source_%7C-%7C1771909662026%7C1771909662026%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5"
		"Esk0%5Esh0$rId=RID_1318254503$rpId=1473435764$domR=1771909632597$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1771909632440$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109632496_230$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$time=1771909662028", 
		LAST);

	web_custom_request("rb_bf18472vnr_22", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=691089949&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C20%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1771909662100%7C1771909662100%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C21%7CReferenceError%7C_type_%7C-%7C1771909662101%7C1771909662101%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C22%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%5Ep67%5Ep108%7C_location_%7C-%7C1771909662102%7C1771909662102%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C23%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInputE"
		"lement.onkeypress%20%28http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%3A67%3A108%29%7C_stack_%7C-%7C1771909662102%7C1771909662102%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C24%7C29604%7C_ts_%7C-%7C1771909662103%7C1771909662103%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C25%7CKD%5Eppassword%7C_useraction_%7C-%7C1771909662104%7C1771909662104%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C26%7C1%7C_source_%7C-%7C1771909662104%7C1771909662104%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5"
		"Esk0%5Esh0$rId=RID_1318254503$rpId=1473435764$domR=1771909632597$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1771909632440$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109632496_230$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$time=1771909662106", 
		LAST);

	web_custom_request("rb_bf18472vnr_23", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=1260050340&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C27%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1771909662296%7C1771909662296%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C28%7CReferenceError%7C_type_%7C-%7C1771909662296%7C1771909662296%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C29%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%5Ep67%5Ep108%7C_location_%7C-%7C1771909662296%7C1771909662296%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C30%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInputE"
		"lement.onkeypress%20%28http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%3A67%3A108%29%7C_stack_%7C-%7C1771909662297%7C1771909662297%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C31%7C29800%7C_ts_%7C-%7C1771909662297%7C1771909662297%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C32%7CKD%5Eppassword%7C_useraction_%7C-%7C1771909662298%7C1771909662298%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C33%7C1%7C_source_%7C-%7C1771909662298%7C1771909662298%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5"
		"Esk0%5Esh0$rId=RID_1318254503$rpId=1473435764$domR=1771909632597$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1771909632440$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109632496_230$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$time=1771909662299", 
		LAST);

	web_custom_request("rb_bf18472vnr_24", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=1932762661&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C34%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1771909662752%7C1771909662752%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C35%7CReferenceError%7C_type_%7C-%7C1771909662753%7C1771909662753%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C36%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%5Ep67%5Ep108%7C_location_%7C-%7C1771909662754%7C1771909662754%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C37%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInputE"
		"lement.onkeypress%20%28http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%3A67%3A108%29%7C_stack_%7C-%7C1771909662754%7C1771909662754%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C38%7C30256%7C_ts_%7C-%7C1771909662755%7C1771909662755%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C39%7CKD%5Eppassword%7C_useraction_%7C-%7C1771909662756%7C1771909662756%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C40%7C1%7C_source_%7C-%7C1771909662757%7C1771909662757%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5"
		"Esk0%5Esh0$rId=RID_1318254503$rpId=1473435764$domR=1771909632597$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1771909632440$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109632496_230$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$time=1771909662759", 
		LAST);

	web_custom_request("rb_bf18472vnr_25", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=3602776109&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C41%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1771909662927%7C1771909662927%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C42%7CReferenceError%7C_type_%7C-%7C1771909662928%7C1771909662928%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C43%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%5Ep67%5Ep108%7C_location_%7C-%7C1771909662929%7C1771909662929%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C44%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInputE"
		"lement.onkeypress%20%28http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%3A67%3A108%29%7C_stack_%7C-%7C1771909662930%7C1771909662930%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C45%7C30431%7C_ts_%7C-%7C1771909662931%7C1771909662931%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C46%7CKD%5Eppassword%7C_useraction_%7C-%7C1771909662932%7C1771909662932%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C47%7C1%7C_source_%7C-%7C1771909662933%7C1771909662933%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5"
		"Esk0%5Esh0$rId=RID_1318254503$rpId=1473435764$domR=1771909632597$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1771909632440$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109632496_230$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$time=1771909662935", 
		LAST);

	web_custom_request("rb_bf18472vnr_26", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=3761527935&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C48%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1771909663268%7C1771909663268%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C49%7CReferenceError%7C_type_%7C-%7C1771909663269%7C1771909663269%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C50%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%5Ep67%5Ep108%7C_location_%7C-%7C1771909663270%7C1771909663270%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C51%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInputE"
		"lement.onkeypress%20%28http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%3A67%3A108%29%7C_stack_%7C-%7C1771909663271%7C1771909663271%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C52%7C30772%7C_ts_%7C-%7C1771909663271%7C1771909663271%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C53%7CKD%5Eppassword%7C_useraction_%7C-%7C1771909663272%7C1771909663272%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C54%7C1%7C_source_%7C-%7C1771909663272%7C1771909663272%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5"
		"Esk0%5Esh0$rId=RID_1318254503$rpId=1473435764$domR=1771909632597$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1771909632440$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109632496_230$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$time=1771909663274", 
		LAST);

	web_custom_request("rb_bf18472vnr_27", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=1664132242&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C55%7Cvalid%20is%20not%20defined%7C_error_%7C-%7C1771909663491%7C1771909663491%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C56%7CReferenceError%7C_type_%7C-%7C1771909663492%7C1771909663492%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C57%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%5Ep67%5Ep108%7C_location_%7C-%7C1771909663493%7C1771909663493%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C58%7CReferenceError%3A%20valid%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLInputE"
		"lement.onkeypress%20%28http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%3A67%3A108%29%7C_stack_%7C-%7C1771909663494%7C1771909663494%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C59%7C30995%7C_ts_%7C-%7C1771909663495%7C1771909663495%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C60%7CKD%5Eppassword%7C_useraction_%7C-%7C1771909663496%7C1771909663496%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C61%7C1%7C_source_%7C-%7C1771909663496%7C1771909663496%7Cdn%7C-1%7Ctvtrg%7C1%7Ctvm%7Ci1%5"
		"Esk0%5Esh0$rId=RID_1318254503$rpId=1473435764$domR=1771909632597$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1771909632440$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109632496_230$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$time=1771909663498", 
		LAST);

	web_custom_request("rb_bf18472vnr_28", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=3258133292&co=snappy&st=1771909663731&ss=0&qc=3214398300&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xAB\\\\D{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909661726,\"duration\":0,\"dt.rum.schem\\x1D\\xAFP\"0.23.0\",\"error.sourc\\x01\\x92\\x10excep\\x05>T,\"characteristics.has_\\x05/\\x14\":trueZ!\\x00\\x15A\r%\\x15\\x11\\x18.messag\\x01f\\xB0Uncaught ReferenceError: valid is not defined\\x01\\xA5\\x11U\\x0C.typ\\x01A68\\x002\"\\x00 stack_tra\\x05\\xD06)"
		"\\x00Va\\x00\\xF0X\\\\n    at HTMLInputElement.onkeypress (http://192.168.1.2:7001/LoanIQ/login.jsp:67:108)\",\"\\x19\\xB70file.full\":\"h\\x9AI\\x002\\xD6\\x008line_number\":67.\\\\\\x00\\x14column\\x15\\x1D\\x10108,\"-\\xF7\\x18applica!\\xD0\\x00.EJ<ea7c4b59f27d43eb]w\\x10frame:y\\x02@107551c0449aeb4f\"\\x19Z\\x00g! U\\xFF`\"1.331.17.20260218-130851>2\\x00-\\xC0$javascript\\x19!\\x00bm\\x00\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t"
		"0\\x80MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-A\\xED-\\x17\\x00im^)\\x14\\x001i?\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,\\x95\\x07\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03@\":1.25,\"page.url.\\xC6\\x90\\x02\\x05;1>\\x00_%\\xA8J#\\x02\\x05&,detected_nama\\xB2B(\\x03\\x00\"\r\\x8A\\x0Ctitl\\x01!,Welcome To LeS\\x18\",\"view:p\\x008b64d703b5052d65"
		"!\\x91\\x05&\\xD6\\xD1\\x00\\x05;\\x86\\xAB\\x00\\x04},"
		"\\xFE\\xBF\\x05\\x8E\\xBF\\x05\\x08201a\\xBB\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xE6\\xBF\\x05\\x009\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\"
		"xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xF2\\xBF\\x05\\x08294\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xEE="
		"\\x11\\x08749\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xFE\\xBF\\x05\\xEE\\xBF\\x05\\x0492\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE"
		"~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xFE~\\x0B\\xEE~\\x0B\\x08326\\x0E\\xD6\\x1E\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xFE\\xBB\\x1C\\xDE\\xBB\\x1C\\x08348\\xFE="
		"\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11\\xFE=\\x11Z=\\x11\\x08]}}", 
		LAST);

	web_reg_find("Text=LoanIQ: Customerhome", 
		LAST);

	lr_think_time(4);

	web_submit_data("Login", 
		"Action=http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=accno", "Value=IQ14285", ENDITEM, 
		"Name=password", "Value=Akon@186", ENDITEM, 
		"Name=x", "Value=51", ENDITEM, 
		"Name=y", "Value=12", ENDITEM, 
		LAST);

	web_custom_request("rb_bf18472vnr_29", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=507825065&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C62%7C_event_%7C1771909668611%7C_viewend_%7Cinp%7C0%7Csvn%7C%2FLoanIQ%2Flogin.jsp%7Csvt%7C1771909632440%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C63%7C_event_%7C1771909668611%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$rId=RID_1318254503$rpId=1473435764$domR=1771909632597$tvn=%2FLoanIQ%2Flogin.jsp$tvt=1771909632440$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url="
		"http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$title=Welcome%20To%20LoanIQ$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109632496_230$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp$time=1771909668612", 
		LAST);

	web_custom_request("rb_bf18472vnr_30", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=2335907150&co=snappy&st=1771909668613&ss=1&qc=1426960610&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/login.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x9A(D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"view.fo\\x11?,_time\":30017\r\\x1D\\x0Cback\t\\\\\r\\x1Dp6155,\"error.http_4xx_count\":02\\x19\\x00\\x005J\\x19\\x00 exception\\x113\\x008\\x113 csp_viola.\\x1E\\x00\\x15Q\\x1Cdropped_B@\\x00\\x15\"\\x05\\x8C\\x10other\\x11[\\x180,\"cls.!&4us\":\"reported\"\t\\x18)a:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x0892,"
		"\\x05\\x0F\\x1Cloading_\\x01R!x,dom_content_\\x01\\x1C\\x05[\\x018\\x01!>s\\x00\\x08fidb\\x18\\x00\\x01=.Y\\x00$complete\",\\x117\\x04rt-\\x7F\\x1C27181.29\\x05\\x01\\x1052316\t$\\x08dur%:\\x0C\":24\t\\x12\\x04na!\\xCC,\"pointerdown\rO\\x18process\rq\\x08rt\"\\x05U\\x087.5\t8\\x1D\\x1F\\x08end\\x11\\x1D\\x0460\\x05\\x01\\x0C2384!\\x0EHid.cancelable\":true\t>8ui_element.tag_\r\\x85\\x10INPUT\r\\x7F\\x1D\"Lxpath\":[\"html\",\"body\\x01&\\x18orm\",\"t\\x01\\\\\\x08[2]\\x01\\x0B\r\\x1A\\x04tr\\x01\r"
		"!\\xC2\\x05\\x1D\\x01\r6\\x1A\\x00\t/$input\"],\"f6\\xC4\\x01\\x00pBj\\x01V\\xC3\\x01\\x00pR\\xAA\\x01\\x04in\\x1D\\x184below_threshol\\x01\\x92\\x04lc\\x1D\\x1F]l\\x01\\x186l\\x02\\x041,\\x05\\x15\\x04st9\\xD7Ac\\x01)A\n-\\xEA\\x000\r&\\x1Cize\":204\r6\\x14render\r$\\x117=T=v\\x08TD\"\tD\\x1D\\x1F\\xFEs\\x012s\\x01\\x04[4%\\x9D\\x00d!k long_task\\x01\\xD8I\\xFE\\x0Cnot_=\t\\x0Cttfb\\x19\\x1D>\\x19\\x00mz\\x0C41.3E\\xDC 97615814,\t8\\x0CwaitA\\xB2Y\\xE8\\x0415:*\\x00\\x002\r+\\x10cache\\x1D)"
		"\\x000\r\\x18\\x08dnsJ\\x16\\x00\\x14connec\\x85u\\x19\\\\\\x113\\x18request\\x1D\\x1A\\x1826,\"perA\\xA3a\\x00\\x14.activez\\x81\\x17\\x00r\\xA9\\x05\\x00v\\xA1W\\x00s\\x01<(nce_number\"!\\xF7\\x05\\x19\\x08pre2\\xC5\\x01\\x81\\xA8Hharacteristics.has_\\x01,\\x1C_summaryqb\\x10navig\\x05n\\xA1\\xE0\\x01r\\x85\\x89\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\x81\\xA6\\x08harA\\x9F.\\xB5\\x00\\xA1\\xE7\\\\_origin\":1771909632439,\".\\x96\\x02:\\x1B\\x009 \\x0C3617\\xC1\\xAC(t.rum.schem\\xDD\\xC6$\""
		"0.23.0\",\"\r!\\x14applic\t\\xB8Xid\":\"ea7c4b59f27d43eb\",\\xD5\\xB8\\x10frame:\\xBA\\x06<107551c0449aeb4f\\x1DZ\\x00g\\x81j\\xF5@`\"1.331.17.20260218-130851>2\\x00-\\x1C$javascript\\x19!\\x00b\\xEDA\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"5\\x17\\x00i\\xED\\x9F)\\x14-m\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orientaA\\xC1<\":\"landscape-priE:\\x15)$screen.wid\\xA1t\\x0C1536>\\x1B\\x00(height\""
		":8649\\x90\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t\\xA6\\x1C_pixel_rA\\x03\\\\\":1.25,\"page.url.full\":\"\\xE1\\xC1\\x90://192.168.1.2:7001/LoanIQ/login.jsp\"\r;1>\\x00_%\\xA8J#\\x02\\x05a\\x1Cdetected\\xD1\\x8AbO\\x00\\x08tit\\xC1\\xCA,\"Welcome To \tz\\x00\"\\x1A\n\t6p\\x008b64d703b5052d65!\\x91\\x00va\\xF6\\x00u\\xD2\\xD1\\x00\\x05;\\x86\\xAB\\x00\\x04},\\xFE\\x00\n:\\x00\n%#&?\n\\xCDV\\x003\\x16\\x00\n\\x05\\x1D\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n"
		"\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xFE\\x00\n\\xD2\\x00\nN\\xCF\t\\xA1N\\x00_:\\xCF\t\\x01\\x14N\\x0F\n\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\xFE\\xE7\t\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_31", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=1635961967&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7Clogin%7CC%7C-%7C109632496_230%7C1771909668015%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%7C%7C%7C%2FLoanIQ%2Flogin.jsp%7C1771909632440%2C1%7C1%7C_load_%7C_load_%7C-%7C1771909668035%7C1771909669521%7Cdn%7C71%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Flogin.jsp%2C2%7C3%7C_event_%7C1771909668035%7C_vc_%7CV%7C1484%5Epc%7CVCD%7C1033%7CVCDS%7C1%7CVCS%7C1537%7CVCO%7C2552%7CVCI%7C0%7CTS%7C0%7CVE%7C1148%5Ep118"
		"%5Ep2100%5Eps%5Estd%3Anth-of-type%286%29%3Ediv%3Afirst-child%3Ea%3Afirst-child%3Eimg%3Afirst-child%7CS%7C602%2C2%7C4%7C_event_%7C1771909668035%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Cdiv.welcome%7ClcpS%7C7434%7ClcpT%7C612%7ClcpU%7C-%7ClcpLT%7C0%7Cfcp%7C612%7Cfp%7C612%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1771909669521%7C1771909669521%7Cdn%7C71%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1771909668035%7C_view_%7Csvn%7C%2FLoanIQ%2Flogin.jsp%7Csvt%7"
		"C1771909632440%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=192.168.1.2,$rId=RID_-1968611426$rpId=2000413821$domR=1771909669520$tvn=%2FLoanIQ%2FLogin$tvt=1771909668035$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1771909668035e19f19g19h19i19k21l573m574o599p599q600r1485s1486t1486u3927v3627w3627X200V1$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3D5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288"
		"!1771909583261$title=LoanIQ%3A%20Customerhome$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109668621_11$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3D5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261$time=1771909670608", 
		LAST);

	web_custom_request("rb_bf18472vnr_32", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=1179562846&co=snappy&st=1771909671535&ss=0&qc=711228847&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xCA\\xA5\\x01D{\"data_version\":2,\\x05\\x11\\xF4T\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909668615,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.2:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10331260218130851.js\",\"network.protocol.name\":\"\\x01p\\x08\",\".\\xCB\\x00(time_origin.\\x00\\x01@034,\""
		"dt.rum.schem=\\xA2\\x18\"0.23.0:I\\x00\\x00s=H\\x14581.20\\x05\\x01\\x144768376t\\x00$next_hop_p\r\\xA0\\x08\":\"\\x01\\x9B\\x0C/1.1:V\\x004domain_lookup_\\x05d\\x00\"~_\\x0064\\x00\\x08end\\x822\\x00\\x18connect\\x9A`\\x00\\x11.\\x8EZ\\x00\\x18secure_\r3\\x08ion\\x11d\\x0006\\x13\\x01\\x04reE$\\x11\\x1EzA\\x01\\x1Cresponse\\xBE/\\x00\\x8E\\xB2\\x00\\x10redir=\rB\\xA9\\x00\r\\x1F\\x05L:\\x1D\\x00\\x14worker\\x11\\x96:\\x1D\\x00\\x10fetch\\x11\\x1CJ\\xE1\\x00A\\x02\\x15\\xDAAO,tus_code\":20"
		":L\\x008render_blocking\\x01V\\x14tus\":\"\\x11\\x12:G\\x024first_interim_>?\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\">-\\x00\\x1Cdelivery\\x91\n\\x10cache:~\\x00\\x14transf!\\x19\\x08izeBB\\x00\\x04en\\x01\\xE5\\x18d_body_\t\"\\x141268686\"\\x02\\x04deB'\\x00 345597,\"rI=(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracE\\x99\\x00te\\x8E\\x19-\\x0Cset\"V\\xC9\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85\\xD6\\x8D,\\x18applicaA\\xEA\\x00.\\xA5r"
		"<ea7c4b59f27d43eb\\xBD\\x9F\\x10frame:\\xA1\\x05@d84d49c8e9e700aa\"\\x95\\x86\\xA5\\x08\\x00.\\xD5'4\"1.331.17.2026\\xA1\\x01\\x00-\\xA9\\x02>2\\x00\\x08typ\\xC1!\\x1Cjavascri\\xA5\\xA6\r\\xAD\\x00b\\xCD(\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x19Y\t0\\x80MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-\\xA1\"\rj\\x00i\\xCD\\x86)\\x14\\x001\\xC9g\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864"
		",\\xF5/\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03<\":1.25,\"page.url\\x9A\\xF7\\x06\\xF0RLogin?JSESSIONID=5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!11q\\x08326A!\\x05\\x911\\x94\\x00_%\\xFEJy\\x02\\x05&(detected_na\\xE5C\\x00/\\xED\\x9C\\x05\\xA5a\\xE8\\x01\\xDC\\x0CtitlAe\t\\x1C0: Customerhomas\\x0Cview:o\\x008f899c2865e514b9!\\xE6\\x05&\\xFE&\\x01\\xFE&\\x01.&\\x01\\x05\\x91v\\x00\\x01\\x04},\\xFE\\x8E\t:\\x8E\t\\x00c:@\t"
		"Dis_self_monitoring\\x91qJ*\\x00\\xA5\\xE0\\x08nal\\x11#\\x12/\\x08\\x81\\xA9\\x00e.\\xDB\\x08\\x08629:\\xDB\tm\\xA5f\\xE8\\x08\\x11!\\x08fm_*\\x87\n\\x0E;\t\\x10stamp6^\\x00\\x085,\"\\xA1\\xAA\\xC5\\xB6 0,\"messagA\\x1Ea\\xF7 507651721%;\\x8AB\\x00\\x003.B\\x00@[\\\\\"OneAgent JavaS\\x85\\xD10 tag\\\\\",[]]\"}]"
		"\\xB90\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFE\\x8A\\x05\\xFA\\x8A\\x05Z=\\x05\\x0415.=\\x05\\x10779.6\\x12\\xE8\r\\x1802384196\\xB4\nB(\\x0F\\x08imgZ\\\\\n\\x1A\\x97\n\\xB1\\xBB\\xA6\\x08\\x07Timages/Accounts.JPG\",\"\\xFE\\x02\\x0F\\xFE\\x02\\x0F\\x0E\\x02\\x0F\\x003)"
		"\\x19\\x147152566\\x19\\x01\\xFE\\x02\\x0F\\x0E\\x02\\x0Fj_\\x00Z\\x02\\x0Fj2\\x00\\x1A\\xA1\\x0E\\x1E\\xE5\\x0C\\x0E\\x9F\r\\x009\t\\xBF\\x149536746\\xBF\\x00\\x11.\\x12\\x04\\x0E\\x10582.4f,\\x00\\xE2\\x02\\x0F\\x042.\\x0E;\n\\x04er\"v\\x11>\\xB7\r\\x0C1360nz\\x00\\x150\\x05\\xA7\\x05.j\\xD4\\x00\\xFE\\xF8\\x0E\\xA6\\xF8\\x0E:\\x87\\x01\\xFE\\xF8\\x0E\\x12\\xF8\\x0E\\x0Cnon-\\xFE\\xFC\\x0E\\x86\\xFC\\x0E%Dj\\xEC\\x01>\r\\x0F\\x0E \\x0B=\\xC1:\\x08\\x0F\\x0C1361:{\\x0FN\\x0C\\x0F\\x0433>&"
		"\\x00J\\x0B\\x0F\r&\\x8DFV\n\\x0F\\x1Cinvalid\"&1\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0F\\xFE\\x04\\x0FV\\x04\\x0F\\x92z\t\\x08807>I\\x06.k\\x05\\xFEz\t\\xAAz\t\\x0E\\xF5\\x10\\xFEw\t\\xFEw\t.w\t:6\\x08\\xFEk\t\\x0Ek\t:S\\x00Z_\t:&\\x00\\x1E%\t"
		"%\\xCF\\x0E\\x83\\x18\\x002n\\x7F\\x08\\x11.\\x12\\xAC\\x08\\x08583n\\xDD\\x01\\xE2S\t\\x003n\\xBD\\x07\"/\t\r\\xB1\\x0C1388>\\xD4\\x00\\x15$\\x05\\xA7\\x05\"\\x008\\x16\\xFB\tN\\xE6\n\\xFES\t\\xA6S\t\\x045,\\xFEG\t\\xFEG\t\\xB6G\tFZ\\x01\\xBA;\t\\x08063\\x8A;\t\\x0403>&\\x00N;\t\t&\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xFE;\t\\xAA;\t\\x0E\\xD9\\x1A\\xFE-\t\\xDA-\t"
		"\\x18Billpay\\xFE\\xA6\\x12\\xFE\\xA6\\x12*\\xA6\\x12:\\xB6\\x08\\xFE/\t\\xFE/\t\"/\t\\x0497>\\x9B\\x006#\t\\x0497nO\t\\xDE#\t\\x009:v\\x1F\"\\xF1\\x08\\x1E\\x15\t\\x0440:\\xE4\\x14\\x15\"\\x16\\x13\t\\x08409>\\xB8\\x00\\xFE\\x07\t\\xFE\\x07\t\\xFE\\x07\t\\xFE\\x07\tb\\x07\tBL\\x01\\xBE\\x05\t\\x0474:\\xAF\\x01N@\\x12\\x0404>&\\x00R\\x05\t\\x05&\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05"
		"\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xFE\\x05\t\\xAA\\x05\t>\\x93\\x1A\\xFE2\\x12\\xAA2\\x12\\x0Ccard\\xFE2\\x12\\xFE2\\x12\\xFE2\\x12\\xFE2\\x12\\x8E2\\x12\\x0498n\\x06\\x12:\\x0F\t\\x008\\xFE\\x0F\tR\\x0F\t^\\xED\\x08\"\\x0F\t\\x0C37.1\\x16\\x02\\x12N\\x01\\x1E>\\x1D\t\\x003B\\xD5\t\\xFE\\x1D\t\\xFE\\x1D\t\\xFE\\x1D\t\\xFE\\x1D\tf\\x1D\tvZ\\x01\\xBA+\t\\x0446\\x0EJ$.\\xF5\\x0CN+\t\\x0443>&\\x00N+\t\t&\\xFE+\t\\xFE+\t\\xFE+\t\\xFE+\t\\xFE+\t\\xFE+\t\\xFE+\t\\xFE+\t\\xFE"
		"+\t\\xFE+\t\\xFE+\t\\xFE+\t\\xFE+\t\\xFE+\t\\xFE+\t\\xFE+\t\\xFE+\t\\xFE+\t\\xFE+\t\\xAA+\t\\x0475>\\xD3\\x0F\\xFE-\t\\xAA-\t\\x10Demat\\xFE0\\x12\\xFE0\\x12*0\\x12j\\xEF%\\xFE<\\x12\\x0E<\\x12j_\\x00Zw\\x1Bj2\\x00\\x1E#\t\\x1E\\xAE\\x08\\x0430:0\\x10\\x11!\\x16\\xBC\\x11\\x08308n!\\x1B\\xDAT\\x12~W\\x00\"$\t\\x11\\xA6\\x10456.7\\x16T\tN>5\\x150\t\\xB5\\x0445z\\x82\t\\x1A\\xB03\r^:6\\x1A\"\\x7F\t\\x05M:\\x1D\\x00\\xB6\\xCF3:\\x88\\x01\\xFE\\xD7$\\xFE\\xD7$\\xAE\\xD7$zr\\x01\\xBAl\t\\x08017"
		":7\\x0BJl\t\\x0498>%\\x00Jk\t\t%\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xFEj\t\\xA6j\t\\x08902>G\\x06.\\xB3\\x0E\\xFEv\t\\xAAv\t\\x10logou\\xFEw\t\\xFEw\t\\xFEw\t\\xFEw\t\\xFEw\t\"w\tF\\xF7\\x11:y\t\\x003\\xFE\\xCD\\x1BN\\xCD\\x1B\\x001zW\\x00\"I\t\\x1A\\x1B\t\\x101483.r\\xCF$\\x1Av=\\x12,\t\\x0C1484n\\xE5>\"Z\t\r^:\\\\\t\\x15\\x1F\\x05M:\\x1D\\x00\\xFEy\t\\xFEy\t\\xFEy\t\\xA6y\tvr\\x01\\xBAy"
		"\t\\x0C11136\\xA90Jy\t\\x08108>&\\x00Jz\t\r&\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\t\\xFE{\tj{\t\\x000\\x12\\xE2E\"\\xE2F\\x0C1486n\\xCA\\x19B|\t\\x10navig\\x0E\\xE6?\\x0E\\x06?>\\x8D=\\x04ha\\xEA\\xF7F\\x12[?\\xFE\\x00@r\\x00@\\xFE\\x1E8\\xFE\\x1E8:\\xEF\\x07\\xFE8\\x13>w9J)\\x13>#\\x00\\x1E\\x80\t\\x1A\\x9D\\x08^\\x1F\\x00\\x12\\x9D\\x08>\\x1D\\x00\\xDA\\x08\\x13\\x0420>F\\x15>\\x81\t"
		"\\x0457f\\xF47\\x05\\x8A\\x08573v\\x1A\\x13\\xFE\\xEC\\x12\\x8E\\xEC\\x12!\\x0F\\xFE\\xDD\\x12\\xFE\\xDD\\x12\\xAA\\xDD\\x12JU\\x01\\xB6W\t\\x08392:\\xC0IJV\t\\x0436>%\\x00JU\t\t%\\xFET\t6T\t\\x12\\x80C\\x16\\x93F\\xAA=C\\x00l\\x0EcD\\x08.js\\x0E\\x0EKN\\xBC\\x04\\x0E\\xEAF\\x99\\xE1\\x0ECB\\x04in&\\xECFN2\\x00\\x19.\\x1E\\xC3<.\\xBA\\x0E\\x1A\\x85F\r%\\x0E\\x14D.\\x1E\\x00\\x14unload\\x16[Bq\\x92:#\\x042#\\x00e\\x0C:!\\x00\\x08dom\\x16\\x00C\\x1Cactive\":\\x0E> :\\xDC)"
		"\\x01$\\x1Ccontent_\\x01r\\x00e:t\\x00\\x013\\x009\\x16y\\x16N\\xF6;b?\\x00\\x05\\x90\\x006\\x0E\\xEDB.\\xD6\\x00\t/\\x10mplet\\x0E\\x80C\\x08485n\\xCE \\x01\\x906\\x02\\x01~\\x92\\x06\\x1D2\\x05\\x81~0\\x00\"r\r\\x12)>\\x12\\x87I-\\x90\\x08ion1\\xA2\\x08har\\x0E!:.\\x19\\x00\\x04ab!\\x94\\x01\\xC4\\x14\"exist\\x0E\\x84D\\x00,\\x16\\x1DE\\x10seque\\x0E]N number\""
		":1\\xFE\\x7FC\\xFE\\x7FC\\xFE\\x7FC\\xFE\\x7FC\\xFE\\x7FC\\xFE\\x7FC\\xFE\\x7FC\\xFE\\x7FC\\xFE\\x7FC\\xFE\\x7FC\\xFE\\x7FC\\xFE\\x7FC\\xFE\\x7FC\\xFE\\x7FC\\xFE\\x7FC\\xE2\\x7FC\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_33", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=796581055&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2FLogin$tvt=1771909668035$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$rt="
		"1-1771909668035%3Bhttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FAccounts.JPG%7Cb581e0f0g0h1i1k1l779m780u13610v13310w13310X200E1F2700O90P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FLoans.JPG%7Cb582e0f0g0h1i2k2l807m807u10630v10330w10330X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FBillpay.JPG%7Cb582e0f0g0h16i16k17l828m828u10748v10448w10448X200E1F2250O75P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fcards.JPG%"
		"7Cb582e0f0g0h17i17k18l856m856u14603v14303w14303X200E1F3000O100P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FDemat.JPG%7Cb582e0f0g0h726i727k727l875m876u10179v9879w9879X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Flogout.JPG%7Cb582e0f0g0h756i756k756l902m903u11113v10813w10813X200E2F2100O70P30Q652R127I7V1$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3D5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288"
		"!1771909583261$title=LoanIQ%3A%20Customerhome$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109668621_11$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3D5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261$time=1771909672649", 
		LAST);

	lr_end_transaction("AB_DDRequest_T03_UserLogin",LR_AUTO);

	lr_think_time(9);

	web_custom_request("rb_bf18472vnr_34", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=1&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=4238988656&co=snappy&st=1771909682240&ss=1&qc=51637164&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xB4\nD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"background\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909682237,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(68034,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01Dd84d49c8e9e700aa\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x001)W\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\xF0\\x99\":1.25,\""
		"page.url.full\":\"http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261\",\"p\\x01\\x911\\x94\\x00_%\\xFEJy\\x02\\x05\\xB7,detected_namAH2\\xA5\\x00\\x00\"\rK\\x0Ctitl\\x01\\x1D\\x00L\\x05\\xC1P: Customerhome\",\"view:o\\x008f899c2865e514b9!\\xE6\\x05&\\xFE&\\x01\\xFE&\\x01.&\\x01\\x05\\x91v\\x00\\x01\\x0C}]}}", 
		LAST);

	lr_think_time(7);

	web_custom_request("rb_bf18472vnr_35", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=3780718452&co=snappy&st=1771909689525&ss=0&qc=1573498334&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xB4\nD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909687516,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(68034,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01Dd84d49c8e9e700aa\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x001)W\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\xF0\\x99\":1.25,\""
		"page.url.full\":\"http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261\",\"p\\x01\\x911\\x94\\x00_%\\xFEJy\\x02\\x05\\xB7,detected_namAH2\\xA5\\x00\\x00\"\rK\\x0Ctitl\\x01\\x1D\\x00L\\x05\\xC1P: Customerhome\",\"view:o\\x008f899c2865e514b9!\\xE6\\x05&\\xFE&\\x01\\xFE&\\x01.&\\x01\\x05\\x91v\\x00\\x01\\x0C}]}}", 
		LAST);

	lr_start_transaction("AB_DDRequest_T04_SelectAccount");

	web_reg_find("Text=LoanIQ: Accounts", 
		LAST);

	lr_think_time(3);

	web_url("accounts.jsp", 
		"URL=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf18472vnr_36", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=601244177&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1771909692957%7C_viewend_%7Cinp%7C0%7Csvn%7C%2FLoanIQ%2FLogin%7Csvt%7C1771909668035%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C7%7C_event_%7C1771909692957%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3D5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb...$rId=RID_-1968611426$rpId=2000413821$domR=1771909669520$tvn=%2FLoanIQ%2FLogin$tvt=1771909668035$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url"
		"=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3D5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261$title=LoanIQ%3A%20Customerhome$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109668621_11$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3D5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261$time=1771909692959", 
		LAST);

	web_custom_request("rb_bf18472vnr_37", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=1247591119&co=snappy&st=1771909692960&ss=1&qc=2908872472&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1771909583261", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x98*D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"view.fo\\x11?,_time\":19645\r\\x1D\\x0Cback\t\\\\\r\\x1Dp5279,\"error.http_4xx_count\":02\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!&8us\":\"reported\",\\x05\\x18)a:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x0C612,\\x05\\x10\\x1Cloading_\\x01S!y,"
		"dom_content_\\x01\\x1C\\x05\\\\\\x019\\x01!>t\\x00\\x08fidb\\x18\\x00\\x01=.Y\\x00$complete\",\\x117\\x04rt-\\x80\\x1024783\t\\x17\\x08dur%.\\x08\":3\\x01\\xA1\\x10id.na!\\xC0,\"pointerdown\rB\\x18process\rd\\x08rt\"\\x05H\\x0C4.60\\x05\\x01\\x0C2384\rC\\x1D*\\x08end\\x11(\\x007\\x05'\\x14047684\t}<cancelable\":true\t\\x168ui_element.tag_\r\\x90\\x08IMG\r\\x88\\x1D \\\\xpath\":[\"html\",\"body\",\"t\\x05S\\x08,\"t\\x11\\x10\\x0Cr[3]\\x01\\x10!\\xB8F\\x1D\\x00\\x11\\x1A\\x88div\",\"a\",\"img[@id="
		"\\\\\"image1\\\\\"]\"],\"fp6\\xCF\\x01\\x00pBu\\x01V\\xCE\\x01\\x00pR\\xB5\\x01\\x04in\\x1D\\x184below_threshol\\x01\\xA8\\x04lc\\x1D\\x1F]x\\x01\\x186x\\x02\\x041,\\x05\\x15\\x04st9\\xE2Eo\\x01*A\\x16-\\xF6\\x000\r' ize\":7434\t\\x10\\x14render\r$\\x158=e=\\x85\\x0CDIV\"\t6\\x1D \\xA6\\x85\\x01\\x0025\\x85!k,],\"long_task\\x01\\xBDI\\xEE\\x0Cnot_\\x1D\\xEE\\x0Cttfb\\x19\\x1D>\\x19\\x00mk\\x14572.5,\t,\\x0CwaitA\\xA3Y\\xD9\\x0419\r\\x1B\\x10cache\\x1D\\x19\\x000\r"
		"\\x18\\x08dnsJ\\x16\\x00\\x14connec\\x85J\\x19L\\x113\\x18request\\x1D\\x1A\\x08553\\x01\\x84\\x18performA\\xD9\\x14.active^a\\xEE\\x00r\\x89\\xDD\\x00v\\xA1/\\x00s\\x01?(nce_number\"!\\xC3\\x05\\x19\\x08pre2\\x90\\x01X0,\"characteristics.has_\\x01,\\x1C_summaryq;\\x10navig\\x05n\\xA1\\xB8\\x01r\\x85`\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\x81}\\x08harAk.\\xB5\\x00\\xA1\\xBFL_origin\":17719096680A/.b\\x02:\\x1B\\x009#H24924,\"dt.rum.schem\\xDD\\x9E\\x1C\"0.23.0\"\\x15!\\x14applic\t\\xB8Xid\":\""
		"ea7c4b59f27d43eb\",\\xD5\\x90\\x10frame:\\x92\\x068d84d49c8e9e700aa\\xBE\r{\\x04ag\\x81C\\xF5\\x18`\"1.331.17.20260218-130851\\x1D\\x8C\\x052-\\x1C$javascript\\x19!\\x00b\\xED\\x19\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"5\\x17\\x00i\\xEDw)\\x14-m\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orientaA\\xC4<\":\"landscape-priE:\\x15)$screen.wid\\xA1O\\x0C1536>\\x1B\\x00(height\""
		":8649\\x90\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t\\xA6\\x1C_pixel_rA\\x03\\\\\":1.25,\"page.url.full\":\"\\xE1\\x99\\xF0l://192.168.1.2:7001/LoanIQ/Login?JSESSIONID=5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!5q\\x08326A!\\x05\\x911\\x94\\x00_%\\xFEJy\\x02\\x05&\\x1Cdetected\\xD1\\xB92\\xA5\\x00\\x00\"\r\\xDC\\x08tit\\xC1\\xF5\\x00\"\t\\xC18: Customerhome\"\\x1A7\t6o\\x008f899c2865e514b9!\\xE6\\x00v\\x81K\\x00u\\xFE&\\x01\\xFE&\\x01=&"
		"\\x05\\x91v\\x00\\x01\\x04},\\xFE\\x7F\n:\\x7F\n%t&\\xBE\n\\xCD\\xC8\\x1A\\x7F\n\\x05\\x1D\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n\\xFE\\x7F\n2\\x7F\nNN\n\\xA1&\\x00_:N\n\\x01\\x14N\\x8E\n\\xFEf\n\\xFEf\n\\xFEf\n\\xFEf\n\\xFEf\n\\xFEf\n\\xFEf\n\\xFEf\n\\xFEf\n\\xFEf\n\\xFEf\n\\xFEf\n\\xFEf\n\\xFEf\n\\xFEf\n"
		"\\xFEf\n\\xFEf\n\\xFEf\n\\x9Af\n\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_38", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=1718674803&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7Cimage1%7CC%7C-%7C109668621_11%7C1771909692878%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3D5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS%21-1230384288%211771909583261%7C%7C%7C%2FLoanIQ%2FLogin%7C1771909668035%2C1%7C1%7C_load_%7C_load_%7C-%7C1771909692880%7C1771909692993%7Cdn%7C80%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FLogin%3FJSESSIONID%3D5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6s"
		"Pmc2mb-sS%21-1230384288%211771909583261%2C2%7C3%7C_event_%7C1771909692880%7C_vc_%7CV%7C102%5Epc%7CVCD%7C1027%7CVCDS%7C2%7CVCS%7C171%7CVCO%7C1183%7CVCI%7C0%7CTS%7C1%7CVE%7C421%5Ep422%5Ep6930%5Eps%5Esdiv.conditions%3Efont%3Afirst-child%7CS%7C101%2C2%7C4%7C_event_%7C1771909692880%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1771909692993%7C1771909692993%7Cdn%7C80%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1"
		"771909692880%7C_view_%7Csvn%7C%2FLoanIQ%2FLogin%7Csvt%7C1771909668035%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=192.168.1.2,$rId=RID_-1661599622$rpId=-1767828934$domR=1771909692992$tvn=%2FLoanIQ%2Faccounts.jsp$tvt=1771909692880$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1771909692880e10f10g10h10i10k11l73m73o102p102q104r112s113t113u4642v4342w4342X200V1$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Faccounts.jsp$title="
		"LoanIQ%3A%20Accounts$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109692968_290$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Faccounts.jsp$time=1771909694082", 
		LAST);

	web_custom_request("rb_bf18472vnr_39", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=253141204&co=snappy&st=1771909695006&ss=0&qc=2171126720&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xFB\\x9B\\x01D{\"data_version\":2,\\x05\\x11\\xF4T\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909692964,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.2:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10331260218130851.js\",\"network.protocol.name\":\"\\x01p\\x08\",\".\\xCB\\x00(time_origin.\\x00\\x01@880,\""
		"dt.rum.schem=\\xA2\\x18\"0.23.0:I\\x00\\x00s=H\\x0C84.56g\\x00$next_hop_p\r\\x93\\x08\":\"\\x01\\x8E\\x0C/1.1:I\\x004domain_lookup_\\x05W\\x00\"JR\\x006'\\x00\\x08endN%\\x00\\x18connectfF\\x00\\x11!Z@\\x00\\x18secure_\r&\\x08ion\\x11J\\x0006\\xDF\\x00\\x04re%\\xE3\\x11\\x1EF\\x00\\x01\\x1Cresponse\\x8A\"\\x00Z\\x8B\\x00\\x10redir\\x1D\\xCCB\\x82\\x00\r\\x1F\\x05?:\\x1D\\x00\\x14worker\\x11|:\\x1D\\x00\\x10fetch\\x11\\x1C\t\\xBA!\\x9A\\x15\\xB3!\\xDA,tus_code\":20:?"
		"\\x008render_blocking\\x01I\\x14tus\":\"\\x11\\x12:\\xDF\\x014first_interim_>\\x18\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\">-\\x00\\x1Cdeliveryq\\x95\\x10cache:~\\x00\\x14transf!\\x0C\\x08izeBB\\x00\\x04en\\x01\\xE5\\x18d_body_\t\"\\x141268686\\xEE\\x01\\x04deB'\\x00 345597,\"rI\t(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracEe\\x00te&\\x19-\\x0Cset\"VT\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85am\\xB7\\x18applicaA\\xB6\\x00.\\x85\\xFD"
		"<ea7c4b59f27d43eb\\xBD*\\x10frame:,\\x05@aed108b6724f544c\"\\x95\\x11\\x85\\x93\\x00.\\xB5\\xB24\"1.331.17.2026\\x81\\x8C\\x00-\\x89\\x8D>2\\x00\\x08typ\\xA1\\xAC\\x1Cjavascri\\xA51\r\\xAD\\x00b\\xAD\\xB3\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x19Y\t0\\x80MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-\\x81\\xAD\rj\\x00i\\xCD\\x11)\\x14\\x001\\xA9\\xF2\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r"
		"\\x1B\\x10heigh\\x81\\xE2\\x0864,\\xD5\\xBA\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\x10\":1.2\\xA1\\x94\\x18age.url\\x9A\\x82\\x06(accounts.js\\xC59\\x01>1A\\x00_%\\xABJ&\\x02\\x05&(detected_na\\xC5{\\x00/\\xCD\\xD4NR\\x00\\x0CtitlA\\x19\t#\\x08: A\rv\\x18\",\"view:r\\x00<78025b19a50ceddd\\x11&\\xE2\\xD6\\x00\\x05d\\x92\\xB0\\x00\\x04},\\xFE}\\x08\\xFE}\\x08N}\\x08\\x08imgZ&\\x04\\x8Da\\x91\\x19\\xA6\"\\x01\\x18images/1\\x89\\x18.JPG\",\""
		"\\xFEW\\x08\\xEEW\\x08\\x1AW\\x08\\x0460\\x05\\x01\\x1823841866\\x97\\x05\\xEEd\\x08\\x1Ad\\x08n_\\x00Vq\\x08n2\\x00\\x1A7\\x08\\xD1\\xAF\\x0484\\x92.\\x00\\xE5\\xC1z,\\x00\\xE6\\x98\\x08n\\xB0\\x00>\\x8D\\x07z\\x85\\x00\\x15/\\x8E\\xB2\\x00\\xFE\\xBF\\x08\\xA2\\xBF\\x08>\\xE1\\x00\\xFE\\xCC\\x08\\x12\\xCC\\x08\\x0Cnon-\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\xFE\\xD0\\x08\\x1A\\xD0\\x08\\x08331:e\tJ\\xCF\\x08\r&"
		"\\x8D@V\\xCE\\x08\\x14invali\\xA1\\x7F\\x11'\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08\\xFE\\xC8\\x08b\\xC8\\x08\\x0EY\n"
		"\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x082\\xC5\\x08\\x08033\\x8A\\xC5\\x08\t&"
		"\\x1E\\x9E\\x08R\\x93\\x11\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xAA\\xC5\\x08\\x18Billpay\\xFE\\x8C\\x11\\xFE\\x8C\\x11*\\x8C\\x11\\x009\\x05\\x01\\x182847443\\xFE\\x8C\\x11F\\x8C\\x11\\x05^V_\\x00Z\\x8C\\x11j2\\x00J\\x8C\\x11\\x8A.\\x00\"\\xDA\\x10j,"
		"\\x00\\xEA\\x8C\\x11jV\\x00\"]\\x11&\\x01\\x1B\\x92/\\x00\\x8E\\xB2\\x00\\xFE\\x8C\\x11\\xA6\\x8C\\x11:\\xE1\\x00\\xFE\\x8C\\x11\\xFE\\x8C\\x11\\xFE\\x8C\\x11\\xFE\\x8C\\x11>\\x8C\\x11\\x08044\\x86[\\x1A\r&"
		"\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\xFE\\xC7\\x08\\x1E\\xC7\\x08\\x0Ccard\\xFE\\x8C\\x11\\xFE\\x8C\\x11.\\x8C\\x11"
		":\\xA3\\x06.\\x1C#\\xFEQ\\x1A\\x0EQ\\x1Aj_\\x00\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\x1A\\xC5\\x08\\x08430:\\xFD\\x0BNQ\\x1A\t&"
		"\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\xFE\\xC5\\x08\\x1E\\xC5\\x08\\x10Demat\\xFE\\x8A\\x11\\xFE\\x8A\\x11&\\x8A\\x11\\x007\\x16f\\x08\\x1052316\\x0E+&\\xFE\\xC5\\x08:\\xC5\\x08n_\\x00V\\xC5\\x08n2\\x00F\\x8A\\x11\\x8E.\\x00\\x1E\\xD8\\x10n,"
		"\\x00\\xE6\\x8A\\x11nV\\x00J\\x8A\\x11\\x92/\\x00\\x8E\\xB2\\x00\\xFE\\x8A\\x11\\xA2\\x8A\\x11>\\xB2\\x00\\xFE\\x8A\\x11\\xFE\\x8A\\x11\\xFE\\x8A\\x11\\xFE\\x8A\\x11:\\x8A\\x11\\x0C98796\\xC1\\x14J\\xC4\\x08\t"
		"%\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\xFE\\xC3\\x08\\x1E\\xC3\\x08\\x10logou\\xFE\\xC4\\x08\\xFE\\xC4\\x08*\\xC4\\x08\\x008\\x16\\xC4\\x08\\x1876158146\\x8D\\x05\\xEE\\x89\\x11\\x1A\\x89\\x11n_\\x00V\\xC4\\x08n2\\x00F\\xC4\\x08\\x8E.\\x00\\x1E\\x12\\x08n,"
		"\\x00\\xE6\\xC4\\x08nV\\x00J\\xC4\\x08\\x92/\\x00\\x8E\\xB2\\x00\\xFE\\xC4\\x08\\xA2\\xC4\\x08>\\xB2\\x00\\xFE\\xC4\\x08\\xFE\\xC4\\x08\\xFE\\xC4\\x08\\xFE\\xC4\\x08:\\xC4\\x08\\x0C1081\\x8A\\x89\\x11\t&\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xFE\\xC6\\x08\\xA2\\xC6\\x08\\x00c:\\xD1<Dis_self_monitoring\\x1E^"
		"4J*\\x00\\x12\\xE69\\x08nal\\x11#\\x12\\xCC \\x0E\\xAF8\\x00e.l<\\x08977:l=\\x1A\\xAB7fy<\\x11!\\x08fm_*\\x18>\\x0E\\xCC<\\x10stamp6^\\x00\\x084,\"\\x0E\\xB09\\x12\\xBC: 0,\"messag\\x0Ep6\\x0E\\xFD7 507651721\\x12\\xDD5\\x8AB\\x00\\x003.B\\x00@[\\\\\"OneAgent JavaS\\x12\\xD780 tag\\\\\",[]]\"}]&69\\xFE\\x909\\xFE\\x909\\xFE\\x909\\xFE\\x909\\xFE\\x909\\xFE\\x909\\xFE\\x909\\xFE\\x909\\xFE\\x909\\xFE\\x909\\xFE\\x909\\xFE\\x909\\xFE\\x909\\xFE\\x909\\xE2\\x909\\x16\rA\"\rB\\x08112B\\x8C\n"
		".r\\x15B\\x1EB\\x10navig\\x0E\\x86;\\x00n\\xFE\\xA89>\\xA89:N;\\xFE\\xA19\\xFE\\xA19:\\x94-\\xFE\\xB7\r\\x0096\\xCD7\\x005>,%2)B\\x12\\xAB\\x0Cz2\\x00:\\xB7\r\\x9A.\\x00\\x8EZ\\x00\\xDA\\xB7\r\\x0C11.1\\x16\\xF8\\x0E\\x16F)\\x002:\\xD3:>\\xB8\r\\x0872.nR \\x15/\\x05\\xB3\\x0C73.2\t]R\\x19\\x18\\xFE\\xB8\r\\x96\\xB8\rJd\\x01\\xFE\\xB8\r\\xFE\\xB8\r\\xAA\\xB8\rzp\\x01>rBvmB\\x0C46426\\xD8\\x10JpB\\x0443>%\\x00J\\x8A\\x16\t%\\xFE\\xC4\r6\\xC4\r\\x12\\xB6?\\x16QB\\xAAK?\\xF0RLogin?JSESSIONID="
		"5PeOCpGdA0aYRyEZeT0xPmwmg6aRrFBK9aADvf28l6sPmc2mb-sS!-1230384288!1\\x1E\\x92A\\x08326\\x0EBB>W\n\\x08has\\x12\\xFEB\\xB9U\\x0EQ\n\\x04in&\\x00CN2\\x00\\x19.\\x1E\\x8C\n.\\xB2\\x05\\x1A\\x99B\r%\\x0E\\x9BC.\\x1E\\x00\\x14unload\\x16i\n\"\\x8F+\\x002r\\\\\\x0323\\x00e\\x8Dz1\\x00\\x08dom\\x16.\\x0B\\x10activ\\x0E\\x1F\\x0B\\x000:,\\x02\\x01\"\\x1Ccontent_\\x01\\x90\\x00e:\\x92\\x00\\x10102.3i\\xEFRD\\x13b@\\x00\\x05\\x9F\\x081036m\\x05:\\x89\\x04\t>\\x10mplet\\x01\\x9D\\x0411r.\\x00\\x01\\xA060\\x01"
		"~4\\x07\\x1D2\t\\x90zd\\x07\\x95\\xBD\\x12\\xA0B\\x12\\xC9E-\\xBE\\x08ion1\\xD0\\x08har\\x0E\\x9F<.\\x19\\x00\\x04ab!\\xC2\\x01\\xC4\\x14\"exist\\x0E\\xC0\\x0C\\x1AfB\\x00s\\x0E\\xBBE\\x0E*J number\":1\\xFE\\xBB\\x0B\\xFE\\xBB\\x0B\\xFE\\xBB\\x0B\\xFE\\xBB\\x0B\\xFE\\xBB\\x0B\\xFE\\xBB\\x0B\\xFE\\xBB\\x0B\\xFE\\xBB\\x0B\\xFE\\xBB\\x0B\\xFE\\xBB\\x0B\\xFE\\xBB\\x0B\\xFE\\xBB\\x0B\\xFE\\xBB\\x0Br\\xBB\\x0B\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_40", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=1737251411&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2Faccounts.jsp$tvt=1771909692880$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$rt="
		"1-1771909692880%3Bhttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FAccounts.JPG%7Cb85e0f0g0h0i0k0l0m0v13310w13310X200E1F2700O90P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FLoans.JPG%7Cb85e0f0g0h0i0k0l0m0v10330w10330X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FBillpay.JPG%7Cb85e0f0g0h0i0k0l0m0v10448w10448X200E1F2250O75P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fcards.JPG%7Cb85e0f0g0h0i0k0l0m0v14303w14303X20"
		"0E1F3000O100P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FDemat.JPG%7Cb85e0f0g0h0i0k0l0m0v9879w9879X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Flogout.JPG%7Cb85e0f0g0h0i0k0l0m0v10813w10813X200E1F2100O70P30Q652R127I7V1$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Faccounts.jsp$title=LoanIQ%3A%20Accounts$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109692968_290$v=10331260218130851$vID="
		"1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Faccounts.jsp$time=1771909696113", 
		LAST);

	lr_end_transaction("AB_DDRequest_T04_SelectAccount",LR_AUTO);

	lr_think_time(5);

	web_custom_request("rb_bf18472vnr_41", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=1&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=605888121&co=snappy&st=1771909702097&ss=1&qc=1722560475&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x98\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"background\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909702095,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\t\\x83\\x1069288\\x01v\\x08om_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01Daed108b6724f544c\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x001)W\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\xF0D\":1.25,\""
		"page.url.full\":\"http://192.168.1.2:7001/LoanIQ/accounts.jsp\",\t>1A\\x00_%\\xAB\\x00aF&\\x02\\x05d,detected_nam!\\xF5nR\\x00\\x0Ctitl\\x01$\\x00L\\x05u\\x0C: Ac\tv\\x18\",\"view:r\\x00<78025b19a50ceddd\\x11&\\xE2\\xD6\\x00\\x05d\\x92\\xB0\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(7);

	web_custom_request("rb_bf18472vnr_42", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=3847461517&co=snappy&st=1771909709359&ss=0&qc=2542721570&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x98\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9F\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909707355,\"duration\":0,\"dt.rum.schema_v\\x11\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\t\\x83\\x1069288\\x01v\\x08om_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01Daed108b6724f544c\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x001)W\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\xF0D\":1.25,\""
		"page.url.full\":\"http://192.168.1.2:7001/LoanIQ/accounts.jsp\",\t>1A\\x00_%\\xAB\\x00aF&\\x02\\x05d,detected_nam!\\xF5nR\\x00\\x0Ctitl\\x01$\\x00L\\x05u\\x0C: Ac\tv\\x18\",\"view:r\\x00<78025b19a50ceddd\\x11&\\xE2\\xD6\\x00\\x05d\\x92\\xB0\\x00\\x0C}]}}", 
		LAST);

	lr_start_transaction("AB_DDRequest_T05_SelectServiceRequests");

	web_reg_find("Text=LoanIQ: ServiceRequests", 
		LAST);

	lr_think_time(3);

	web_url("ServiceRequests.jsp", 
		"URL=http://192.168.1.2:7001/LoanIQ/ServiceRequests.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf18472vnr_43", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=148307794&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1771909712697%7C_wv_%7CAAI%7C1%7CfIS%7C19707%7CfID%7C2%2C1%7C7%7C_event_%7C1771909712750%7C_viewend_%7Cinp%7C0%7Csvn%7C%2FLoanIQ%2Faccounts.jsp%7Csvt%7C1771909692880%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1771909712750%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Faccounts.jsp$rId=RID_-1661599622$rpId=-1767828934$domR=1771909692992$tvn=%2FLoanIQ%2Faccounts.jsp$tvt=1771909692880$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh="
		"864$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Faccounts.jsp$title=LoanIQ%3A%20Accounts$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109692968_290$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Faccounts.jsp$time=1771909712751", 
		LAST);

	web_custom_request("rb_bf18472vnr_44", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=1360787241&co=snappy&st=1771909712753&ss=1&qc=1510083349&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/accounts.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x8C(D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"view.fo\\x11?,_time\":14610\r\\x1D\\x0Cback\t\\\\\r\\x1Dp5261,\"error.http_4xx_count\":02\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!&8us\":\"reported\",\\x05\\x18)a:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x0C136,\\x05\\x10\\x1Cloading_\\x01S!y "
		"complete\"\t\\x1F\\x01\\x17>j\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-v\\x1C19707.29\\x05\\x01\\x0C5231\\x01\\x92\\x14id.dur%1\\x10\":24,\\x05m\\x04na!\\xC3,\"pointerdown\\x01\\x9E$id.process\r\\xC0\\x08rt\"\\x05U\\x089.3\\x05T\\x14976158\tC\\x1D*\\x08end\\x11(\\x005\t\\x1D<cancelable\":true\t\\x168ui_element.tag_\r\\x85\\x00A\r{\\x1D\\x1E\\\\xpath\":[\"html\",\"body\",\"t\\x05Q\\x08,\"t\\x11\\x10\\x0Cr[5]\\x01\\x10!\\xAE\\x1Cblockquo%i2\r\\x00 a[3]\"],\"f"
		":\\xAC\\x01\\x00pr\\\\\\x01\\x00pR\\x92\\x01\\x04in\\x1D\\x184below_threshol\\x01\\x85\\x04lc\\x1D\\x1F]K\\x01\\x186K\\x02\\x041,\\x05\\x15\\x04st=\\xBFAB\\x01*!\\xF3-\\xD3\\x000\r'\\x04izes\\x08737\t\\x11\\x14render\r%\\x159=C\\x00t9a(BLOCKQUOTE\"\t=\\x1D'\\xFEj\\x01.j\\x01,],\"long_task\\x01\\xD9I\\xE7\\x0Cnot_=\n\\x0Cttfb\\x19\\x1D>\\x19\\x00mZ\\x0C72.6Iq\\x1C2847443,\t8\\x0CwaitA\\x9BY\\xD1\\x0C9.60\\x05\\x01\\x14238418A\\x9D\\x05b\\x10cache\\x1D(\\x000\r"
		"B\\x08dnsJ\\x16\\x00\\x14connec\\x85T\\x19[\\x113\\x18request\\x1D\\x1A\\x0C63.0\t\\x9F<0463257,\"performA\\xF7\\x14.activeq\\x81\\x04\\x00r\\x89\\xF3\\x00v\\xA1E<sequence_number\"A\\x06\\x05\\x19\\x08pre2\\xD2\\x01X0,\"characteristics.has_\\x01,\\x1C_summaryqY\\x10navig\\x05n\\xA1\\xCE\\x01r\\x85v\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\x81\\x93\\x08harA\\xAE.\\xB5\\x00\\xA1\\xD5\\\\_origin\":1771909692880,\"2\\xA5\\x026\\x1B\\x009/H19871,\"dt.rum.schem\\xDD\\xB4\\x1C\"0.23.0\"\\x15!\\x14applic\t"
		"\\xB8Xid\":\"ea7c4b59f27d43eb\",\\xD5\\xA6\\x18frame.i2\\xA8\\x06<aed108b6724f544c\\x1DZ\\x00g\\x81a\\x00v\\xF1.`\"1.331.17.20260218-130851>2\\x00-\\x1C$javascript\\x19!\\x00b\\xED/\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"5\\x17\\x11\\xE5)\\x14-m\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orientaA\\xD0<\":\"landscape-priE:\\x15)$screen.wid\\xA1o\\x0415\\x81\\x81\rD\r\\x1B(height\""
		":8649\\x90\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_rA\\x03\\\\\":1.25,\"page.url.full\":\"\\xE1\\xAFp://192.168.1.2:7001/LoanIQ/ac\\x12S\\x08\\x14s.jsp\"\r>1A\\x00_%\\xAB\\x00aF&\\x02\\x05d\\x1Cdetected\\xD1\\x84nR\\x00\\x08tit\\xC1\\xC7\\x00\"\tu\\x08: A\rv\\x00\"\\x1A\\xFD\\x086r\\x00878025b19a50ceddag\\x00va\\xFB\\x00u\\xDE\\xD6\\x00\\x05>\\x92\\xB0\\x00\\x04},\\xFE\\xF9\t:\\xF9\t%+&8\n\\xD1n\\x16\\xF9\t\\x05\\x1D\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t"
		"\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\xFE\\xF9\t\\x8A\\xF9\tN\\xC8\t\\xA1<\\x00_:\\xC8\t\\x01\\x14N\\x08\n\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t\\xFE\\xE0\t*\\xE0\t\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_45", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=3158854508&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ServiceRequests.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CService%C2%A0Requests%7CC%7C-%7C109692968_290%7C1771909712646%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Faccounts.jsp%7C%7C%7C%2FLoanIQ%2Faccounts.jsp%7C1771909692880%2C1%7C1%7C_load_%7C_load_%7C-%7C1771909712649%7C1771909712780%7Cdn%7C81%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Faccounts.jsp%2C2%7C3%7C_event_%7C1771909712649%7C_vc_%7CV%7C127%5Epc%7CVCD%7C1026%7CVCDS%7C1%7CVCS%7C190%7CVCO%7C1198%7CVCI%7C0%7CTS"
		"%7C1%7CVE%7C572%5Ep422%5Ep6930%5Eps%5Estr%3Anth-of-type%286%29%3Etd%3Afirst-child%3Ediv%3Afirst-child%3Efont%3Afirst-child%7CS%7C127%2C2%7C4%7C_event_%7C1771909712649%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1771909712780%7C1771909712780%7Cdn%7C81%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1771909712649%7C_view_%7Csvn%7C%2FLoanIQ%2Faccounts.jsp%7Csvt%7C1771909692880%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0"
		"%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=192.168.1.2,$rId=RID_2069148055$rpId=1507681618$domR=1771909712779$tvn=%2FLoanIQ%2FServiceRequests.jsp$tvt=1771909712649$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1771909712649e15f15g15h15i15k16l97m97o127p127q129r130s131t131u4627v4327w4327X200V1$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FServiceRequests.jsp$title=LoanIQ%3A%20ServiceRequests$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId="
		"109712760_101$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FServiceRequests.jsp$time=1771909713869", 
		LAST);

	web_custom_request("rb_bf18472vnr_46", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=1714187428&co=snappy&st=1771909714793&ss=0&qc=3206481292&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ServiceRequests.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xEE\\x9B\\x01D{\"data_version\":2,\\x05\\x11\\xF4T\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909712756,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.2:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10331260218130851.js\",\"network.protocol.name\":\"\\x01p\\x08\",\".\\xCB\\x00(time_origin.\\x00\\x01@649,\""
		"dt.rum.schem=\\xA2\\x18\"0.23.0:I\\x00\\x00s.H\\x01\\x04076f\\x00$next_hop_p\r\\x92\\x08\":\"\\x01\\x8D\\x0C/1.1:H\\x004domain_lookup_\\x05V\\x04\":BQ\\x006&\\x00\\x08endJ$\\x00\\x18connectbD\\x00\\x11 V>\\x00\\x18secure_\r%\\x08ion\\x11H\\x0006\\xDB\\x00\\x04re%\\xDE\\x11\\x1EB\\xAA\\x00\\x1Cresponse\\x86!\\x00V\\x88\\x00\\x10redir\\x1D\\xC7B\\x7F\\x00\r\\x1F\\x05>:\\x1D\\x00\\x14worker\\x11z:\\x1D\\x00\\x10fetch\\x11\\x1C\\x05\\xB7!\\x92\\x15\\xB0!\\xD1,tus_code\":20:"
		">\\x008render_blocking\\x01H\\x14tus\":\"\\x11\\x12:\\xD7\\x014first_interim_>\\x15\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\">-\\x00\\x1Cdeliveryq\\x8C\\x10cache:~\\x00\\x14transf!\\x0B\\x08izeBB\\x00\\x04en\\x01\\xE5\\x18d_body_\t\"\\x141268686\\xEA\\x01\\x04deB'\\x00 345597,\"rI\\x05(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracEa\\x00te\\x1E\\x19-\\x0Cset\"VK\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85Xm\\xAE\\x18applicaA\\xB2\\x00.\\x85\\xF4"
		"<ea7c4b59f27d43eb\\xBD!\\x10frame:#\\x05@0e9419bc239e8115\"\\x95\\x08\\x85\\x8A\\x00.\\xB5\\xA94\"1.331.17.2026\\x81\\x83\\x00-\\x89\\x84>2\\x00\\x08typ\\xA1\\xA3\\x1Cjavascri\\xA5(\r\\xAD\\x00b\\xAD\\xAA\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x19Y\t0\\x80MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-\\x81\\xA4\rj\\x00i\\xCD\\x08)\\x14\\x001\\xA9\\xE9\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,"
		"height\":864,\\xD5\\xB1\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03<\":1.25,\"page.url\\x9Ay\\x06\\x08Ser\\x01\\xC7\\x00RI\\xD6\\x0Cs.js\\xC57\\x01E1H\\x00_%\\xB2J-\\x02\\x05&(detected_na\\xC5y\\x00/\\xCD\\xD2jY\\x00\\x0CtitlA'\t*\\x04: :+\\x00\\x18\",\"view:\\x80\\x00835b694798988c81a^\\x05&\\xFE\\xEB\\x00\\x05E\\xAE\\xC5\\x00\\x04},\\xFE\\x97\\x08\\xFE\\x97\\x08N\\x97\\x08\\x08imgZI\\x04\\x8D\\x84\\x91<\\xA60\\x01Timages/Accounts.JPG\",\""
		"\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xFEq\\x08\\xEEq\\x08\\x0Cnon-\\xFEu\\x08\\xFEu\\x08\\xFEu\\x08\\x1Au\\x08\\x08331:\n\tJt\\x08\r&m\\xC2Vs\\x08\\x1Cinvalid\"&\\x9A\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xFEm\\x08\\xEEm\\x08\\x0E\\x13\n"
		"\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08:j\\x08\\x08033\\x8Aj\\x08\t&\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xFEj\\x08\\xAAj\\x08\\x18Billpay\\xFE\\xD6\\x10\\xFE\\xD6\\x10&"
		"\\xD6\\x10\\x08.10\\x05\\x01\\x1823841866\\x91\\x16\\xEEV\\x19\\x1AV\\x19r`\\x00Ve\\x19r3\\x00\\x1A/\\x19\\x1E\\xAB\\x17\\x0410\\x96/\\x00\\x12\\xBD\\x18~-\\x00\\xE6\\x92\\x19r\\xB3\\x00>\\x8C\\x18~\\x87\\x00\\x150\\x92\\xB5\\x00\\xFE\\xBF\\x19\\xA2\\xBF\\x19B\\xE4\\x00\\xFE\\xCE\\x19\\x12\\xCE\\x19\\xFE]\\x11\\xFE]\\x11\\xFE]\\x11*]\\x11\\x08044\\x86\\xD1\\x19\r&"
		"\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\xAA\\xF3\\x08\\x0Ccard\\xFE]\\x11\\xFE]\\x11*]\\x11B\\xC7\\x06.\\xAD\""
		"\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xB6\\xF1\\x08\\x0C430361\\x0CNN\\x1A\t&"
		"\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xFE\\xF1\\x08\\xAA\\xF1\\x08\\x10Demat\\xFE\\xE2\\x11\\xFE\\xE2\\x11.\\xE2\\x11\\x009\\x05\\x01\\x14284744:\\xB1\\x05\\xFE\\xF1\\x08\\x12\\xF1\\x08\\x05_V`\\x00^\\xE2\\x11j3\\x00N\\xE2\\x11\\x8A/\\x00&"
		"-\\x11j-\\x00\\xEE\\xE2\\x11jW\\x00\"\\xB2\\x11&N,\\x00.\\x920\\x00\\x92\\xB5\\x00\\xFE\\xE2\\x11\\xAA\\xE2\\x11:\\xE4\\x00\\xFE\\xE2\\x11\\xFE\\xE2\\x11\\xFE\\xE2\\x11\\xFE\\xE2\\x11:\\xE2\\x11\\x0C9879\\x82\\xF0\\x08\t"
		"%\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xAA\\xEF\\x08\\x10logou\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08\\xFE\\xF0"
		"\\x08\\xFE\\xF0\\x08\\xFE\\xF0\\x08R\\xF0\\x08\\x0C1081:0\\x0CN\\xE1\\x11\t&\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08\\xFE\\xF2\\x08.\\xF2\\x08\\x00c:\\xE5<Dis_self_monitoring\\x1EX4J*\\x00\\x12\\x03:\\x08nal\\x11#\\x12\\x94\\x0F\\x0E\\xCC8\\x00e.\\x80<\\x08771:\\x80=\\x1A\\xC87f\\x8D<\\x11!\\x08fm_*,"
		">\\x0E\\xE0<\\x10stamp2^\\x00\\x0C67,\"\\x0E\\xCD9\\x12\\xD9: 0,\"messag\\x0E\\x7F6\\x0E\\x1A8 507651721\\x12\\xD75\\x8AB\\x00\\x003.B\\x00@[\\\\\"OneAgent JavaS\\x12\\xF480 tag\\\\\",[]]\"}]&S9\\xFE\\xAD9\\xFE\\xAD9\\xFE\\xAD9\\xFE\\xAD9\\xFE\\xAD9\\xFE\\xAD9\\xFE\\xAD9\\xFE\\xAD9\\xFE\\xAD9\\xFE\\xAD9\\xFE\\xAD9\\xFE\\xAD9\\xFE\\xAD9\\xFE\\xAD9\\xFE\\xAD9n\\xAD9\\x16DA\"DB\\x10130.8\\x16\\xC2\\x13\\x1876158146\\xAD\\x12BUB\\x10navig\\x0E\\xC6;\\x00n\\xFE\\xC59>\\xC59:\\\\;\\x1A\\xE0;"
		"\\xFE\\xC59\\xFE\\xC59:\\x91.\\xEE\\xFC\\x16\\x12\\xFC\\x16\\x084.6\\x12<)\\x1A=)\\x005>\\xFE%2iB\\x16\\xEB\\x15z3\\x00>\\xFC\\x16\\x9A/\\x00\\x92\\\\\\x00\\xDE\\xFC\\x16\\x0066\\xCB\\x16\\x002:$*>\\xFC\\x16\\x0C96.7I\\x85\\x1052316\\x0Eb>.b!\\x15/\\x05\\xB4\\x0C97.2r-\\x00\\x1A|B\\xE5\\xC4BWA\"\\x19\\x17\\x05L:\\xDE\\x01\\xAA\\x9BBJf\\x01\\xFE\\xFA\\x16\\xFE\\xFA\\x16\\xAA\\xFA\\x16zq\\x01>\\xBEBv\\xB9B\\x08462:ZEJ\\xBCB\\x0443>%\\x00J\\x17\\x0E\t%\\xFE\\x16\\x0E6\\x16\\x0E\\x12\\xFB?"
		"\\x16\\x9DB\\xAA\\x82?\\x00a\\x1EK>\\x16f@>3\n\\x08has\\x12\\xF7B\\xB9\\x0E\\x0E-\n\\x04in&\\xF9BN2\\x00\\x19.\\x1Eh\n.\\xE6\\x02\\x1A\\x92B\r%\\x0E6@.\\x1E\\x00\\x14unload\\x16E\nZ\\xDB\\x022#\\x00N\\xDF\\x02\\x08dom\\x16\\xEA\n\\x10activ\\x0E\\xDB\n\\x04266\\x8F\\x04:\\xA8\\x03\\x011\\x1Ccontent_\\x01\\x7F\\x00e:\\x81\\x00\\x001B\\xD4\\x01\\x04omV1\\x00\\x05\\x8F\\x08128\\x8Ao\\x00\\x10mplet\\x05\\x9D\\x009r\\x9B\\x06\\x01\\x916\\x10\\x01\\xC1\\xCDnH\\x04\\x1D2\t\\x90z\\xFD\\x06\\x95,"
		"\\x12W@\\x85K-\\x9E\\x08ion1\\xB0\\x08har\\x0E\\xD3<.\\x19\\x00\\x04ab!\\xA2\\x01\\xC4\\x14\"exist\\x0E|\\x0C\\x1A*B\\x00s\\x0E\\xBEB\\x0E\\xFAI\\x1Cnumber\":\\x0ER\\x0C\\x16\\xD2H\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xFEw\\x0B\\xDAw\\x0B\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_47", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=2384716665&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ServiceRequests.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2FServiceRequests.jsp$tvt=1771909712649$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$rt="
		"1-1771909712649%3Bhttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FAccounts.JPG%7Cb107e0f0g0h0i0k0l0m0v13310w13310X200E1F2700O90P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FLoans.JPG%7Cb107e0f0g0h0i0k0l0m0v10330w10330X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FBillpay.JPG%7Cb107e0f0g0h0i0k0l0m0v10448w10448X200E1F2250O75P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fcards.JPG%7Cb107e0f0g0h0i0k0l0m0v14303w1430"
		"3X200E1F3000O100P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FDemat.JPG%7Cb107e0f0g0h0i0k0l0m0v9879w9879X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Flogout.JPG%7Cb107e0f0g0h0i0k0l0m0v10813w10813X200E1F2100O70P30Q652R127I7V1$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FServiceRequests.jsp$title=LoanIQ%3A%20ServiceRequests$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109712760_101$v=10331260218130851$vID="
		"1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FServiceRequests.jsp$time=1771909715899", 
		LAST);

	lr_end_transaction("AB_DDRequest_T05_SelectServiceRequests",LR_AUTO);

	lr_think_time(9);

	web_custom_request("rb_bf18472vnr_48", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=1&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=3938960913&co=snappy&st=1771909724439&ss=1&qc=870595457&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ServiceRequests.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xBB\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"background\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909724436,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(12649,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D0e9419bc239e8115\","
		"\\x15Z\\x14gent.v1\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x001)W\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\xF0L\":1.25,\""
		"page.url.full\":\"http://192.168.1.2:7001/LoanIQ/ServiceRequests.jsp\",\"\\x05E1H\\x00_%\\xB2J-\\x02\\x05&,detected_nam!\\xFC\\x8AY\\x00\\x0Ctitl\\x01+\\x00L\\x05\\x83\\x04: :\\x84\\x00\\x18\",\"view:\\x80\\x00<35b694798988c81e\\x11&\\xFE\\xEB\\x00\\x05k\\xAE\\xC5\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(5);

	web_custom_request("rb_bf18472vnr_49", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=2930214260&co=snappy&st=1771909731685&ss=0&qc=1720742419&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ServiceRequests.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xBB\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909729679,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(12649,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D0e9419bc239e8115\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x001)W\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\xF0L\":1.25,\""
		"page.url.full\":\"http://192.168.1.2:7001/LoanIQ/ServiceRequests.jsp\",\"\\x05E1H\\x00_%\\xB2J-\\x02\\x05&,detected_nam!\\xFC\\x8AY\\x00\\x0Ctitl\\x01+\\x00L\\x05\\x83\\x04: :\\x84\\x00\\x18\",\"view:\\x80\\x00<35b694798988c81e\\x11&\\xFE\\xEB\\x00\\x05k\\xAE\\xC5\\x00\\x0C}]}}", 
		LAST);

	lr_start_transaction("AB_DDRequest_T06_SelectDDRequest");

	web_reg_find("Text=LoanIQ: DDRequest", 
		LAST);

	lr_think_time(5);

	web_url("ddrequest.jsp", 
		"URL=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ServiceRequests.jsp", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf18472vnr_50", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=3221206840&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ServiceRequests.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1771909737034%7C_viewend_%7Cinp%7C0%7Csvn%7C%2FLoanIQ%2FServiceRequests.jsp%7Csvt%7C1771909712649%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C7%7C_event_%7C1771909737034%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FServiceRequests.jsp$rId=RID_2069148055$rpId=1507681618$domR=1771909712779$tvn=%2FLoanIQ%2FServiceRequests.jsp$tvt=1771909712649$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url="
		"http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FServiceRequests.jsp$title=LoanIQ%3A%20ServiceRequests$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109712760_101$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FServiceRequests.jsp$time=1771909737035", 
		LAST);

	web_custom_request("rb_bf18472vnr_51", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=681212638&co=snappy&st=1771909737038&ss=1&qc=362521289&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ServiceRequests.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xCA(D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"view.fo\\x11?,_time\":19144\r\\x1D\\x0Cback\t\\\\\r\\x1Dp5242,\"error.http_4xx_count\":02\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!&8us\":\"reported\",\\x05\\x18)a:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x0C148,\\x05\\x10\\x1Cloading_\\x01S!y "
		"complete\"\t\\x1F\\x01\\x17>j\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-v\\x1C24202.19\\x05\\x01\\x1428474,\\x05[\\x08dur%1\\x08\":2\r\\x12\\x04na!\\xC3,\"pointerdown\\x01\\x9E$id.process\r\\xC0\\x04rt\\x013\\x08207\tH\\x1D\\x1D\\x08end\r\\x1B\\x08.10\\x05\\x01\\x08238!\\xF4\\x01E<cancelable\":true\t>8ui_element.tag_\r\\x83\\x00A\ry\\x1D\\x1E\\\\xpath\":[\"html\",\"body\",\"t\\x05Q\\x08,\"t\\x11\\x10\\x0Cr[5]\\x01\\x10!\\xAC\\x1Cblockquo%g2\r\\x00\\x14a\"],\"f"
		":\\xA7\\x01\\x00prW\\x01\\x00pR\\x8D\\x01\\x04in\\x1D\\x184below_threshol\\x01\\x82\\x04lc\\x1D\\x1F]F\\x01\\x186F\\x02\\x041,\\x05\\x15\\x04st9\\xBAE=\\x01*!\\xEE-\\xCE\\x000\r'\\x04izan\\x0C0599\t\\x11\\x14render\r%\\x159=@\\x00t9^(BLOCKQUOTE\"\t=\\x1D'\\xFEg\\x01.g\\x01,],\"long_task\\x01\\xD9I\\xE2\\x0Cnot_=\n\\x0Cttfb\\x19\\x1D>\\x19\\x00mU\\x0C96.7E\\xC0 95231628,\t8\\x0CwaitA\\x96Y\\xCC\\x0C14.6EzE{\\x08185\\x11+\\x10cache\\x1D)\\x000\r"
		"C\\x08dnsJ\\x16\\x00\\x14connec\\x85P\\x19\\\\\\x113\\x18request\\x1D\\x1A\\x0086a\\x03(43,\"performA\\xF5\\x14.activem\\x81\\x00\\x00r\\x89\\xEF\\x00v\\xA1A\\x00s\\x01K(nce_number\"A\\x07\\x05\\x19\\x08pre2\\xD3\\x01X0,\"characteristics.has_\\x01,\\x1C_summaryqW\\x10navig\\x05n\\xA1\\xCA\\x01r\\x85r\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\x81\\x8F\\x08harA\\xAF.\\xB5\\x00\\xA1\\xD1\\\\_origin\":1771909712649,\"2\\xA6\\x026\\x1B\\x009/H24386,\"dt.rum.schem\\xDD\\xB0\\x1C\"0.23.0\"\\x15!\\x14applic"
		"\t\\xB8Xid\":\"ea7c4b59f27d43eb\",\\xD5\\xA2\\x18frame.i2\\xA4\\x06<0e9419bc239e8115\\x1DZ\\x00g\\x81_\\xF5*`\"1.331.17.20260218-130851>2\\x00-\\x1C$javascript\\x19!\\x00b\\xED+\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"5\\x17\\x11\\xE5)\\x14-m\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orientaA\\xD0<\":\"landscape-priE:\\x15)$screen.wid\\xA1m\\x08153!\\xC1\\x00e\\x05D\r\\x1B(height\":8649\\x90\\x14window\\x197a\\xA11#\r"
		"\\x1C\\x118\\x08732B8\\x00\tb\\x1C_pixel_rA\\x03\\\\\":1.25,\"page.url.full\":\"\\xE1\\xABt://192.168.1.2:7001/LoanIQ/Ser\\x01\\xAC\\x00RaV\\x1Csts.jsp\"\rE1H\\x00_%\\xB2J-\\x02\\x05k\\x1Cdetected\\xD1\\x89\\x8AY\\x00\\x08tit\\xC1\\xD3\\x00\"\t\\x83\\x04: :\\x84\\x00\\x00\"\\x1A\\x0E\t6\\x80\\x00<35b694798988c81e\\x11&\\x00u\\xFA\\xEB\\x00\\x00v\\x81U\\xAE\\xC5\\x00\\x04},\\xFE\\x18\n:\\x18\n%G&W\n\\xD1\\x92\\x089141\\xCF\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n"
		"\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\n\\xFE\\x18\nz\\x18\nN\\xE7\t\\xA1U\\x00_:\\xE7\t\\x01\\x14N'\n\\xFE\\xFF\t\\xFE\\xFF\t.\\xFF\t\\x007\"\\xC7\\x08\\xFE\\xFF\t\\xFE\\xFF\t\\xFE\\xFF\t\\xFE\\xFF\t\\xFE\\xFF\t\\xFE\\xFF\t\\xFE\\xFF\t\\xFE\\xFF\t\\xFE\\xFF\t\\xFE\\xFF\t\\xFE\\xFF\t\\xFE\\xFF\t\\xFE\\xFF\t\\xFE\\xFF\t^\\xFF\t\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_52", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=3680613661&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CDD%C2%A0Request%7CC%7C-%7C109712760_101%7C1771909736933%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FServiceRequests.jsp%7C%7C%7C%2FLoanIQ%2FServiceRequests.jsp%7C1771909712649%2C1%7C1%7C_load_%7C_load_%7C-%7C1771909736936%7C1771909737064%7Cdn%7C116%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FServiceRequests.jsp%2C2%7C3%7C_event_%7C1771909736936%7C_vc_%7CV%7C124%5Epc%7CVCD%7C1018%7CVCDS%7C2%7CVCS%7C182%7CVCO%7C118"
		"2%7CVCI%7C0%7CTS%7C1%7CVE%7C421%5Ep399%5Ep6930%5Eps%5Esdiv.conditions%3Efont%3Afirst-child%7CS%7C124%2C2%7C4%7C_event_%7C1771909736936%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1771909737064%7C1771909737064%7Cdn%7C116%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1771909736936%7C_view_%7Csvn%7C%2FLoanIQ%2FServiceRequests.jsp%7Csvt%7C1771909712649%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%"
		"5Esk0%5Esh0$dO=192.168.1.2,$rId=RID_-754379583$rpId=1063980294$domR=1771909737063$tvn=%2FLoanIQ%2Fddrequest.jsp$tvt=1771909736936$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1771909736936e18f18g18h18i18k19l96m96o124p124q125r127s128t128u7341v7041w7041X200V1$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$title=LoanIQ%3A%20DDRequest$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109737045_430$v=10331260218130851$vID="
		"1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$time=1771909738140", 
		LAST);

	web_custom_request("rb_bf18472vnr_53", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=499092680&co=snappy&st=1771909739070&ss=0&qc=3867786479&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xE9\\x9C\\x01D{\"data_version\":2,\\x05\\x11\\xF4T\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909737040,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.2:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10331260218130851.js\",\"network.protocol.name\":\"\\x01p\\x08\",\".\\xCB\\x00(time_origin=\\x00D6935,\""
		"dt.rum.schem=\\xA2\\x18\"0.23.0:I\\x00\\x00s.H\\x01\\x1005.20\\x05\\x01\\x1847683726u\\x00$next_hop_p\r\\xA1\\x08\":\"\\x01\\x9C\\x0C/1.1:W\\x004domain_lookup_\\x05e\\x04\":~`\\x0065\\x00\\x08end\\x863\\x00\\x18connect\\x9Eb\\x00\\x11/\\x92\\\\\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006\\x17\\x01\\x04reE)\\x11\\x1E~\\xE6\\x00\\x1Cresponse\\xC20\\x00\\x92\\xB5\\x00\\x10redir=\\x12B\\xAC\\x00\r\\x1F\\x05M:\\x1D\\x00\\x14worker\\x11\\x98:\\x1D\\x00\\x10fetch\\x11\\x1CN\\xE4\\x00A\n\\x15\\xDDAX,"
		"tus_code\":20:M\\x008render_blocking\\x01W\\x14tus\":\"\\x11\\x12:O\\x024first_interim_>B\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\">-\\x00\\x1Cdelivery\\x91\\x13\\x10cache:~\\x00\\x14transf!\\x1A\\x08izeBB\\x00\\x04en\\x01\\xE5\\x18d_body_\t\"\\x141268686&\\x02\\x04deB'\\x00 345597,\"rIA(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracE\\x9D\\x00te\\x96\\x19-\\x0Cset\"V\\xD2\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85\\xDF\\x8D5\\x18applicaA\\xEE\\x00.\\xA5{"
		"<ea7c4b59f27d43eb\\xBD\\xA8\\x10frame:\\xAA\\x05@5a01319bcf9b80ef\"\\x95\\x8F\\xA5\\x11\\x00.\\xD504\"1.331.17.2026\\xA1\n\\x00-\\xA9\\x0B>2\\x00\\x08typ\\xC1*\\x1Cjavascri\\xA5\\xAF\r\\xAD\\x00b\\xCD1\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x19Y\t0\\x80MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-\\xA1+\rj\\x00i\\xCD\\x8F)\\x14\\x001\\xC9p\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,"
		"\\xF58\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03<\":1.25,\"page.url\\x9A\\x00\\x07\\x04ddQ\\xA4\\x04js\\xC5\\xB8\\x01?1B\\x00_%\\xACJ'\\x02\\x05&(detected_na\\xC5\\xFA\\x00/\\xEDSRS\\x00\\x0CtitlA\\x1B\t$\\x10: DDRiI\\x18\",\"view:t\\x008c7fa480f2ffbc1e!\\x99\\x05&\\xE6\\xD9\\x00\\x05?\\x96\\xB3\\x00\\x04},\\xFE\\x00\t\\xFE\\x00\tN\\x00\t\\x08imgZ+\\x04-\\xC2\\x91\\x1E\\xA6$\\x01Timages/Accounts.JPG\",\""
		"\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xEE\\xDA\\x08\\x1A\\xDA\\x08\\x0Cnon-\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\x1A\\xDE\\x08\\x08331:s\tJ\\xDD\\x08\r&\\x8DIV\\xDC\\x08\\x1Cinvalid\"&\\x03\t"
		"\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08\\xFE\\xD6\\x08v\\xD6\\x08\\x0Ej\n\\xFE\\xD3\\x08\\xFE\\xD3\\x082\\xD3\\x08\\x009\\x05\\x01\\x1052316\\x0E\\xEE\\x0B.\"\\x12\\xFE\\xAD\\x11\\x12\\xAD\\x11\\x05_V`\\x00^\\xAD\\x11j3\\x00\\x1AJ\\x11\\x1E\\x8A\\x0F\\x12E\\x10\\x8A/"
		"\\x00\\x12\\xAB\\x10~-\\x00\\xEE\\xAD\\x11j\\x84\\x00>k\\x10~\\x87\\x00\\x150\\x92\\xB5\\x00\\xFE\\xAD\\x11\\xAA\\xAD\\x11:\\xE4\\x00\\xFE\\xAD\\x11\\x12\\xAD\\x11\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08*\\xD3\\x08\\x08033\\x8A\\xD3\\x08\t&"
		"\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x082\\xD3\\x08\\x18Billpay\\xFE\\xA8\\x11\\xFE\\xA8\\x11.\\xA8\\x11"
		":\\xAB\\x06\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xEA\\xD5\\x08\\x0444\\x86\\x85\\x1A\\x001\t&"
		"\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x082\\xD5\\x08\\x0Ccard\\xFE\\xA8\\x11\\xFE\\xA8\\x11.\\xA8\\x11\\x003\\x16\\xD3\\x08\\x1876158146\\x18 \\xFE\\xA8\\x11\\x0E\\xA8\\x11n`\\x00Z\\xA8\\x11n3\\x00J\\xA8\\x11\\x8E/\\x00\""
		"\\xF3\\x10n-\\x00\\xEA\\xA8\\x11nW\\x00\"x\\x11*k$\\x920\\x00\\x92\\xB5\\x00\\xFE\\xA8\\x11\\xA6\\xA8\\x11>\\xB4\\x00\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\xFE\\xA8\\x11>\\xA8\\x11\\x0C43036@\\x03N{\\x1A\t&"
		"\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x082\\xD3\\x08\\x10Demat\\xFE\\xA6\\x11\\xFE\\xA6\\x11*\\xA6\\x11>\\xA9\\x06\\xFE\\xA6\\x11"
		">\\xA6\\x11n`\\x00\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x082\\xD3\\x08\\x0C9879\\x82\\xD2\\x08\t"
		"%\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x082\\xD1\\x08\\x10logou\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08"
		"\\xFE\\xD2\\x08\\xFE\\xD2\\x08R\\xD2\\x08\\x0C1081\\x8A\\xA5\\x11\t&\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xB6\\xD4\\x08\\x00c:\\xA8=Dis_self_monitoring\\x1E\\xB24J*\\x00\\x12?:\\x08nal\\x11#\\x12+\\x18\\x0E\\x089\\x00e*C=\\x08705\\x0EC=.C>\\x1A\\x048fP=\\x11!\\x08fm_*\\xEF>\\x0E\\xA3=\\x10stamp6^"
		"\\x00\\x080,\"\\x0E\t:\\x12\\x15; 0,\"messag\\x0E\\xC76\\x0EV8 507651721\\x1216\\x8AB\\x00\\x003.B\\x00@[\\\\\"OneAgent JavaS\\x12090 tag\\\\\",[]]\"}]&\\x8F9\\xFE\\xE99\\xFE\\xE99\\xFE\\xE99\\xFE\\xE99\\xFE\\xE99\\xFE\\xE99\\xFE\\xE99\\xFE\\xE99\\xFE\\xE99\\xFE\\xE99\\xFE\\xE99\\xFE\\xE99\\xFE\\xE99\\xFE\\xE99\\xF2\\xE99\\x1A\\xE9A\\x95\\xA6\\x08128r2\\x15\\x08ini6\\xFAB\\x10navig\\x0E\\xE4;\\x00n\\xFE\\x01:>\\x01:>\\xAB;\\xFE\\xFB9\\xFE\\xFB9:\\xD7-\\xEEo\\x1F\\x12o\\x1F\\x0086#C\\x0416"
		":\\xBD\\x132\\xF9B\\x16^\\x1Ez3\\x00>o\\x1F\\x9A/\\x00\\x92\\\\\\x00\\xDEo\\x1F\\x009:O\\x02:\nD>o\\x1F\\x0C95.6\\x128D\\x180238418:\\x15\\x01\\x15/\\x05\\xB4\\x009B\\x1E\\x00\\x1A\\x94B\\xE5\\x91B`A\"}\\x1F\\x05=:\\xCF\\x01\\xAA\\xB3BJW\\x01\\xFE^\\x1F\\xFE^\\x1F\\xAA^\\x1Fzb\\x01>\\xC7Bv\\xC2B\\x0C73416\\xB7\\x02J\\xC5B\\x0470>%\\x00Jk\\x1F\t%\\xFE\\xC5\r6\\xC5\r\\x12\n@\\x16\\xA6B\\xAA\\x9D?\\x08Ser\\x0E=A\\x1A\\x03@\\x00s\\x1A|@>\\x07\n\\x08has\\x12\\x07C\\xB9\\x00\\x0E\\x01\n\\x04in&\t"
		"CN2\\x00\\x19.\\x1E<\n.\\xEF\\x1A\\x1A\\xA2B\r%\\x0E\\xA4C.\\x1E\\x00\\x14unload\\x16\\x19\nZ\\xE2\\x022#\\x00N\\xE6\\x02\\x08dom\\x16\\xBE\n\\x10activ\\x0E\\xAF\n\\x0823.\\x0E\\x99A\\x04er\"\\xDDH\\x01$\\x1Ccontent_\\x01r\\x00e:t\\x00\\x013\\x007i\\xA4R\\xDDGb@\\x00\\x05\\x91\\x08124r\\xE2\\x03\t>\\x10mplet\\x05\\x9F\\x006r.\\x00\\x01\\xA06\\x12\\x01\\x08127r\\x9E\\x00\\x1D2\r\\x90v\\xF1\\x06\\x955\\x12\\x87@\\x85T-\\xA0\\x08ion1\\xB2\\x08har\\x0E|<.\\x19\\x00\\x04ab!\\xA4\\x01\\xC4\\x14\""
		"exist\\x0ER\\x0C\\x1ANB\\x00s\\x0E]B\\x0E\\x93J number\":1\\xFEM\\x0B\\xFEM\\x0B\\xFEM\\x0B\\xFEM\\x0B\\xFEM\\x0B\\xFEM\\x0B\\xFEM\\x0B\\xFEM\\x0B\\xFEM\\x0B\\xFEM\\x0B\\xFEM\\x0B\\xFEM\\x0B\\xFEM\\x0B\\x86M\\x0B\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_54", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=1980491146&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2Fddrequest.jsp$tvt=1771909736936$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$rt="
		"1-1771909736936%3Bhttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FAccounts.JPG%7Cb105e0f0g0h0i0k0l0m0v13310w13310X200E1F2700O90P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FLoans.JPG%7Cb105e0f0g0h0i0k0l0m0v10330w10330X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FBillpay.JPG%7Cb105e0f0g0h0i0k0l0m0v10448w10448X200E1F2250O75P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fcards.JPG%7Cb105e0f0g0h0i0k0l0m0v14303w1430"
		"3X200E1F3000O100P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FDemat.JPG%7Cb105e0f0g0h0i0k0l0m0v9879w9879X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Flogout.JPG%7Cb105e0f0g0h0i0k0l0m0v10813w10813X200E1F2100O70P30Q652R127I7V1$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$title=LoanIQ%3A%20DDRequest$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109737045_430$v=10331260218130851$vID="
		"1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$time=1771909740181", 
		LAST);

	lr_end_transaction("AB_DDRequest_T06_SelectDDRequest",LR_AUTO);

	lr_think_time(10);

	web_custom_request("rb_bf18472vnr_55", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=1&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=1750655397&co=snappy&st=1771909751350&ss=1&qc=3428201570&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x9D\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"background\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909751343,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(36935,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D5a01319bcf9b80ef\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x001)W\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\xF0F\":1.25,\""
		"page.url.full\":\"http://192.168.1.2:7001/LoanIQ/ddrequest.jsp\",\"\\x05?1B\\x00_%\\xAC\\x005F'\\x02\\x05&,detected_nam!\\xF6rS\\x00\\x0Ctitl\\x01%\\x00L\\x05w\\x14: DDRe\\x05x\\x18\",\"view:t\\x008c7fa480f2ffbc1e!\\x99\\x05&\\xE6\\xD9\\x00\\x05?\\x96\\xB3\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(6);

	web_custom_request("rb_bf18472vnr_56", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=3187532798&co=snappy&st=1771909758547&ss=0&qc=59685495&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x9D\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909756533,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(36935,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D5a01319bcf9b80ef\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x001)W\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\xF0F\":1.25,\""
		"page.url.full\":\"http://192.168.1.2:7001/LoanIQ/ddrequest.jsp\",\"\\x05?1B\\x00_%\\xAC\\x005F'\\x02\\x05&,detected_nam!\\xF6rS\\x00\\x0Ctitl\\x01%\\x00L\\x05w\\x14: DDRe\\x05x\\x18\",\"view:t\\x008c7fa480f2ffbc1e!\\x99\\x05&\\xE6\\xD9\\x00\\x05?\\x96\\xB3\\x00\\x0C}]}}", 
		LAST);

	lr_start_transaction("AB_DDRequest_T07_SubmitPayee");

	web_reg_find("Text=LoanIQ: DDRequest", 
		LAST);

	lr_think_time(8);

	web_submit_data("ddrequest.jsp_2", 
		"Action=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=amt", "Value=100", ENDITEM, 
		"Name=payname", "Value=Deekshith2", ENDITEM, 
		"Name=paybank", "Value=Arabian Bank", ENDITEM, 
		LAST);

	web_custom_request("rb_bf18472vnr_57", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=938986436&co=snappy&st=1771909766836&ss=1&qc=3527335379&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xA2(D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"view.fo\\x11?,_time\":24708\r\\x1D\\x0Cback\t\\\\\r\\x1Dl5190,\"error.http_4xx_count\":6\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!&8us\":\"reported\",\\x05\\x18)a:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x0C144,\\x05\\x10\\x1Cloading_\\x01S!y "
		"complete\"\t\\x1F\\x01\\x17>j\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-v\\x1C24476.10\\x05\\x01\\x1423842,\\x05[\\x08dur%1\\x0C\":16\t\\x12\\x04na!\\xC3,\"pointerdown\\x01\\x9E$id.process\r\\xC0\\x04rt!\\xE8\\x10480.7\\x05T\\x1004768\\x01\\xE76*\\x00\\x08end\\x15(\\x009\\x05\\x01\\x08523\\x11k<cancelable\":true\t\\x818ui_element.tag_\r\\x90\\x10INPUT\r\\x8A\\x1D\"Lxpath\":[\"html\",\"body\\x01&\\x18orm\",\"t\\x05\\\\\\x08,\"t\r\\x17\\x10tr[5]\\x01\\x10!\\xC4F\\x1D\\x00\\x05\\x1A\\x04[2\\x01\""
		"$input\"],\"f:\\xC6\\x01\\x00prv\\x01\\x00pR\\xAC\\x01\\x04in\\x1D\\x184below_threshol\\x01\\x89\\x04lc\\x1D\\x1F]e\\x01\\x186e\\x02\\x041,\\x05\\x15\\x04st9\\xD9E\\\\\\x01*A\r-\\xED\\x000\r' ize\":7434\t\\x10\\x14render\r$\\x158=M=o\\x0CDIV\"\t6\\x1D \\xC2m\\x01%K%m\\x08div!N long_task\\x01\\xC4I\\xEC\\x0Cnot_\\x1D\\xF5\\x0Cttfb\\x19\\x1D>\\x19\\x00m_\\x0C95.6IvA\\xCB\\x0C186,\t8\\x0CwaitA\\xA0]\\xD6\\x088.2\t*A\\xA0\\x0437A{\\x05c\\x10cache\\x1D)\\x000\r"
		"C\\x08dnsJ\\x16\\x00\\x14connec\\x85Z\\x19\\\\\\x113\\x18request\\x1D\\x1A\\x0C77.3E\\xED097615814,\"perA\\x95A\\xF2\\x14.activew\\x81\n\\x00r\\x89\\xF9\\x00v\\xA1K\\x00s\\x01K(nce_number\"!\\xF2\\x05\\x19\\x08pre2\\xBF\\x01X0,\"characteristics.has_\\x01,\\x1C_summaryqT\\x10navig\\x05n\\xA1\\xD4\\x01r\\x85|\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\x81\\x99\\x08harA\\x9A.\\xB5\\x00\\xA1\\xDB\\x14_origi\\x81-4771909736935,\"2\\x91\\x026\\x1B\\x009/H29898,\"dt.rum.schem\\xDD\\xBA\\x1C\"0.23.0\"\\x15"
		"!\\x14applic\t\\xB8Xid\":\"ea7c4b59f27d43eb\",\\xD5\\xAC\\x10frame:\\xAE\\x06<5a01319bcf9b80ef\\x1DZ\\x00g\\x81\\\\\\xF54`\"1.331.17.20260218-130851>2\\x00-\\x1C$javascript\\x19!\\x00b\\xED5\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"5\\x17\\x00i\\xED\\x93)\\x14-m\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orientaA\\xD0<\":\"landscape-priE:\\x15)$screen.wid\\xA1f\\x0C1536>\\x1B\\x00(height\""
		":8649\\x90\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t\\xA6\\x1C_pixel_rA\\x03\\\\\":1.25,\"page.url.full\":\"\\xE1\\xB5p://192.168.1.2:7001/LoanIQ/ddm\\x9C\\x10.jsp\"\r?1B\\x00_%\\xACJ'\\x02\\x05e\\x1Cdetected\\xD1\\x80rS\\x00\\x08tit\\xC1\\xC4\\x00\"\tw\\x10: DDRa\\xC9\\x00sA\"\\x00va\\xD86t\\x008c7fa480f2ffbc1e!\\x99\\x05&\\x00u\\xE2\\xD9\\x00\\x05?\\x96\\xB3\\x00\\x04},\\xFE\\x04\n:\\x04\n%/&C\n\\xCD`\\x002\\x16\\x04\n\\x05\\x1D\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n"
		"\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xFE\\x04\n\\xA2\\x04\nN\\xD3\t\\xA1B\\x00_:\\xD3\t\\x01\\x14N\\x13\n\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t\\xFE\\xEB\t>\\xEB\t\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_58", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=2595524932&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1771909766832%7C_viewend_%7Cinp%7C0%7Csvn%7C%2FLoanIQ%2Fddrequest.jsp%7Csvt%7C1771909736936%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C7%7C_event_%7C1771909766832%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$rId=RID_-754379583$rpId=1063980294$domR=1771909737063$tvn=%2FLoanIQ%2Fddrequest.jsp$tvt=1771909736936$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url="
		"http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$title=LoanIQ%3A%20DDRequest$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109737045_430$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$time=1771909766834", 
		LAST);

	web_custom_request("rb_bf18472vnr_59", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=1935406482&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7Cddamt%7CKUundefined%7C-%7C109737045_430%7C1771909766656%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp%7C%7C%7C%2FLoanIQ%2Fddrequest.jsp%7C1771909736936%2C1%7C1%7C_load_%7C_load_%7C-%7C1771909766663%7C1771909766872%7Cdn%7C116%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp%2C2%7C3%7C_event_%7C1771909766663%7C_vc_%7CV%7C203%5Epc%7CVCD%7C1023%7CVCDS%7C1%7CVCS%7C261%7CVCO%7C1268%7CVCI%7C0%7CTS%7"
		"C1%7CVE%7C421%5Ep399%5Ep6930%5Eps%5Esdiv.conditions%3Efont%3Afirst-child%7CS%7C202%2C2%7C4%7C_event_%7C1771909766663%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1771909766871%7C1771909766872%7Cdn%7C116%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1771909766663%7C_view_%7Csvn%7C%2FLoanIQ%2Fddrequest.jsp%7Csvt%7C1771909736936%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO="
		"192.168.1.2,$rId=RID_-754379583$rpId=1593631045$domR=1771909766870$tvn=%2FLoanIQ%2Fddrequest.jsp$tvt=1771909766663$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1771909766663e7f7g7h7i7k9l164m165o203p204q206r207s208t209u7367v7067w7067X200V1$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$title=LoanIQ%3A%20DDRequest$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109766846_275$v=10331260218130851$vID="
		"1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$time=1771909767950", 
		LAST);

	web_custom_request("rb_bf18472vnr_60", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=546534956&co=snappy&st=1771909768875&ss=0&qc=2101546082&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xDB\\x9B\\x01D{\"data_version\":2,\\x05\\x11\\xF4T\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909766840,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.2:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10331260218130851.js\",\"network.protocol.name\":\"\\x01p\\x08\",\".\\xCB\\x00(time_origin.\\x00\\x01\\x0466!\\x88"
		"(t.rum.schem=\\xA2\\x18\"0.23.0:I\\x00\\x00s2H\\x01\\x0C8.40\\x05\\x01\\x1895367436u\\x00$next_hop_p\r\\xA1\\x08\":\"\\x01\\x9C\\x0C/1.1:W\\x004domain_lookup_\\x05e\\x01\\xA8v`\\x0065\\x00\\x08end\\x863\\x00\\x18connect\\x9Eb\\x00\\x11/\\x92\\\\\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006\\x17\\x01\\x04reE)\\x11\\x1E\\x001z\\xE6\\x00\\x1Cresponse\\xC20\\x00\\x92\\xB5\\x00\\x10redir=\\x12B\\xAC\\x00\r\\x1F\\x05M:\\x1D\\x00\\x14worker\\x11\\x98:\\x1D\\x00\\x10fetch\\x11\\x1CN\\xE4\\x00A\n\\x15\\xDDAX,"
		"tus_code\":20:M\\x008render_blocking\\x01W\\x14tus\":\"\\x11\\x12:O\\x024first_interim_>B\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\">-\\x00\\x1Cdelivery\\x91\\x13\\x10cache:~\\x00\\x14transf!\\x1A\\x08izeBB\\x00\\x04en\\x01\\xE5\\x18d_body_\t\"\\x141268686&\\x02\\x04deB'\\x00 345597,\"rIA(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracE\\x9D\\x00te\\x96\\x19-\\x0Cset\"V\\xD2\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85\\xDF\\x8D5\\x18applicaA\\xEE\\x00.\\xA5{"
		"<ea7c4b59f27d43eb\\xBD\\xA8\\x10frame:\\xAA\\x05Df468939eb2c52f8a\",\\x15Z\\x10gent.\\xD504\"1.331.17.2026\\xA1\n\\x00-\\xA9\\x0B>2\\x00\\x08typ\\xC1*\\x1Cjavascri\\xA5\\xAF\r\\xAD\\x00b\\xCD1\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x19Y\t0\\x80MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-\\xA1+\rj\\x00i\\xCD\\x8F)\\x14\\x001\\xC9p\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,"
		"\\xF58\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03<\":1.25,\"page.url\\x9A\\x00\\x07\\x04ddQ\\xA4\\x04js\\xC5\\xB8\\x01?1B\\x00_%\\xACJ'\\x02\\x05&(detected_na\\xC5\\xFA\\x00/\\xEDSRS\\x00\\x0CtitlA\\x1B\t$\\x10: DDRiI\\x18\",\"view:t\\x00<1908a74e3da23a9d\\x11&\\xE6\\xD9\\x00\\x05e\\x96\\xB3\\x00\\x04},\\xFE\\x00\t\\xFE\\x00\tN\\x00\t\\x08imgZ+\\x04-\\xC2\\x91\\x1E\\xA6$\\x01Timages/Accounts.JPG\",\"\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\x0E\\xDA\\x08A\\xC9\\x04er\""
		"\r\n\\xFE\\xCD\\x08\\x0E\\xCD\\x08:S\\x00Z\\xC0\\x08:&\\x00\\x1AP\\x08\\xD1\\x90\\xE1KZ\"\\x00\\xE5\\xA4J \\x00\\xEA\\x99\\x08:j\\x00>J\\x07Jm\\x00\\x15#^\\x8E\\x00\\xFEr\\x08\\xA6r\\x08\\x045,\\xFEe\\x08\\x16e\\x08\\x0Cnon-\\xFEi\\x08\\xFEi\\x08\\xFEi\\x08\\x1Ai\\x08\\x08331:\\xFE\\x08Jh\\x08\r&"
		"m\\xD4Vg\\x08\\x14invali\\xA1\\x15\\x11'\\x00t\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08\\xFEa\\x08ra\\x08\\x0E\\xF5\t\\xFE^\\x08\\xFE^\\x08.^\\x08\\x006\\x127\\x11\\x1C023841866\\xFB\r\\xFEk\\x08\\x0Ek\\x08n`\\x00Zx\\x08n3\\x00J\\x85\\x08\\x8E/\\x00\"\\x04\\x08n-\\x00\\xEA\\x9F\\x08nW\\x00\""
		"\\x89\\x08*N\\x12\\x920\\x00\\x92\\xB5\\x00\\xFE\\xC6\\x08\\xA6\\xC6\\x08>\\xB4\\x00\\xFE8\\x11\\x128\\x11\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08*\\xD3\\x08\\x08033\\x8A\\xD3\\x08\t&\\x1E\\xAC\\x08R"
		":\\x11\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xBE\\xD3\\x08\\x18Billpay\\xFE3\\x11\\xFE3\\x11*3\\x11>\\xAB\\x06\\xFE@\\x11"
		">@\\x11n`\\x00\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08:\\xD5\\x08\\x0444\\x86\\x10\\x1A\\x001\t&"
		"\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x08\\xFE\\xD5\\x082\\xD5\\x08\\x0Ccard\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\xFE\\xA8\\x11\\"
		"xFE\\xA8\\x11\\xFE\\xA8\\x11V\\xA8\\x11\\x08430: &N{\\x1A\t&\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x08\\xFE\\xD3\\x082\\xD3\\x08\\x10Demat\\xFE\\xA6\\x11\\xFE\\xA6\\x11*\\xA6\\x11\\x007\\x16{\\x1A\\x184768372\\xFE{\\x1AF{\\x1An`\\x00Z\\xA6\\x11n3\\x00J{\\x1A\\x8E/\\x00\""
		"\\xC6\\x19n-\\x00\\xEA{\\x1AnW\\x00N{\\x1A\\x920\\x00\\x92\\xB5\\x00\\xFE{\\x1A\\xA6{\\x1A>\\xB4\\x00\\xFE{\\x1A\\xFE{\\x1A\\xFE{\\x1A\\xFE{\\x1A:{\\x1A\\x0C98796?\\x03J\\xD2\\x08\t"
		"%\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x08\\xFE\\xD1\\x082\\xD1\\x08\\x10logou\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08\\xFE\\xD2\\x08"
		"\\xFE\\xD2\\x08\\xFE\\xD2\\x08R\\xD2\\x08\\x0C1081\\x8A\\xA5\\x11\t&\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xFE\\xD4\\x08\\xB6\\xD4\\x08\\x00c:3=Dis_self_monitoring\\x1E=4J*\\x00\\x12\\xCA9\\x08nal\\x11#\\x12\\xD3)\\x0E\\x938\\x00e\\x0E\\xF3;\\x0471\\x1A\\xCE=\\x0458:\\xCE=\\x1A\\x8F7f\\xDB<\\x11!\\x08fm_*z>\\x0E."
		"=\\x10stamp6^\\x00\\x082,\"\\x0E\\x949\\x12\\xA0: 0,\"messag\\x0ER6\\x0E\\xE17 507651721\\x12\\xBC5ZB\\x00\\x003\\x1DB\\x003.B\\x00\\x18[\\\\\"OneA\\x0E\\xF48\\x14 JavaS\\x12\\xBB80 tag\\\\\",[]]\"}]&\\x1A9\\xFEt9\\xFEt9\\xFEt9\\xFEt9\\xFEt9\\xFEt9\\xFEt9\\xFEt9\\xFEt9\\xFEt9\\xFEt9\\xFEt9\\xFEt9\\xFEt9\\xF6t9\\x16tA\"tB\\x08208\\x0E\\xA96.+'\\x08ini6xB\\x10navig\\x0Eb;\\x00n\\xFE\\x7F9>\\x7F9>);\\xFEy9\\xFEy9:\\xCA-\\xFE\n1\\x007:\\xA0B:\\xEE\\x16J\\x8E\\x16z2\\x00"
		":\\x8D\\x16\\x9A.\\x00\\x12\\xD7\\x15z,\\x00\\xDA\\x8B\\x16\\x088.8\\x16\\xCF\\x17\\x1C715255746\\x91\\x14B\\x8A\\x16\\x0463>n\\x02\\x15#\\x05\\xA6\\x08164rg)\\xFE}\\x16\\x96}\\x16J,\\x01\\xFE|\\x16\\xFE|\\x16\\xAA|\\x16Je\\x01>7Bv2B\\x0C73676\\xC8\\x01J5B\\x0470>%\\x00J~\\x16\t%\\xFE\\xAA\r6\\xAA\r\\x12z?\\x16\\x16B\\xEA\r?>\\xE6\t\\x08has\\x12qB\\x99\\xEC\\x0E\\xE0\t\\x04in&sBN2\\x00\\x19.\\x1E\\x1B\n.I\\x05\\x1A\\x0CB\r%\\x0E\\x0EC.\\x1E\\x00\\x14unload\\x16\\xF8\t&"
		"%4\\x085.32Q\\x036\\x88\\x0124\\x00i1z2\\x00\\x08dom\\x16\\xBF\n\\x10activ\\x12=\n\\x082.9\tcR6G\\x011\\x1Ccontent_\\x01\\xA1\\x00e:\\xA3\\x00\\x0420B\\xC3\\x03b3\\x00\\x05\\xA2\\x08205>\\xF4\\x03\t1\\x10mplet\\x05\\x92\\x006:F\\x046\\xF5\\x00\\x01\\x866'\\x01\\x08207\\x9E2\\x00\r\\x83B\\xE5\\x06\\x95I\\x12\\xF9?\\x12&E-\\xA8\\x08ion1\\xBA\\x08har\\x0Ec<.\\x19\\x00\\x04ab!\\xAC\\x01\\xB7\\x14\"exist\\x0E9\\x0C\\x1A\\xC0A\\x00s\\x0E\\xCFA\\x0E\\x05J number\""
		":1\\xFE4\\x0B\\xFE4\\x0B\\xFE4\\x0B\\xFE4\\x0B\\xFE4\\x0B\\xFE4\\x0B\\xFE4\\x0B\\xFE4\\x0B\\xFE4\\x0B\\xFE4\\x0B\\xFE4\\x0B\\xFE4\\x0B\\xFE4\\x0B\\x864\\x0B\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_61", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=792127749&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2Fddrequest.jsp$tvt=1771909766663$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$rt="
		"1-1771909766663%3Bhttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FAccounts.JPG%7Cb179e0f0g0h0i0k0l0m0v13310w13310X200E1F2700O90P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FLoans.JPG%7Cb179e0f0g0h0i0k0l0m0v10330w10330X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FBillpay.JPG%7Cb179e0f0g0h0i0k0l0m0v10448w10448X200E1F2250O75P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fcards.JPG%7Cb179e0f0g0h0i0k0l0m0v14303w1430"
		"3X200E1F3000O100P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FDemat.JPG%7Cb179e0f0g0h0i0k0l0m0v9879w9879X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Flogout.JPG%7Cb179e0f0g0h0i0k0l0m0v10813w10813X200E1F2100O70P30Q652R127I7V1$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$title=LoanIQ%3A%20DDRequest$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109766846_275$v=10331260218130851$vID="
		"1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$time=1771909769976", 
		LAST);

	web_reg_find("Text=Accounts : DD Response", 
		LAST);

	web_submit_data("ddresponse.jsp", 
		"Action=http://192.168.1.2:7001/LoanIQ/ddresponse.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=payname", "Value=Deekshith2", ENDITEM, 
		"Name=paybank", "Value=Arabian Bank", ENDITEM, 
		"Name=ddamt", "Value=100", ENDITEM, 
		"Name=ddcomm", "Value=50", ENDITEM, 
		"Name=Submit", "Value=Submit", ENDITEM, 
		LAST);

	web_custom_request("rb_bf18472vnr_62", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=1413307447&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1771909770712%7C_wv_%7CAAI%7C1%7CfIS%7C3926%7CfID%7C2%2C1%7C7%7C_event_%7C1771909770852%7C_viewend_%7Cinp%7C0%7Csvn%7C%2FLoanIQ%2Fddrequest.jsp%7Csvt%7C1771909766663%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C8%7C_event_%7C1771909770852%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$rId=RID_-754379583$rpId=1593631045$domR=1771909766870$tvn=%2FLoanIQ%2Fddrequest.jsp$tvt=1771909766663$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh="
		"864$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$title=LoanIQ%3A%20DDRequest$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109766846_275$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp$time=1771909770853", 
		LAST);

	web_custom_request("rb_bf18472vnr_63", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=1204184259&co=snappy&st=1771909770856&ss=1&qc=460038720&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddrequest.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xB6'D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"view.fo\\x11?(_time\":4191\r\\x1C\\x0Cback\t[\r\\x1C\\\\0,\"error.http_4xx_count\":\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!\"8us\":\"reported\",\\x05\\x18)]:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x0C232,\\x05\\x10\\x1Cloading_\\x01S!u "
		"complete\"\t\\x1F\\x01\\x17>j\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-s\\x183925.5,\\x05O\\x08dur%%\\x0C\":24\t\\x12\\x04na!\\xB3,\"pointerdown\\x01\\x92$id.process\r\\xB4\\x08rt\"\\x01I\\x0C7.10\\x05\\x01\\x0C2384\\x01\\xDA6)\\x00\\x08endb'\\x00<cancelable\":true\t\\x7F8ui_element.tag_\r\\x8E\\x10INPUT\r\\x88\\x1D\"Lxpath\":[\"html\",\"body\\x01&\\x18orm\",\"t\\x05\\\\\\x08,\"t\r\\x17\\x10tr[5]\\x01\\x10!\\xB6<div\",\"input\"],\"f"
		":\\xA1\\x01\\x00prQ\\x01\\x00pR\\x87\\x01\\x04in\\x1D\\x184below_threshol\\x01r\\x04lc\\x1D\\x1F]@\\x01\\x186@\\x02\\x041,\\x05\\x15\\x04st9\\xB4E7\\x01*!\\xE8-\\xC8\\x000\r' ize\":7434\t\\x10\\x14render\r$\\x158=6=X\\x0CDIV\"\t6\\x1D \\xC2V\\x01\\x0022V\\x01,],\"long_task\\x01\\xC4I\\xC7\\x0Cnot_\\x1D\\xF5\\x0Cttfb\\x19\\x1D>\\x19\\x00m:\\x08163A\\xA8\\x05,\\x0CwaitA{Y\\xB1\\x087.4Ez\\x180953674aX\\x05*\\x10cache\\x1D(\\x040,\t\\x18\\x08dnsJ\\x16\\x00\\x14connec\\x85(\\x19"
		"[\\x113\\x18request\\x1D\\x1A\\x14156.09\\x05\\x01,0463257,\"perArA\\xCF\\x14.activeRa\\xD9\\x00r\\x89\\xC8\\x00v\\xA1\\x16<sequence_number\"!\\xE6\\x05\\x19\\x08pre2\\xB3\\x01X0,\"characteristics.has_\\x01,\\x1C_summaryq1\\x10navig\\x05n\\xA1\\x9F\\x01r\\x85K\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\x81h\\x08harA\\x8E.\\xB5\\x00\\xA1\\xA6\\\\_origin\":1771909766662,\".\\x85\\x02:\\x1B\\x0090\\x004\\xA5\\xE1,dt.rum.schem\\xDD\\x84 \"0.23.0\",\\x11!\\x14applic\t\\xB7Xid\":\"ea7c4b59f27d43eb\","
		"\\xD5v\\x10frame:x\\x06<f468939eb2c52f8a\\x1DZ\\x00g\\x818\\xD5\\xFE`\"1.331.17.20260218-130851>2\\x00-\\x1B$javascript\\x19!\\x00b\\xCD\\xFF\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"5\\x17\\x00i\\xED])\\x14-l\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orientaA\\xD0<\":\"landscape-priE9\\x15)$screen.wid\\xA1B\\x0C1536>\\x1B\\x00(height\":8649\\x90\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t"
		"\\xA6\\x1C_pixel_rA\\x03\\\\\":1.25,\"page.url.full\":\"\\xE1\\x83t://192.168.1.2:7001/LoanIQ/ddraP\\x18st.jsp\"\r?1B\\x00_%\\xACJ'\\x02\\x05e\\x1Cdetected\\xD1\\\\rS\\x00\\x08tit\\xC1\\xA0\\x00\"\tw\\x10: DDR\tx\\x00\"\\x1A\\xD1\\x086t\\x0081908a74e3da23a9ai\\x00va\\xFD\\x00u\\xE2\\xD9\\x00\\x05?\\x96\\xB3\\x00\\x04},\\xFE\\xCE\t:\\xCE\t%/&\r\n\\xCDSi\\xED\\x05\\x1C\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t"
		"\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xFE\\xCE\t\\xD2\\xCE\tN\\x9D\t\\xA1\\x0E\\x00_:\\x9D\t\\x01\\x14N\\xDD\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t\\xFE\\xB5\t:\\xB5\t\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_64", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=4068210344&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddresponse.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CSubmit%7CC%7C-%7C109766846_275%7C1771909770687%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp%7C%7C%7C%2FLoanIQ%2Fddrequest.jsp%7C1771909766663%2C1%7C1%7C_load_%7C_load_%7C-%7C1771909770692%7C0%7Cdn%7C67%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddrequest.jsp%2C2%7C3%7C_event_%7C1771909770692%7C_vc_%7CV%7C191%5Epf%7CVCD%7C7%7CVCDS%7C0%7CVCS%7C196%7CVCO%7C196%7CVCI%7C0%7CTS%7C1%7CVE%7C1450%5Ep122%5Ep2"
		"100%5Eps%5Estd%3Anth-of-type%286%29%3Ediv%3Afirst-child%3Ea%3Afirst-child%3Eimg%3Afirst-child%7CS%7C190%2C2%7C4%7C_event_%7C1771909770692%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-5%7Cfp%7C-5%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1771909770692%7C0%7Cdn%7C67%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1771909770692%7C_view_%7Csvn%7C%2FLoanIQ%2Fddrequest.jsp%7Csvt%7C1771909766663%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO="
		"192.168.1.2,$rId=RID_-614693249$rpId=-690805705$domR=1771909770883$tvn=%2FLoanIQ%2Fddresponse.jsp$tvt=1771909770692$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1771909770692e10f10g10h10i10k11l154m155r191u4194v3894w3894X200V1$ni=4g|1.45$egf=1589PRTUX$rt="
		"1-1771909770692%3Bhttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FAccounts.JPG%7Cb169e0f0g0h0i0k0l0m0v13310w13310X200E1F2700O90P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FLoans.JPG%7Cb169e0f0g0h0i0k0l0m0v10330w10330X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FBillpay.JPG%7Cb169e0f0g0h0i0k0l0m0v10448w10448X200E1F2250O75P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fcards.JPG%7Cb169e0f0g0h0i0k0l0m0v14303w1430"
		"3X200E1F3000O100P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FDemat.JPG%7Cb169e0f0g0h0i0k0l0m0v9879w9879X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Flogout.JPG%7Cb169e0f0g0h0i0k0l0m0v10813w10813X200E2F2100O70P30Q652R127I7V1$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponse.jsp$title=Accounts%20%3A%20DD%20Response$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109770866_276$v="
		"10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponse.jsp$time=1771909770898", 
		LAST);

	web_reg_find("Text=LoanIQ:ddresponseresult", 
		LAST);

	web_submit_data("ddresponseresult.jsp", 
		"Action=http://192.168.1.2:7001/LoanIQ/ddresponseresult.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddresponse.jsp", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=tid", "Value=56642", ENDITEM, 
		LAST);

	web_custom_request("rb_bf18472vnr_65", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=940664891&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddresponse.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1771909771770%7C_viewend_%7Cinp%7C0%7Csvn%7C%2FLoanIQ%2Fddresponse.jsp%7Csvt%7C1771909770692%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C7%7C_event_%7C1771909771770%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponse.jsp$rId=RID_-614693249$rpId=-690805705$domR=1771909770883$tvn=%2FLoanIQ%2Fddresponse.jsp$tvt=1771909770692$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url="
		"http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponse.jsp$title=Accounts%20%3A%20DD%20Response$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109770866_276$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponse.jsp$time=1771909771771", 
		LAST);

	web_custom_request("rb_bf18472vnr_66", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=1328579746&co=snappy&st=1771909771775&ss=1&qc=2957011122&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddresponse.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xDE\\x9B\\x01D{\"data_version\":2,\\x05\\x11\\xF4T\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909770860,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.2:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10331260218130851.js\",\"network.protocol.name\":\"\\x01p\\x08\",\".\\xCB\\x00(time_origin.\\x00\\x01\\x0469!\\x88"
		"(t.rum.schem=\\xA2\\x18\"0.23.0:I\\x00\\x00s.H\\x01\\x1068.89\\x05\\x01\\x1876158146u\\x00$next_hop_p\r\\xA1\\x08\":\"\\x01\\x9C\\x0C/1.1:W\\x004domain_lookup_\\x05e\\x04\":~`\\x0065\\x00\\x08end\\x863\\x00\\x18connect\\x9Eb\\x00\\x11/\\x92\\\\\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006\\x17\\x01\\x04reE)\\x11\\x1E~\\xE6\\x00\\x1Cresponse\\xC20\\x00\\x92\\xB5\\x00\\x10redir=\\x12B\\xAC\\x00\r\\x1F\\x05M:\\x1D\\x00\\x14worker\\x11\\x98:\\x1D\\x00\\x10fetch\\x11\\x1CN\\xE4\\x00A\n\\x15\\xDDAX,"
		"tus_code\":20:M\\x008render_blocking\\x01W\\x14tus\":\"\\x11\\x12:O\\x024first_interim_>B\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\">-\\x00\\x1Cdelivery\\x91\\x13\\x10cache:~\\x00\\x14transf!\\x1A\\x08izeBB\\x00\\x04en\\x01\\xE5\\x18d_body_\t\"\\x141268686&\\x02\\x04deB'\\x00 345597,\"rIA(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracE\\x9D\\x00te\\x96\\x19-\\x0Cset\"V\\xD2\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85\\xDF\\x8D5\\x18applicaA\\xEE\\x00.\\xA5{"
		"<ea7c4b59f27d43eb\\xBD\\xA8\\x10frame:\\xAA\\x058d6a2038b1c0ada0\\x01/\\x11Z\\x10gent.\\xD504\"1.331.17.2026\\xA1\n\\x00-\\xA9\\x0B\\x04\",62\\x00\\x08typ\\xC1*\\x1Cjavascri\\xA5\\xAF\rS\\x00b\\xCD1\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x19Y\t0\\x80MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-\\xA1+\rj\\x00i\\xCD\\x8F)\\x14\\x001\\xC9p\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,"
		"\\xF58\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03<\":1.25,\"page.url\\x9A\\x00\\x07\\x04ddq\\xA1\\x08.js\\xC5\\xB9\\x01@1C\\x00_%\\xADJ(\\x02\\x05&(detected_na\\xC5\\xFB\\x00/\\xEDTVT\\x00\\x0CtitlA\\x1D8Accounts : DD R\\xADa\\x18\",\"view:z\\x00<594d63362f832e16\\x11&\\xEA\\xE0\\x00\\x05f\\x9A\\xBA\\x00\\x04},\\xFE\t\t\\x9A\t\t\\x001\\xAE\t\t\\x08imgZ4\\x04\\x8Do\\x91'\\xA6&\\x01\\x18images/1\\x9B\\x18.JPG\",\""
		"\\xFE\\xE3\\x08\\xEE\\xE3\\x08\\x16\\xE3\\x08\\x0096\\x97\\x05\\xEE\\xD4\\x08\\x16\\xD4\\x08:Q\\x00R\\xC5\\x08:$\\x00\\x1AS\\x08\\xD1\\x93\\x001^ \\x00\\xE5\\xA5B\\x1E\\x00\\xE2\\x98\\x08:\\x86\\x00q\\xA6b\\x87\\x00\\x15!V\\x88\\x00\\xFEk\\x08\\x9Ek\\x08\\x049,\\xFE\\\\\\x08\\x16\\\\\\x08\\x0Cnon-\\xFE`\\x08\\xFE`\\x08\\xFE`\\x08\\x1A`\\x08\\x08331:\\xF5\\x08J_\\x08\r&m\\xC2V^\\x08\\x1Cinvalid\"&"
		"\\x85\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\xFEX\\x08\\x9AX\\x08\\x0E\\x18\n\\xFEU\\x08\\xFEU\\x08*U\\x08\\x04.0\\x127\\x11\\x1C90463257\\xFEd\\x08Bd\\x08r`\\x00Vs\\x08r3\\x00F\\x82\\x08\\x92/\\x00\\x1E\t\\x08r-\\x00\\xE6\\xA0\\x08rW\\x00\"\\x8E\\x08\""
		"N\\x12\\x9A0\\x00\\x92\\xB5\\x00\\xFE\\xCD\\x08\\xA2\\xCD\\x08B\\xE4\\x00\\xFE8\\x11\\x128\\x11\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08*\\xDC\\x08\\x08033\\x8A\\xDC\\x08\t&\\x04re\\x12{\\x13\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08"
		":\\xDC\\x08\\x18Billpay\\xFE3\\x11\\xFE3\\x11&3\\x11\\x04.1\\x16\\xDE\\x08\\x182847443\\xFE\\xDE\\x08F\\xDE\\x08n`\\x00Z\\xDE\\x08n3\\x00J\\xDE\\x08\\x8E/\\x00\")\\x08n-\\x00\\xEA\\xDE\\x08nW\\x00N\\xDE\\x08\\x920\\x00\\x92\\xB5\\x00\\xFE\\xDE\\x08\\xA6\\xDE\\x08>\\xB4\\x00\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08B\\xDE\\x08\\x0444\\x86\\x19\\x1A\\x001\t&"
		"\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08\\xFE\\xDE\\x08V\\xDE\\x08\\x0Ccard\\xFE\\xBA\\x11\\xFE\\xBA\\x11.\\xBA\\x11\\x002\\x16\\xDC\\x08\\x1052316\\x0E3\\x1D.g#\\xEE\\x1E\\x1A\\x1A\\x1E\\x1Ar`\\x00Z\\xDC\\x08n\\x93\\x00J\\xDC\\x08\\x8E/\\x00\""
		"'\\x08n-\\x00\\xEA\\xDC\\x08nW\\x00N\\xDC\\x08\\x920\\x00\\x92\\xB5\\x00\\xFE\\xDC\\x08\\xA6\\xDC\\x08>\\xB4\\x00\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08>\\xDC\\x08\\x08430:\\x1C\\x0CN\\x96\\x1A\t&"
		"\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08V\\xDC\\x08\\x10Demat\\xFE\\xB8\\x11\\xFE\\xB8\\x11*\\xB8\\x11"
		">\\xB2\\x06\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xFE\\xDC\\x08\\xE2\\xDC\\x08\\x08987:>%J\\xDB\\x08\t"
		"%\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08\\xFE\\xDA\\x08V\\xDA\\x08\\x10logou\\xFE\\xDB\\x08\\xFE\\xDB\\x08.\\xDB\\x08\\x003\\x16\\xB7\\x11\\xFE\\xA94Z\\xA94\\x009r`\\x00Z\\xB7\\x11n\\x93\\x00J\\xB7\\x11\\x8E/\\x00\""
		"\\x02\\x11n-\\x00\\xEA\\xB7\\x11nW\\x00N\\xB7\\x11\\x920\\x00\\x92\\xB5\\x00\\xFE\\xB7\\x11\\xA6\\xB7\\x11>\\xB4\\x00\\xFE\\xB7\\x11\\xFE\\xB7\\x11\\xFE\\xB7\\x11\\xFE\\xB7\\x11>\\xB7\\x11\\x08081\\x8A\\xB7\\x11\t&\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xFE\\xDD\\x08\\xDA\\xDD\\x08\\x00c:`="
		"Dis_self_monitoring\\x1Ea4J*\\x00\\x12\\xF79\\x08nal\\x11#\\x12\\x00*\\x0E\\xC08\\x00e.\\xFB<\\x08877:\\xF24\\x1A\\xBC7f\\x08=\\x11!\\x08fm_*\\xA7>\\x0E[=\\x10stamp6^\\x00\\x083,\"\\x0E\\xC19\\x12\\xCD: 0,\"messag\\x0E}6\\x0E\\x0E8 507651721\\x12\\xE05\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E!9\\x14 JavaS\\x12\\xE880 tag\\\\\",[]]\"}]&"
		"\\x159\\xFE\\xA19\\xFE\\xA19\\xFE\\xA19\\xFE\\xA19\\xFE\\xA19\\xFE\\xA19\\xFE\\xA19\\xFE\\xA19\\xFE\\xA19\\xFE\\xA19\\xFE\\xA19\\xFE\\xA19\\xFE\\xA19\\xFE\\xA19\\xFE\\xA19\\x1A\\xA19\\x006\\x12\\xAAA\"\\xAAB\\x0410>`\\x12B\\xADB\\x10navig\\x0E\\x97;\\x00n\\xFE\\xAB9>\\xAB9B];\\xFE\\xA69\\xFE\\xA69:\\x00.\\xFE\\x86\\x1F\\x089.7\\x16-\\x0E\\x1A\\xE4\\x1F:\\xD7BJ\\xCE\rz2\\x00:\\xCD\r\\x9A.\\x00\\x12\\x17\rz,\\x00\\xDE\\xCB\r\\x0016W0\\x006:d&B\\xCB\r\\x0853.\\x0E\\xD9=\\x04er\""
		"\\x1DE\\x15#\\x05\\xA7\\x0415B\\x1F\\x00\\x1A9B\\xE5~B\\x05A\"\\xCE\r\\x05>:\\xC0\\x01\\xA6XBJ\\x1E\\x01\\xFE\\xAE\r\\xFE\\xAE\r\\xAA\\xAE\rJV\\x01>_BvZB\\x08419:\\x9C\\x02J]B\\x0438>%\\x00J\\x8B\\x16\t%\\x00r\\xFE\\x1F12\\x1F1\\x12\\xA1?\\x16>B\\xBA.?\\x16\\xA51\\x16\r@>\\xE1\t\\x08has\\x12\\x99B\\x99\\xDF\\x0E\\xDB\t\\x04in&\\x9BBN2\\x00\\x19.\\x1E\\x16\n.\\xCC\\x02\\x1A4B\r%\\x0E\t@.\\x1E\\x00\\x14unload\\x16\\xF3\tQ\\xCF\\x08165:%\\x046\\xE5,24\\x00E\\xE4~2\\x00\\x08dom\\x16\\xBA\n"
		"\\x10activF7D\\x01 \\x1Ccontent_\\x01\\x90\\x00e:\\x92\\x00:D\\x03b/\\x00\\x05\\x8DR-\\x00\\x10mplet\\x0E$\\x0B\\x0491B\\x04\\x11.\\x10\\x01\\x01~6\\x0E\\x01:O\\x00\\x1D!Nn\\x00u\\xFC\\x12\\x85A\\x85\\x1B-z\\x08ion1\\x8C\\x08har\\x0Ef<.\\x19\\x00\\x04ab!~\\x01\\xA2\\x14\"exist\\x0E\\x06\\x0C\\x1A\\xB3A\\x00sA3\\x0E\\xFFI\\x1Cnumber\""
		":\\x0E\\xCE@\\x16\\xD7H\\xFE\\x01\\x0B\\xFE\\x01\\x0B\\xFE\\x01\\x0B\\xFE\\x01\\x0B\\xFE\\x01\\x0B\\xFE\\x01\\x0B\\xFE\\x01\\x0B\\xFE\\x01\\x0B\\xFE\\x01\\x0B\\xFE\\x01\\x0B\\xFE\\x01\\x0B\\xFE\\x01\\x0B\\xFE\\x01\\x0B\\x86\\x01\\x0B\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_67", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=451985867&co=snappy&st=1771909771777&ss=1&qc=3356511715&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddresponse.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xE6\"D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"view.fo\\x11?(_time\":1083\r\\x1C\\x0Cback\t[\r\\x1C\\\\0,\"error.http_4xx_count\":\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!\"8us\":\"reported\",\\x05\\x18)]:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x0C220,\\x05\\x10\\x1Cloading_\\x01S!u"
		"<dom_interactive\"\t&\\x01\\x1E>q\\x00\\x08fid\\x19\\x18\\x0Cnot_\\x1D\\x8D\\x00f:i\\x00\\x00p\\x8Eh\\x00\\x00p\\x19O\\x1DK\\x04in\\x1D\\x184below_threshol\\x01\\xF7\\x04lc\\x1D\\x1F\\x1D7\\x01\\x186\\x0F\\x01\\x041,\\x05\\x15\\x10start-\\xF6%\\x06\\x01*!\\x06\r\\x14\\x000\r' ize\":4435\t\\x10\\x14render\r$\\x158@ui_element.tag_naAh\\x10\"DIV\"\t6\\x1D 0xpath\":[\"htmlA\\xD1\\x08ody!^(orm\",\"table\\x01\\x08\r\\x17\\x10tr[2]\\x01\\x10\\x01\\xE4<div\"],\"long_task\\x01\\xC4)\\x8F"
		":w\\x01\\x0Cttfb\\x19\\x1D=\\x0E\\x05\\x19M\t\\x14153.5,\t\\x13\\x0Cwait!\\xFE\\x08durE\\xA5\\x14\":9.79\\x05\\x01\\x1C52316284\r*\\x10cache\\x1D(\\x000\r\\x18\\x08dnsJ\\x16\\x00\\x14connecE\\xF7\\x19[\\x113\\x18request\\x1D\\x1A\\x14143.70\\x05\\x01,4768372,\"per!\\x1C\\x10ance.E\\x8C\\x05\\xA1\\x00_%\\xBFE\\xCE\\x00va\\xE5\\x00s\\x01L(nce_number\"!\\xE6\\x05\\x19\\x08pre2\\xB3\\x01\\x140,\"chaA\\xD60eristics.has_\\x01,P_summary\":true,\"navig\\x05n\\x81n\\x01re\\x1A\\x04ex\\x018\\x08ng\"6\""
		"\\x00\\x04ypa7\\x08har!\\xAA.\\xB5\\x00\\x81u\\\\_origin\":1771909770692,\"\\x05\\xC6MM:\\x1B\\x0090\\x89\\xB0,dt.rum.schem\\xBDS \"0.23.0\",\\x11!\\x14applic\t\\xB7Pid\":\"ea7c4b59f27d43ebAt\\xADE\\x10frame:G\\x058d6a2038b1c0ada0\\x01/\r{\\x04agA\\xE0\\xB5\\xCD`\"1.331.17.20260218-130851\\x1D\\x8C\\x052-\\x1B$javascript\\x19!\\x11\\x89\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"5\\x17\\x00i\\xCD,)"
		"\\x14-l\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orientaA\\xD0<\":\"landscape-priE9\\x15)$screen.wida\\xEC\\x0C1536>\\x1B\\x00,height\":864,\\xD5\\xD5\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t\\xA6\\x1C_pixel_rA\\x03\\\\\":1.25,\"page.url.full\":\"\\xC1R\\xA8://192.168.1.2:7001/LoanIQ/ddresponse.jsp\",\t@1C\\x00_%\\xADJ(\\x02\\x05f\\x1Cdetected\\xB1\\x05vT\\x00\\x0Ctitla8\\x04Ac\\xE5h\\x1Cs : DD R\r~\\x00\"\\xED\\xA76z\\x00<594d63362f832e16\\x11&"
		"\\x00u\\xE6\\xE0\\x00\\x00v\\x81D\\x9A\\xBA\\x00\\x04},\\xFE\\xA6\\x08:\\xA6\\x08%7&\\xE5\\x08\\x91\\x0F\\x000\\xA1t\\x05\\x1C\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\xFE\\xA6\\x08\\x0E\\xA6\\x08Nu\\x08a\\xDD\\x00_"
		":u\\x08\\x01\\x14N\\xB5\\x08\\xFE\\x8D\\x08\\xFE\\x8D\\x08*\\x8D\\x08\\x004\\xF5U\\xFE\\x8D\\x08\\xFE\\x8D\\x08\\xFE\\x8D\\x08\\xFE\\x8D\\x08\\xFE\\x8D\\x08\\xFE\\x8D\\x08\\xFE\\x8D\\x08\\xFE\\x8D\\x08\\xFE\\x8D\\x08\\xFE\\x8D\\x08\\xFE\\x8D\\x08\\xFE\\x8D\\x08\\xFE\\x8D\\x08\\xEE\\x8D\\x08\\x1A\\x8D\\x08\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_68", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=2842125696&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddresponseresult.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"s%7C2%7C_onload_%7C_load_%7C-%7C109770866_276%7C1771909770692%7C%7C%2FLoanIQ%2Fddresponse.jsp%7C1771909770692%2C1%7C1%7C_load_%7C_load_%7C-%7C1771909770900%7C1771909771801%7Cdn%7C79%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponse.jsp%2C2%7C3%7C_event_%7C1771909770900%7C_vc_%7CV%7C897%5Epc%7CVCD%7C1028%7CVCDS%7C1%7CVCS%7C953%7CVCO%7C1962%7CVCI%7C0%7CTS%7C1%7CVE%7C421%5Ep413%5Ep6930%5Eps%5Esdiv.conditions%3Efont%3Afir"
		"st-child%7CS%7C897%2C2%7C4%7C_event_%7C1771909770900%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1771909771801%7C1771909771801%7Cdn%7C79%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1771909770900%7C_view_%7Csvn%7C%2FLoanIQ%2Fddresponse.jsp%7Csvt%7C1771909770692%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$dO=192.168.1.2,$rId=RID_-69831870$rpId=1311953555$domR=1771909771800$tvn="
		"%2FLoanIQ%2Fddresponseresult.jsp$tvt=1771909770900$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1771909770900e8f8g8h10i10k11l868m868o897p897q898r900s901t901u4216v3916w3916X200V1$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponseresult.jsp$title=LoanIQ%3Addresponseresult$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109771784_333$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf="
		"http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponseresult.jsp$time=1771909772884", 
		LAST);

	web_custom_request("rb_bf18472vnr_69", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=1067892178&co=snappy&st=1771909773812&ss=0&qc=3440790665&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddresponseresult.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\x8F\\x9F\\x01D{\"data_version\":2,\\x05\\x11\\xF4T\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909771779,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.2:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10331260218130851.js\",\"network.protocol.name\":\"\\x01p\\x08\",\".\\xCB\\x00(time_origin=\\x00D0899,\""
		"dt.rum.schem=\\xA2\\x18\"0.23.0:I\\x00\\x00s=H\\x14880.10\\x05\\x01\\x142384196t\\x00$next_hop_p\r\\xA0\\x08\":\"\\x01\\x9B\\x0C/1.1:V\\x004domain_lookup_\\x05d\\x00\"~_\\x0064\\x00\\x08end\\x822\\x00\\x18connect\\x9A`\\x00\\x11.\\x8EZ\\x00\\x18secure_\r3\\x08ion\\x11d\\x0006\\x13\\x01\\x04reE$\\x11\\x1EzA\\x01\\x1Cresponse\\xBE/\\x00\\x8E\\xB2\\x00\\x10redir=\rB\\xA9\\x00\r\\x1F\\x05L:\\x1D\\x00\\x14worker\\x11\\x96:\\x1D\\x00\\x10fetch\\x11\\x1CJ\\xE1\\x00A\\x02\\x15\\xDAAO,tus_code\":20"
		":L\\x008render_blocking\\x01V\\x14tus\":\"\\x11\\x12:G\\x024first_interim_>?\\x01:]\\x00\\x10final\\x19%\\x18headers\\x01d\\x08rt\">-\\x00\\x1Cdelivery\\x91\n\\x10cache:~\\x00\\x14transf!\\x19\\x08izeBB\\x00\\x04en\\x01\\xE5\\x18d_body_\t\"\\x141268686\"\\x02\\x04deB'\\x00 345597,\"rI=(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracE\\x99\\x00te\\x8E\\x19-\\x0Cset\"V\\xC9\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85\\xD6\\x8D,\\x18applicaA\\xEA\\x00.\\xA5r"
		"<ea7c4b59f27d43eb\\xBD\\x9F\\x10frame:\\xA1\\x0589171de27dc5b470\\x01\\xB1\\x11Z\\x10gent.\\xD5'4\"1.331.17.2026\\xA1\\x01\\x00-\\xA9\\x02\\x00\"\\x95\\xB8\t2\\x08typ\\xC1!\\x1Cjavascri\\xA5\\xA6\rS\\x00b\\xCD(\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x19Y\t0\\x80MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-\\xA1\"\rj\\x00i\\xCD\\x86)\\x14\\x001\\xC9g\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r"
		"\\x1B\\x10heigh\\xA1J\\x0864,\\xF5/\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03<\":1.25,\"page.url\\x9A\\xF7\\x06\\x04ddq\\xA1 result.js\\xC5\\xB6\\x01F1I\\x00_%\\xB3J.\\x02\\x05&(detected_na\\xC5\\xF8\\x00/\\xEDQnZ\\x00\\x0CtitlA)\t+\\x00:>+\\x00\\x18\",\"view:\\x81\\x00<720689e4304c689d\\x11&\\xEE\\xED\\x00\\x05\\xED\\x05l\\xB2\\xC7\\x00\\x04},\\xFE\\x19\t\\xFE\\x19\tN\\x19\t\\x08imgZM\\x04\\x8D\\x88\\x91@\\xA62\\x01Timages/Accounts.JPG\",\""
		"\\xFE\\xF3\\x08\\xFE\\xF3\\x08\\x0E\\xF3\\x08\\x002\\x12\\xF2\\x08\\x1804768376\\xBE\\x05\\xFE\\xF3\\x08\\x0E\\xF3\\x08j_\\x00Z\\xF3\\x08j2\\x00\\x1A\\x92\\x08\\xD1\\xD6\\xE1\\x90\\x8A.\\x00\\xE5\\xF5z,\\x00\\xEA\\xF3\\x08j\\x82\\x00\\x91\\x13\\x9A\\xB1\\x00\\x15/\\x8E\\xB2\\x00\\xFE\\xF3\\x08\\xA6\\xF3\\x08:\\xE1\\x00\\xFE\\xF3\\x08\\x12\\xF3\\x08\\x0Cnon-\\xFE\\xF7\\x08\\xFE\\xF7\\x08\\xFE\\xF7\\x08\\x1A\\xF7\\x08\\x08331:\\x8C\tJ\\xF6\\x08\r&"
		"\\x8D@V\\xF5\\x08\\x14invali\\xA1\\x8F\\x11'\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\xFE\\xEF\\x08\\x0E\\x97\n\\xFE\\xEC\\x08\\xFE\\xEC\\x082\\xEC\\x08\\x009\\x05\\x01\\x14523163\\xFE\\xEC\\x08J\\xEC\\x08\\x05^R_\\x00^\\xEC\\x08f2\\x00N\\xEC\\x08\\x86.\\x00&:\\x08f,"
		"\\x00\\xEE\\xEC\\x08fV\\x00\"\\xBD\\x08*\\xF0\\x12\\x8E/\\x00\\x8E\\xB2\\x00\\xFE\\xEC\\x08\\xAA\\xEC\\x086\\xE1\\x00\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08>\\xEC\\x08\\x08033\\x8A\\xEC\\x08\t&"
		"\\x1E\\xC5\\x08R\\xE1\\x11\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08F\\xEC\\x08\\x18Billpay\\xFE\\xDA\\x11\\xFE\\xDA\\x11.\\xDA\\x116\\xCC\\x06.A\\x1B\\xFE\\xDA\\x11\\x12\\xDA\\x11f_\\x00\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\"
		"x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\x1E\\xEE\\x08\\x0444\\x86\\xD0\\x1A\\x001\t&"
		"\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xFE\\xEE\\x08\\xBA\\xEE\\x08\\x0Ccard\\xFE\\xDA\\x11\\xFE\\xDA\\x11\\xFE\\xDA\\x11\\xFE\\xDA\\x11\\xFE\\xDA\\x11\\xFE\\xDA\\x11\\xFE\\xDA\\x11\\xFE\\xDA\\x11\\xFE\\xDA\\x11\\xFE\\xDA\\x11\\xFE\\xDA\\x11\\xFE\\xDA\\x11\\xFE\\xDA\\x"
		"11\\xFE\\xDA\\x11\\xFE\\xDA\\x112\\xDA\\x11\\x08430:\\x12\\x15N\\xC6\\x1A\t&"
		"\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xFE\\xEC\\x08\\xBA\\xEC\\x08\\x10Demat\\xFE\\xD8\\x11\\xFE\\xD8\\x11*\\xD8\\x11\\x003\\x16y\\x11\\x14761581\\xFE\\xC6\\x1AF\\xC6\\x1Aj_\\x00Z\\xD8\\x11j2\\x00J\\xC6\\x1A\\x8A.\\x00\"\\x14\\x1Aj,"
		"\\x00\\xEA\\xC6\\x1AjV\\x00N\\xC6\\x1A\\x8E/\\x00\\x8E\\xB2\\x00\\xFE\\xC6\\x1A\\xA6\\xC6\\x1A:\\xB2\\x00\\xFE\\xC6\\x1A\\xFE\\xC6\\x1A\\xFE\\xC6\\x1A\\xFE\\xC6\\x1A:\\xC6\\x1A\\x08987:\\xDC/J\\xEB\\x08\t"
		"%\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xFE\\xEA\\x08\\xBA\\xEA\\x08\\x10logou\\xFE\\xEB\\x08\\xFE\\xEB\\x08\\xFE\\xEB\\x08\\xFE\\xEB\\x08\\xFE\\xEB\\x08\\xFE\\xEB\\x08\\xFE\\xEB\\x08\\xFE\\xEB\\x08\\xFE\\xEB\\x08\\xFE\\xEB\\x08\\xFE\\xEB\\x08\\xFE\\xEB\\x08\\xFE\\xEB"
		"\\x08\\xFE\\xEB\\x08\\xFE\\xEB\\x08.\\xEB\\x08\\x0C1081\\x8A\\xD7\\x11\t&\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08\\xFE\\xED\\x08>\\xED\\x08\\x00c:W>Dis_self_monitoring\\x1EH5J*\\x00\\x12\\xF7:\\x08nal\\x11#\\x12V*\\x0E\\xC09\\x00e*\\xF2=\\x08179\\x0Ez?.\\xF2>\\x1A\\xBC8f\\xFF=\\x11!\\x08fm_*\\x9E?"
		"\\x0ER>\\x10stamp2^\\x00\\x0C89,\"\\x0E\\xC1:\\x12\\xCD; 0,\"messag\\x0Eq7\\x0E\\x0E9 507651721\\x12\\xC76\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x0E!:\\x14 JavaS\\x12\\xE890 tag\\\\\",[]]\"}]&\\x15:\\xFE\\xA1:\\xFE\\xA1:\\xFE\\xA1:\\xFE\\xA1:\\xFE\\xA1:\\xFE\\xA1:\\xFE\\xA1:\\xFE\\xA1:\\xFE\\xA1:\\xFE\\xA1:\\xFE\\xA1:\\xFE\\xA1:\\xFE\\xA1:\\xFE\\xA1:\\xFE\\xA1:z\\xA1:\\x1A\\xBAB\\x95\\xC8\\x10900.8f\\xE6\\x15B\\xCAC\\x10navig\\x0E\\xBD<\\x00n\\xFE\\xB8:>\\xB8:>R<\\x1A\\xD7<\\xFE\\xB9:\\xFE\\xB9"
		"::\\x85.\\xEE\\xCF(\\x12\\xCF(2\\xF9C\\x0485>\\xF6%2\\xD0C\\x16\\xEB\\x15v2\\x00:\\xF7\\x16\\x089.6\\x16f;\\x12YDB`\\x00\\x11.\\x05Z\\x04106\\xBF\\x15\\x04426\\xE3\\x17\\xDA\\xF8\\x16\\x0410v\\x84\\x00B\\xF9\\x16\\x0C67.7I\\x83N/3\\x15/\\x05\\xB4\\x008\\x0E\\x08F\\x1D\\xE2:_\\x15\\xFE\\xF9\\x16\\x9A\\xF9\\x16F\\x93\\x01\\xFE\\xF9\\x16\\xFE\\xF9\\x16\\xAA\\xF9\\x16zp\\x01>\\xB2Cv\\xADC\\x0C421666\\x02J\\xB0C\\x0439>%\\x00J\\x07\\x17\t"
		"%\\xFE\\x1A\\x0E6\\x1A\\x0E\\x12\\xEE@\\x16\\x91C\\xD2t@\\x8D\\x84>5\n\\x08has\\x12\\xEDC\\xB9\r\\x0E/\n\\x04in&\\xEFCN2\\x00\\x19.\\x1Ej\n.(-\\x1A\\x88C\r%\\x0E\\xD9C.\\x1E\\x00\\x14unload\\x16G\n\"\\xF74\\x0478n\\xF7423\\x00i<v1\\x00\\x08dom\\x16\\x0C\\x0B(active\":8962\\xCA\\x03:l\\x03\\x010\\x1Ccontent_\\x01\\x9E\\x00e>\\xA0\\x00\\x0496n\\xD8\\x03b?\\x00\t\\xAC\\x009r\\x15\\x04\t=\\x10mplet\\x05\\xA9\\x009nj\\x00\\x01\\x9D6;\\x01\\xC1\\xF6js\\x04\\x1D1\\x05\\x8D\\x01/"
		"j%\\x07\\x95u\\x12rA\\x12\\xC1F-\\xC7\\x08ion1\\xD9\\x08har\\x0Ep=.\\x19\\x00\\x04ab!\\xCB\\x01\\xC1\\x14\"exist\\x0E\\xA7\\x0C\\x1AGC\\x00s\\x0E\\xB3F\\x0E\\x97K number\":1\\xFE\\xA2\\x0B\\xFE\\xA2\\x0B\\xFE\\xA2\\x0B\\xFE\\xA2\\x0B\\xFE\\xA2\\x0B\\xFE\\xA2\\x0B\\xFE\\xA2\\x0B\\xFE\\xA2\\x0B\\xFE\\xA2\\x0B\\xFE\\xA2\\x0B\\xFE\\xA2\\x0B\\xFE\\xA2\\x0B\\xFE\\xA2\\x0B\\xFE\\xA2\\x0B\\x0E\\xA2\\x0B\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_70", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=4166058493&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddresponseresult.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2FLoanIQ%2Fddresponseresult.jsp$tvt=1771909770900$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$rt="
		"1-1771909770900%3Bhttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FAccounts.JPG%7Cb880e0f0g0h0i0k0l0m0v13310w13310X200E1F2700O90P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FLoans.JPG%7Cb880e0f0g0h0i0k0l0m0v10330w10330X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FBillpay.JPG%7Cb880e0f0g0h0i0k0l0m0v10448w10448X200E1F2250O75P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Fcards.JPG%7Cb880e0f0g0h0i0k0l0m0v14303w1430"
		"3X200E1F3000O100P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2FDemat.JPG%7Cb880e0f0g0h0i0k0l0m0v9879w9879X200E1F2100O70P30Q652R127I7V1%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fimages%2Flogout.JPG%7Cb880e0f0g0h0i0k0l0m0v10813w10813X200E1F2100O70P30Q652R127I7V1$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponseresult.jsp$title=LoanIQ%3Addresponseresult$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109771784_333$v=10331260218130851$vID="
		"1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponseresult.jsp$time=1771909774918", 
		LAST);

	lr_end_transaction("AB_DDRequest_T07_SubmitPayee",LR_AUTO);

	lr_think_time(10);

	web_custom_request("rb_bf18472vnr_71", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=1&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=3785455063&co=snappy&st=1771909785086&ss=1&qc=4273516405&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddresponseresult.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xBF\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"background\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909785083,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(70899,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D9171de27dc5b470e\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x001)W\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\xF0L\":1.25,\""
		"page.url.full\":\"http://192.168.1.2:7001/LoanIQ/ddresponseresult.jsp\",\tF1I\\x00_%\\xB3J.\\x02\\x05l,detected_nam!\\xFD\\x8EZ\\x00\\x0Ctitl\\x01,\\x00L\\x05\\x85\\x00:>\\x85\\x00\\x18\",\"view:\\x81\\x00<720689e4304c689d\\x11&\\xEE\\xED\\x00\\x05\\xED\\x05l\\xB2\\xC7\\x00\\x0C}]}}", 
		LAST);

	lr_think_time(7);

	web_custom_request("rb_bf18472vnr_72", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=4227418967&co=snappy&st=1771909793093&ss=0&qc=3634509009&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddresponseresult.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xBF\tD{\"data_version\":2,\\x05\\x11\\xF0\\x9C\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909791079,\"duration\":0,\"dt.rum.schem\\x1D\\xAFt\"0.23.0\",\"characteristics.has_\\x19\\xAA\\xA0_change\":true,\"performance.time_origin\":1\r\\x83(70899,\"dom_\\x05\\xFA(.is_trusted\\x11D\r\\x92,application.\\x05\\xE5<ea7c4b59f27d43eb=\\x12\\x10frame:\\x14\\x01D9171de27dc5b470e\","
		"\\x15Z\\x10gent.5\\x9A`\"1.331.17.20260218-130851>2\\x00\\x08typ!\\x94$javascript\\x19!\\x00b-\\x9B\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i-\\xF9)\\x14\\x001)W\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,U\\xA2\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03\\xF0L\":1.25,\""
		"page.url.full\":\"http://192.168.1.2:7001/LoanIQ/ddresponseresult.jsp\",\tF1I\\x00_%\\xB3J.\\x02\\x05l,detected_nam!\\xFD\\x8EZ\\x00\\x0Ctitl\\x01,\\x00L\\x05\\x85\\x00:>\\x85\\x00\\x18\",\"view:\\x81\\x00<720689e4304c689d\\x11&\\xEE\\xED\\x00\\x05\\xED\\x05l\\xB2\\xC7\\x00\\x0C}]}}", 
		LAST);

	lr_start_transaction("AB_DDRequest_T08_UserLogout");

	web_reg_find("Text=LoanIQ : Logout", 
		LAST);

	lr_think_time(3);

	web_url("Logout.jsp", 
		"URL=http://192.168.1.2:7001/LoanIQ/Logout.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddresponseresult.jsp", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rb_bf18472vnr_73", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=2414162386&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddresponseresult.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1771909796729%7C_viewend_%7Cinp%7C0%7Csvn%7C%2FLoanIQ%2Fddresponseresult.jsp%7Csvt%7C1771909770900%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C1%7C7%7C_event_%7C1771909796729%7C_pageend_%7Cinp%7C0%7Curl%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponseresult.jsp$rId=RID_-69831870$rpId=1311953555$domR=1771909771800$tvn=%2FLoanIQ%2Fddresponseresult.jsp$tvt=1771909770900$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$ni=4g|1.45$egf=1589PRTUX$url="
		"http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponseresult.jsp$title=LoanIQ%3Addresponseresult$isUnload=1$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109771784_333$v=10331260218130851$vID=1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponseresult.jsp$time=1771909796730", 
		LAST);

	web_custom_request("rb_bf18472vnr_74", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=2&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=2617444716&co=snappy&st=1771909796731&ss=1&qc=3740090180&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/ddresponseresult.jsp", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\xEE(D{\"data_version\":2,\\x05\\x11\\xF0o\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"view.fo\\x11?,_time\":19834\r\\x1D\\x0Cback\t\\\\\r\\x1Dp5996,\"error.http_4xx_count\":02\\x19\\x00\\x005J\\x19\\x00 exceptionB3\\x00 csp_violaR\\x1E\\x00\\x1Cdropped_f@\\x00\\x05\\x8C\\x10other\\x1D[\\x0Ccls.!&8us\":\"reported\",\\x05\\x18)a:-\\x00\\x10value\\x05\\xC9\\x08fcp\\x11\\x0E\\x0C912,\\x05\\x10\\x1Cloading_\\x01S!y "
		"complete\"\t\\x1F\\x01\\x17>j\\x00\\x08fidb\\x18\\x00nO\\x00\t7\\x04rt-v\\x1C25628.5,\\x05P\\x08dur%&\\x08\":3\\x01\\x99\\x10id.na!\\xB8,\"pointerdown\\x01\\x93$id.process\r\\xB5\\x08rt\"\\x01J\\x0437\\x11J\\x1D\\x1F\\x08end\t\\x1D\\x0C8.10\\x05\\x01\\x0C2384\r`<cancelable\":true\t\\x888ui_element.tag_\r\\x85\\x08IMG\r}\\x1D Lxpath\":[\"html\",\"body\\x01&\\x18orm\",\"t\\x05Z\\x08,\"t\r\\x17\\x10tr[3]\\x01\\x10!\\xACF\\x1D\\x00\\x05\\x1A\\x04[6\\x01\"Ddiv\",\"a\",\"img\"],\"f"
		":\\xB6\\x01\\x00prf\\x01\\x00pR\\x9C\\x01\\x04in\\x1D\\x184below_threshol\\x01\\x91\\x04lc\\x1D\\x1F]U\\x01\\x186U\\x02\\x041,\\x05\\x15\\x04st9\\xC9EL\\x01*!\\xFD-\\xDD\\x000\r' ize\":9936\t\\x10\\x14render\r$\\x158=U=u\\x04P\"\t4\\x1D\\x1E\\xC2s\\x01\\x004!Q%s)V\\x00p!P long_task\\x01\\xC6I\\xDE\\x0Cnot_\\x1D\\xF7\\x0Cttfb\\x19\\x1D>\\x19\\x00mQ\\x14867.79\\x05\\x01\\x18523163,\t8\\x0CwaitA\\x9DY\\xD32\\x7F\\x02\\x0C1858\r*\\x10cache\\x1D(\\x000\r"
		"\\x18\\x08dns\\x1D\\x16\\x001A\\xDA\\x05\\x92\\x14connec\\x85M\\x19]\\x0002\\x85\\x00\\x002E\\xE0\\x05.\\x18request\\x1D+\\x10857.3\\x05\\xB1,9761581,\"perA\\xB1a\\x0C\\x14.active\\x86\\x81\\x0E\\x00r\\x89\\xFD\\x00v\\xA1O\\x00s\\x01K(nce_number\"A\\x06\\x05\\x19\\x08pre2\\xD3\\x01X0,\"characteristics.has_\\x01,\\x1C_summaryqn\\x10navig\\x05n\\xA1\\xD8\\x01r\\x85\\x80\\x04ex\\x018\\x0Cng\",2\"\\x00\\x04yp\\x81\\x9D\\x08harA\\xAE.\\xB5\\x00\\xA1\\xDF\\\\_origin\":1771909770899,\".\\xA5\\x02"
		":\\x1B\\x009@H25830,\"dt.rum.schem\\xDD\\xBE\\x1C\"0.23.0\"\\x15!\\x14applic\t\\xB8Xid\":\"ea7c4b59f27d43eb\",\\xD5\\xB0\\x10frame:\\xB2\\x06<9171de27dc5b470e\\x1DZ\\x00g\\x81v\\xF58`\"1.331.17.20260218-130851>2\\x00-\\x1C$javascript\\x19!\\x00b\\xED9\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x198\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"5\\x17\\x00i\\xED\\x97)\\x14-m\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orientaA\\xE1<\":\"landscape-priE:\\x15)"
		"$screen.wid\\xA1\\x82\\x0415\\x81_\rD\r\\x1B(height\":8649\\x90\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\tb\\x1C_pixel_rA\\x03\\\\\":1.25,\"page.url.full\":\"\\xE1\\xB9\\xC0://192.168.1.2:7001/LoanIQ/ddresponseresult.jsp\",\tF1I\\x00_%\\xB3J.\\x02\\x05l\\x1Cdetected\\xD1\\xA1\\x8EZ\\x00\\x08tit\\xC1\\xEC\\x00\"\t\\x85\\x00:>\\x85\\x00\\x00\"\\x1A\\x1E\t6\\x81\\x008720689e4304c689a~\\x00v\\x81\\x12\\x00u\\xFE\\xED\\x00\\x05F\\xB2\\xC7\\x00\\x04},\\xFE*\n:*\n%J&i\n"
		"\\xCD\\x96\\x1A*\n\\x05\\x1D\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xFE*\n\\xB2*\nN\\xF9\t\\xA1F\\x00_:\\xF9\t\\x01\\x14N9\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xFE\\x11\n\\xC6\\x11\n\\x08]}}", 
		LAST);

	web_custom_request("rb_bf18472vnr_75", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?type=js3&sn=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&svrid=-9217&flavor=post&vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0&modifiedSince=1771507651721&bp=3&app=ea7c4b59f27d43eb&crc=2252712876&en=1zefxo3e&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Logout.jsp", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7Clogout%7CC%7C-%7C109771784_333%7C1771909796622%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponseresult.jsp%7C%7C%7C%2FLoanIQ%2Fddresponseresult.jsp%7C1771909770900%2C1%7C1%7C_load_%7C_load_%7C-%7C1771909796624%7C1771909796753%7Cdn%7C60%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttp%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2Fddresponseresult.jsp%2C2%7C3%7C_event_%7C1771909796624%7C_vc_%7CV%7C127%5Epc%7CVCD%7C1016%7CVCDS%7C1%7CVCS%7C185%7CVCO%7C1185%7CVCI"
		"%7C0%7CTS%7C1%7CVE%7C589%5Ep509%5Ep5040%5Eps%5Esdiv%3Anth-of-type%282%29%3Efont%3Afirst-child%7CS%7C127%2C2%7C4%7C_event_%7C1771909796624%7C_wv_%7ClcpT%7C-5%7Cfcp%7C-6%7Cfp%7C-6%7Ccls%7C0%7Clt%7C0%2C2%7C2%7C_onload_%7C_load_%7C-%7C1771909796753%7C1771909796753%7Cdn%7C60%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C5%7C_event_%7C1771909796624%7C_view_%7Csvn%7C%2FLoanIQ%2Fddresponseresult.jsp%7Csvt%7C1771909770900%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7C"
		"i1%5Esk0%5Esh0$dO=192.168.1.2,$rId=RID_1021942582$rpId=-1811966466$domR=1771909796752$tvn=%2FLoanIQ%2FLogout.jsp$tvt=1771909796624$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1528$h=732$sw=1536$sh=864$nt=a0b1771909796624e11f11g11h11i11k12l101m101o127p127q128r128s129t129u3098v2798w2798X200V1$ni=4g|1.45$egf=1589PRTUX$url=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FLogout.jsp$title=LoanIQ%20%3A%20Logout$latC=0$app=ea7c4b59f27d43eb$vi=MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0$fId=109796739_545$v=10331260218130851$vID="
		"1771909584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3$rf=http%3A%2F%2F192.168.1.2%3A7001%2FLoanIQ%2FLogout.jsp$time=1771909797828", 
		LAST);

	web_custom_request("rb_bf18472vnr_76", 
		"URL=http://192.168.1.2:7001/LoanIQ/rb_bf18472vnr?sc=5&si=v_4_srv_-2D9217_sn_4705KCJGEDBNSV8MJPRP6VIKG61K54PI&ty=js&pv=4&ai=ea7c4b59f27d43eb&en=1zefxo3e&cr=1771507651721&av=1.331.17&cy=event&bc=3109707556&co=snappy&st=1771909798758&ss=0&qc=3616883402&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.2:7001/LoanIQ/Logout.jsp", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"BodyBinary=\\xEE2D{\"data_version\":2,\\x05\\x11\\xF4T\\x01\":{\"updates\":{},\"events\":[{\"visibility.state\":\"foreground\",\"browser.tab.instance_id\":\"83a42272fd8b70a3\",\"start_time\":1771909796734,\"duration\":0,\"performance.initiator_type\":\"script\",\"characteristics.has_request\":true,\"url.full\":\"http://192.168.1.2:7001/LoanIQ/ruxitagentjs_ICA15789NPRTUVXfqrux_10331260218130851.js\",\"network.protocol.name\":\"\\x01p\\x08\",\".\\xCB\\x00(time_origin.\\x00\\x01@624,\"dt.rum.schem="
		"\\xA2\\x18\"0.23.0:I\\x00\\x0Cstar5H\\x1010.70\\x05\\x01\\x1847683726u\\x00$next_hop_p\r\\xA1\\x08\":\"\\x01\\x9C\\x0C/1.1:W\\x004domain_lookup_\\x05e\\x04\":~`\\x0065\\x00\\x08end\\x863\\x00\\x18connect\\x9Eb\\x00\\x11/\\x92\\\\\\x00\\x18secure_\r4\\x08ion\\x11f\\x0006\\x17\\x01\\x04reE)\\x11\\x1E~\\xE6\\x00\\x1Cresponse\\xC20\\x00\\x92\\xB5\\x00\\x10redir=\\x12B\\xAC\\x00\r\\x1F\\x05M:\\x1D\\x00\\x14worker\\x11\\x98:\\x1D\\x00\\x10fetch\\x11\\x1CN\\xE4\\x00A\n\\x15\\xDDAX,tus_code\":20"
		":M\\x008render_blocking\\x01W\\x14tus\":\"\\x11\\x12:O\\x024first_interim_>B\\x01:]\\x00\\x10final\\x19%\\x1Cheaders_M\\x85:-\\x00,delivery_typ\\x81\\x92\\x10cache:~\\x00\\x14transf!\\x1A\\x0Cize\">B\\x000encoded_body_\t\"\\x141268686&\\x02\\x04deB'\\x00 345597,\"rIA(.server_tim!\\x14Hhint\":\"not_availabl\\x01\\x99\\x11-\\x0CtracE\\x9D\\x00te\\x96\\x19-\\x0Cset\"V\\xD2\\x04\\x08w3c!\\x17\\x10ource\rf\\x0Cs\":t\\x85\\xDF\\x8D5\\x18applicaA\\xEE\\x00.\\xA5{<ea7c4b59f27d43eb\\xBD\\xA8\\x10frame"
		":\\xAA\\x05@accc1dddfcf3cddc\"\\x95\\x8F\\xA5\\x11\\x00.\\xD504\"1.331.17.2026\\xA1\n\\x14-13085\\x81I\\x11\\x8C\\x10gent.-\\x98\\x1Cjavascri\\xA5\\xAF\r!\\x08bro\\xC51\\x00s\\x05\\xAA|4705KCJGEDBNSV8MJPRP6VIKG61K54PI\\x19\\x8B\t0\\x88MRGBPWBJSAJCIAAMLELKSCKLJTLUORPT-0\"\\x15\\xBD\\x00i\\xCD\\x8F)\\x14\\x001\\xC9p\\xD8584723P5AK5MV0J8K9DB7J3ESJOUDQ81LCR6G3\",\"device.orienta!\\\\L\":\"landscape-primary\\x01\\xA0\\x00e\\x05)Dscreen.width\":1536\\x15D\r\\x1B,height\":864,"
		"\\xF58\\x14window\\x197\\x0428B\\x1C\\x00\\x118\\x08732B\\x1C\\x00\t}\\x1C_pixel_rA\\x03L\":1.25,\"page.url.ful\\xB1\\xF4j\\x00\\x07 Logout.js\\xC5\\xB5\\x01<1?\\x00_%\\xA9J$\\x02\\x05&(detected_na\\xC5\\xF7\\x18/LoanIQJP\\x00\\x0Ctitla\\xAD\t!\\x08 : \ts\\x18\",\"view:o\\x00<7f3caa613a981e35\\x11&\\xDA\\xD1\\x00\\x05b\\x8A\\xAB\\x00\\x08},{\\xFE\\xF2\\x086\\xF2\\x08\\x0Cchar.\\xA4\\x08Dis_self_monitoringq\\xCCJ*\\x00\\xA5;\\x08nal\\x11#\\xA5\r\\x81\\x04\\x18e\":1771\\x1A?\t\\x0448:?\t"
		"mjfL\\x08\\x11!\\x08fm_*\\xEB\t\\x0E\\x9F\\x08\\x10stamp6^\\x00\\x085,\"\\xA1\\x05\\xC5\\x11 0,\"messag!\\xC9\\x01\\x83 507651721%;\\x8AB\\x00\\x003.B\\x00\\x18[\\\\\"OneA\\x813\\x14 JavaS\\x85,0 tag\\\\\",[]]\"}]u\\xCE\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04\\xFE\\xE5\\x04j\\xE5\\x04V\\x98\\x04\\x16\\xD7\\x0C\"\\xD7\r"
		"\\x10128.8\\x12\\xA7\\x0C\\x1C071525576k\tB\\xE8\r\\x10navig\\xC1\\xD2\\x00nZ\\x1A\t\\x1AU\t\\xB1\\x1E\\xDA\\x1B\\x06\\xFE\\xC0\r\\xFE\\xC0\r:\\xDB\n\\x00n\\x12\\x19\n\\xEA\\xAF\r:\\x0E\\x0E\\x04166g\\x01N\\xAF\rz3\\x00\\x1AL\r\\x00_%\\xE7\\x04\":\\x9E/\\x00\\x00e\\x12\\x0B\\x0Ez\\\\\\x00\\xE2\\xAF\r\\x04.9IL\\x189536743:\\xF5\\x0E>m\\x0C\\x0410:\\x88\\x00^0\\x00\r\\xB5\\x081.1\t_\\x14238418:D\\x01\\x00r\\x1E\\x90\r-\\x12:\\xC3\\x01\\x15\\x1F\\x05M:\\x1D\\x00\\xAA\\xAF\r:\\xB3\\x00"
		"!\\xCA\\xFE\\xAF\r\\x12\\xAF\r\\x0Cnon-\\xFE\\xB3\r\\x86\\xB3\r~s\\x01>\\xC4\rv\\xBF\r\\x08309:\\x9B\rJ\\xC2\r\\x0427>%\\x00J\\xC0\r\t%\\x8D<V\\xBE\r\\x1Cinvalid\"&\\xE5\rz\\xB8\r\\x12\n\\x0B\\x16\\xA3\r\\xAA\\xA2\n\\x04ddQ\\xA7\\x10resul\\x1E}\\x0B>\t\n\\x08has\\x12\\x05\\x0E\\xB9\\x10\\x0E\\x03\n\\x04in&\\x07\\x0EN2\\x00\\x19.\\xB1 \\x08per\"U\\x13\\x00t\\x168\\x0F\r%\\x0E\\xA2\\x0E.\\x1E\\x00\\x14unload\\x16\\x1B\nQ\\xE4\\x0C108.\\x0EV\\x0C\\x1DE2'\\x00E\\xECJ%\\x00\\x0Cdom_\\x12\\xC8\n"
		"\\x10activ\\x0E\\xB9\n\\x0426r\\x08\\x06\\x011\\x1Ccontent_\\x01\\x87\\x00e>\\x89\\x00\\x0427r\\x9D\\x03b@\\x00\t\\xA2\\x0427r.\\x13\t>\\x10mplet\\x05\\xAC\\x007r\\xAC\\x00\\x01\\xA0:'\\x01\\x0428r`\\x00\\x1D2\r\\x90v\\x16\\x07\\x95L\\x08cou\\x0EZ\\x10\\x040,1\\xB5\\x08ion1\\xC7\\x08harA\\xAD-\\xCE\\x05\\x19\\x08ab_\\x1E\\xAF\\x15\\x10exist\\x0Ei\\x0C\\x1Ai\r\\x00s\\x0E\\xB9\\x10\\x0E\\xA6\\x15 number\""
		":1\\xFEd\\x0B\\xFEd\\x0B\\xFEd\\x0B\\xFEd\\x0B\\xFEd\\x0B\\xFEd\\x0B\\xFEd\\x0B\\xFEd\\x0B\\xFEd\\x0B\\xFEd\\x0B\\xFEd\\x0B\\xFEd\\x0B\\xFEd\\x0BNd\\x0B\\x08]}}", 
		LAST);

	lr_end_transaction("AB_DDRequest_T08_UserLogout",LR_AUTO);

	return 0;
}