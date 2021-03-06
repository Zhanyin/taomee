#ifndef config_h__
#define config_h__

#define MAX_MSG_LEN 8192
#define	IPCONFIG_ALL_CMD				"ipconfig /all"


//登陆服务器
#define LOGIN_SERVER_51MOLE			"114.80.98.17"
#define LOGIN_SERVER_POLICYFILE_PORT_51MOLE 843
#define LOGIN_SERVER_TELNET_PORT_51MOLE		1863

#define LOGIN_SERVER_51SEER			"114.80.99.73"
#define LOGIN_SERVER_POLICYFILE_PORT_51SEER 843
#define LOGIN_SERVER_TELNET_PORT_51SEER		1863

//在线服务器
#define ONLINE_SERVER_51MOLE		"114.80.98.9"
#define ONLINE_SERVER_POLICYFILE_PORT_51MOLE 843
#define ONLINE_SERVER_TELNET_PORT_51MOLE	1201

#define ONLINE_SERVER_51SEER			"114.80.99.66"
#define ONLINE_SERVER_POLICYFILE_PORT_51SEER	 843
#define ONLINE_SERVER_TELNET_PORT_51SEER		1201


#define TRACERT_51MOLE			"tracert www.51mole.com"
#define TRACERT_51SEER			"tracert www.51seer.com"



#define NSLOOKUP_51MOLE			"nslookup www.51mole.com"
#define NSLOOKUP_51SEER			"nslookup www.51seer.com"

#define TEST_NAME_51MOLE		"test_51mole"
#define TEST_NAME_51SEER		"test_51seer"

#define TRY_LOGIN_WHICHGAME_51MOLE		1
#define TRY_LOGIN_WHICHGAME_51SEER		2

#define SEND_TO_MAIL_51MOLE "51mole@taomee.com"//"taomee_test@163.com"//
#define SEND_TO_MAIL_51SEER "51seer@taomee.com"//"taomee_test@163.com"//

//可配置的宏
#define DO_51MOLE
#undef DO_51_SEER







#ifdef DO_51MOLE
	#define TRACERT_CMD			TRACERT_51MOLE
	#define TRACERT_ONLINE_CMD	"tracert 114.80.98.9"
	#define TRACERT_LOGIN_CMD	"tracert 114.80.98.17"
	#define NSLOOKUP_CMD		NSLOOKUP_51MOLE
	#define TEST_NAME			TEST_NAME_51MOLE

	#define LOGIN_SERVER						LOGIN_SERVER_51MOLE
	#define LOGIN_SERVER_POLICYFILE_PORT		LOGIN_SERVER_POLICYFILE_PORT_51MOLE
	#define LOGIN_SERVER_TELNET_PORT			LOGIN_SERVER_TELNET_PORT_51MOLE
	#define ONLINE_SERVER						ONLINE_SERVER_51MOLE
	#define ONLINE_SERVER_POLICYFILE_PORT		ONLINE_SERVER_POLICYFILE_PORT_51MOLE
	#define ONLINE_SERVER_TELNET_PORT			ONLINE_SERVER_TELNET_PORT_51MOLE

	#define TRYLOGIN_WHICHGAME TRY_LOGIN_WHICHGAME_51MOLE

	#define SEND_TO_MAIL SEND_TO_MAIL_51MOLE
#else
	#define TRACERT_CMD			TRACERT_51SEER
	#define TRACERT_ONLINE_CMD	"tracert 114.80.99.66"
	#define TRACERT_LOGIN_CMD	"114.80.99.73"
	#define NSLOOKUP_CMD		NSLOOKUP_51SEER
	#define TEST_NAME			TEST_NAME_51SEER

	#define LOGIN_SERVER						LOGIN_SERVER_51SEER
	#define LOGIN_SERVER_POLICYFILE_PORT		LOGIN_SERVER_POLICYFILE_PORT_51SEER
	#define LOGIN_SERVER_TELNET_PORT			LOGIN_SERVER_TELNET_PORT_51SEER
	#define ONLINE_SERVER						ONLINE_SERVER_51SEER
	#define ONLINE_SERVER_POLICYFILE_PORT		ONLINE_SERVER_POLICYFILE_PORT_51SEER
	#define ONLINE_SERVER_TELNET_PORT			ONLINE_SERVER_TELNET_PORT_51SEER

	#define TRYLOGIN_WHICHGAME TRY_LOGIN_WHICHGAME_51SEER

	#define SEND_TO_MAIL SEND_TO_MAIL_51SEER
#endif





#endif // config_h__