#ifndef _WIFI_MANGER_H //만약 이 이름이 정의 되어있지 않으면 #endif까지 실행
#define _WIFI_MANGER_H //#=메크로 컴파일전에 실행


#include <Arduino.h>
#include <WiFi.h>

void wifi_init(String ssid , String password); //string은 클래스고 char는 변수

bool wifi_get_connect();

void wifi_loop();

#endif