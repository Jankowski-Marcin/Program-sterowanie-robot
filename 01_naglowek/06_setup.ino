void setup() {
  Serial.begin(2000000);
  Servo_motor::timer1_setup();
  Kompresor.mode(1,0);
  Zawor.mode(1,0);


}
