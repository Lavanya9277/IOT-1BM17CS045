#include<SoftwareSerial.h>
SoftwareSerial cell(2,3);
void setup() {
  // put your setup code here, to run once:
   cell.begin(9600);
   delay(500);
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("calling...");
  cell.println("ATD+9535434768;");
  delay(500);
  cell.println("ATH");
}
