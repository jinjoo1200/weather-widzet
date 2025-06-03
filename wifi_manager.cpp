#include "wifi_manager.h"

static bool wifi_connect = false;


void wifi_init(String ssid, String password){
    WiFi.begin( ssid.c_str(), password.c_str() );
    //WiFi.onEvent( 함수명 , 이벤트 명);
}


void wifi_loop(){
    static unsigned long before_millis = 0;

    if(before_millis + 1000 <= millis()){
        if(WiFi.isConnected()){
            wifi_connect = true;
        } else{
            wifi_connect = false;
        }
    before_millis = millis();
    }
}

bool wifi_get_connect(){
    return wifi_connect;
}