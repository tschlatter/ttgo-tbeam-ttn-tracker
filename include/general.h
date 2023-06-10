#ifndef GENERAL_H
#define GENERAL_H

#include <Arduino.h>

#include "axp20x.h"

void screen_print(const char * text, uint8_t x, uint8_t y, uint8_t alignment);
void screen_print(const char * text, uint8_t x, uint8_t y);
void screen_print(const char * text);
void screen_off();
void screen_setup();
void screen_update();
void screen_show_logo();
void screen_loop();

float gps_hdop();
float gps_latitude();
float gps_longitude();
float gps_altitude();
void gps_setup();
void gps_loop();
uint8_t gps_sats();
void gps_time(char * buffer, uint8_t size);

void ttn_send(uint8_t * data, uint8_t data_size, uint8_t port, bool confirmed);
size_t ttn_response_len();
void ttn_response(uint8_t * buffer, size_t len);
bool ttn_setup();
void ttn_join();
void ttn_adr(bool enabled);
void ttn_loop();
void ttn_sf(unsigned char sf);

void sleep_forever();

extern AXP20X_Class axp;
extern bool axp192_found;
extern bool pmu_irq;
extern String baChStatus;

#endif
