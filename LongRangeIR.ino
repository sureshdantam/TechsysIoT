//  The Programme has been working fine, and tested.
//  Testing is done on May-2020
//  Reference:  https://www.instructables.com/id/How-to-Interface-With-Adjustable-Infrared-Sensor/
//  Connection: ( This is for DC systems )
//   1)  Red Wire:   +5V   Green Wire: GND     Yellow Wire: Digital Output   (0r )
//   2)  Brown Wire: +5V   Blue Wire: GND      Black Wire: Digital Output



unsigned int LongRangeBlack = 8;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial.println("Long Range Distance:");
  pinMode(LongRangeBlack, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int data = 0;
  data = digitalRead(LongRangeBlack);
 
  if ( data == HIGH )
  {
    digitalWrite(13,LOW); 
  Serial.println(data);
  Serial.println('\n');
  delay(500);
  }
  else
  {
    digitalWrite(13,HIGH);
  }

}
