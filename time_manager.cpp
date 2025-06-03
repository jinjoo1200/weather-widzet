#include "time_manager.h"
#include "share/var.h"
static const char* ntpServer = "pool.ntp.org";



void ntp_init(){
    configTime(32400, 0, ntpServer);
}

void ntp_time_show(){
    if(!getLocalTime(&share_time_today)){
        Serial.println("Failed to obtain time");
        return;
    }

    sprintf(day_str,"%d%02d%02d",
        share_time_today.tm_year,
        share_time_today.tm_mon,
        share_time_today.tm_mday-1
    ); //day

    sprintf(time_str,"%02d00",
                    share_time_today.tm_hour); //time
                    
    Serial.printf("day:%s,time:%s",day_str,time_str);
}