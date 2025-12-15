#include <SoftwareSerial.h>

SoftwareSerial gpsSerial(4, 3);
SoftwareSerial gsmSerial(7, 8);

String latitude = "";
String longitude = "";

void setup() {
  pinMode(2, INPUT); // Panic Button
  Serial.begin(9600);
  gpsSerial.begin(9600);
  gsmSerial.begin(9600);
}

void loop() {
  if (digitalRead(2) == HIGH) {
    getLocation();
    sendSMS();
    delay(10000);
  }
}

void getLocation() {
  // Dummy coordinates for testing
  latitude = "12.9716";
  longitude = "77.5946";
}

void sendSMS() {
  gsmSerial.println("AT+CMGF=1");
  delay(1000);
  gsmSerial.println("AT+CMGS=\"+91XXXXXXXXXX\"");
  delay(1000);
  gsmSerial.print("EMERGENCY ALERT!\n");
  gsmSerial.print("I need help.\nLocation: ");
  gsmSerial.print("https://maps.google.com/?q=");
  gsmSerial.print(latitude);
  gsmSerial.print(",");
  gsmSerial.print(longitude);
  gsmSerial.write(26);
}
