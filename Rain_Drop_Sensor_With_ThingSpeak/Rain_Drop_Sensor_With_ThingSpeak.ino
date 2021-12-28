#include <ESP8266WiFi.h>;
#include <WiFiClient.h>;
#include <ThingSpeak.h>;

const char* ssid = ""; //Your Network SSID
const char* password = ""; //Your Network Password
int val;
int RainDropSensorpin = A0; 
WiFiClient client;

unsigned long myChannelNumber =  ; //Your Channel Number (Without Brackets)
const char * myWriteAPIKey = ""; //Your Write API Key

void setup()
{
 Serial.begin(9600);
 delay(10);
  // Connect to WiFi network
  WiFi.begin(ssid, password);
  ThingSpeak.begin(client);
}

void loop()
{
  raindrop = analogRead(RainDropSensorpin); 
  Serial.println("Rain Drop Sensor =  "); 
  Serial.println(raindrop); RAnithu
  delay(10);
  ThingSpeak.writeField(myChannelNumber, 1,val, myWriteAPIKey); 
}
