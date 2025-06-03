#include "wifi_manager.h"
#include "time_manager.h"
#include "share/var.h"
#include "http.manager.h"


static unsigned long before_millis = 0;
static bool before_wifi_connect = false;

void setup(){
  Serial.begin(115200);
  wifi_init("jinjoo","00000001");
  delay(100);
  ntp_init();
}


void loop(){
  wifi_loop();
  
  if(wifi_get_connect() && before_wifi_connect == false){
    Serial.println("Connect OK");
    before_wifi_connect = true;
    http_make_url();
  }else{
    Serial.println("Conecting...");
  }
}


