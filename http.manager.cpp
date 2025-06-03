#include "http.manager.h"
#include "share/var.h"

#include <ArduinoJson.h>
#include <HTTPClient.h>
#include <WiFiClient.h>


static char final_url[500];

void http_get_weather(){


}

void http_make_url(){
    sprintf(final_url,"https://apis.data.go.kr/1360000/VilageFcstInfoService_2.0"
                      "/getVilageFcst?serviceKey=qOqt1LM1XDIdXCaBfc3bcvhVdK%%2B1FXvzFxzZ8kAA%%"
                      "2FBCcU1EjHCtgpOyUE7U8XjeeVaiuqD4vBgi7bAsWBEKPUg%%3D%%3D&pageNo="
                      "1&numOfRows=500&dataType=JSON&base_date=%d&base_time=%d&nx=58&ny=126");
    Serial.println(final_url);

}