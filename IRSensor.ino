// The Programme has beed tested and it is working fine.
// Testing is done on May-2019.

int ProxSensor = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(ProxSensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if( digitalRead(ProxSensor) == LOW )
  {
    digitalWrite(13, HIGH);
    Serial.println("Object is detected");
  }
  else
  {
    digitalWrite(13, LOW);
    Serial.println("Object is not within limits");
  }
  delay(1000);

}
