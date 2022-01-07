//https://create.arduino.cc/projecthub/pratikdesai/how-to-program-esp8266-esp-01-module-with-arduino-uno-598166

#define BLYNK_PRINT Serial
#include <ESP8266_Lib.h> //https://github.com/vshymanskyy/BlynkESP8266
#include <BlynkSimpleShieldEsp8266.h>
#include <SoftwareSerial.h>
#define ESP8266_BAUD 9600

char auth[] = "0ozhi5RHI7eHNHtlWY3lFKOO4mawQFYv";//Drop your blynk token
char ssid[] = "Redmi"; //You can replace the wifi name to your wifi 
char pass[] = "123123123";  //Type password of your wifi.

SoftwareSerial EspSerial(2, 3); // RX, TX
WidgetLCD lcd(V0);

ESP8266 wifi(&EspSerial);

void setup()
{

  Serial.begin(9600);
  EspSerial.begin(ESP8266_BAUD);
  Blynk.begin(auth, wifi, ssid, pass);
   lcd.clear();
 lcd.print(1, 1, "IoT");
}

void loop()
{
  Blynk.run();
}