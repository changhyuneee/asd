#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>
#include "sta.h"
ESP8266WebServer server;
const char LED = LED_BUILTIN;
const char RLED = 15;
const char GLED = 5;
const char BLED = 4;
unsigned int currMillis,prevMillis;
const char *ssid = "Galaxy Note10+ 5G1952";
const char *password = "99431952";
String webPage = MAIN_page;
void setup() {
  pinMode(LED,OUTPUT);
  pinMode(RLED,OUTPUT),pinMode(GLED,OUTPUT),pinMode(BLED,OUTPUT);
  Serial.begin(9600);
  WiFi.begin(ssid,password);
  while(WiFi.status()!=WL_CONNECTED){
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.println();
  Serial.println(WiFi.localIP());
  //server setting
  server.on("/",[](){
    server.send(200,"text/plain","Hello WiFi");
    //server.send(200,"text/html",webPage);
    });
    //클라이언트에서IP주소/redLED 함수실행
  server.on("/red",redLED);
  server.on("/green",greenLED);
  server.on("/blue",blueLED);
  server.on("/yellow",yellowLED);
  server.on("/cyan",cyanLED);
  server.on("/black",blackLED);
  server.on("/white",whiteLED);
  server.on("/magenta",magentaLED);  
  server.begin();
}
void redLED(){
  digitalWrite(RLED, HIGH),digitalWrite(GLED, LOW),digitalWrite(BLED, LOW);
  server.send(204,"");
  //server.send(200,"")
  }
void greenLED(){
  digitalWrite(RLED, LOW),digitalWrite(GLED, HIGH),digitalWrite(BLED, LOW);
  server.send(204,"");}
void blueLED(){
  digitalWrite(RLED, LOW),digitalWrite(GLED, LOW),digitalWrite(BLED, HIGH);
  server.send(204,"");}
void yellowLED(){
  digitalWrite(RLED, HIGH),digitalWrite(GLED, HIGH),digitalWrite(BLED, LOW);
  server.send(204,"");}
  void cyanLED(){
  digitalWrite(RLED, LOW),digitalWrite(GLED, HIGH),digitalWrite(BLED, HIGH);
  server.send(204,"");}
  void blackLED(){
  digitalWrite(RLED, LOW),digitalWrite(GLED, LOW),digitalWrite(BLED, LOW);
  server.send(204,"");}
  void whiteLED(){
  digitalWrite(RLED, HIGH),digitalWrite(GLED, HIGH),digitalWrite(BLED, HIGH);
  server.send(204,"");}
  void magentaLED(){
  digitalWrite(RLED, HIGH),digitalWrite(GLED, LOW),digitalWrite(BLED, HIGH);
  server.send(204,"");}

void loop() {
 server.handleClient();
 //currMillis = millis();
//if((currMillis - prevMillis)>500){
  //digitalWrite(LED,!digitalRead(LED));
  //prevMillis = currMillis;
}//클라이언트 호출 프로그램
 //}
 
 
