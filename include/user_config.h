#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_

#define CFG_HOLDER   0xFF5522
#define CFG_LOCATION	0x3C	/* Please don't change or if you know what you doing */
#define CLIENT_SSL_ENABLE

/*DEFAULT CONFIGURATIONS*/

#define MQTT_HOST	"192.168.20.93"
#define MQTT_PORT	1883
#define MQTT_BUF_SIZE	1024
#define MQTT_KEEPALIVE		60	 /*second*/

#define MQTT_CLIENT_ID		"ESP8266_%08X"
#define MQTT_USER	"ESP_USER"
#define MQTT_PASS	"ESP_PASS"

#define STA_SSID	"Perseus"
#define STA_PASS	"sgspechome"
#define STA_TYPE AUTH_WPA2_PSK

#define MQTT_RECONNECT_TIMEOUT 	3	/*second*/

#define DEFAULT_SECURITY	0
#define QUEUE_BUFFER_SIZE		 		2048

#define PROTOCOL_NAMEv31        /*MQTT version 3.1 compatible with Mosquitto v0.15*/
//PROTOCOL_NAMEv311                     /*MQTT version 3.11 compatible with https://eclipse.org/paho/clients/testing/*/


#endif
