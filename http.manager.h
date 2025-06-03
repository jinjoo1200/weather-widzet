#ifndef _HTTP_MANGER_H //만약 이 이름이 정의 되어있지 않으면 #endif까지 실행
#define _HTTP_MANGER_H //#=메크로 컴파일전에 실행

#include "share/var.h"

#include <ArduinoJson.h>
#include <HTTPClient.h>
#include <WiFiClient.h>

void http_get_weather();

void http_make_url();

#endif
