#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_

#define CFG_HOLDER	0x00FF55A4
#define CFG_LOCATION	0x3C	/* Please don't change or if you know what you doing */

/*DEFAULT CONFIGURATIONS*/

#define MQTT_HOST	    "your cloudmqtt instance name"
#define MQTT_PORT    	your cloudmqtt instance port

#define MQTT_BUF_SIZE		1024
#define MQTT_KEEPALIVE		120	 /*second*/

#define MQTT_CLIENT_ID		"DVES_%08X"
#define MQTT_USER	    "your cloudmqtt instance username"
#define MQTT_PASS	    "your cloudmqtt instance password"

#define STA_SSID        "your WiFi SSID"
#define STA_PASS        "your WiFi password"
#define STA_TYPE AUTH_WPA2_PSK

#define MQTT_RECONNECT_TIMEOUT 	5	/*second*/

#define DEFAULT_SECURITY	0
#define QUEUE_BUFFER_SIZE		 		2048

#endif
