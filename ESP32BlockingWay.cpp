#include <Arduino.h>
#include <WiFiMulti.h>

#define WIFI_SSID "BAHRIL"
#define WIFI_PASSWORD "BEATSTREET21"

//Create WiFiMulti instance
WiFiMulti wifiMulti;



void setup() {
  Serial.begin (921600);

  wifiMulti.addAP(WIFI_SSID, WIFI_PASSWORD);

  while(wifiMulti.run() != WL_CONNECTED){ // This code will trying to find wifi, and when its connected so it will continue to the next code if it didnt it wouldnt
    delay(100);

  }

  Serial.println ("Connected");
}

void loop() {
  digitalWrite(LED_BUILTIN, WiFi.status() == WL_CONNECTED); //if we connected so LED would on (1)
  
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}