int val = 0;
int delayValue = 0;
void setup() {
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
}

void loop(){
val = analogRead(0);
if(analogRead(2) > val+600){
digitalWrite(13, LOW);

} else{
digitalWrite(13, HIGH);
}
delay(delayValue);
if(analogRead(2) > val+800){
digitalWrite(12, LOW);
digitalWrite(13, LOW);

} else{
digitalWrite(12, HIGH);
digitalWrite(13, HIGH);
}
delay(delayValue);
if(analogRead(2) > val+900){
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);

} else{
digitalWrite(11, HIGH);
digitalWrite(12, HIGH);
digitalWrite(13, HIGH);
}
delay(delayValue);
if(analogRead(2) > val+950){
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);

} else{
digitalWrite(10, HIGH);
digitalWrite(11, HIGH);
digitalWrite(12, HIGH);
digitalWrite(13, HIGH);
}
delay(delayValue);
if(analogRead(2) > val+970){
digitalWrite(9, LOW);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);

} else{
digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, HIGH);
digitalWrite(12, HIGH);
digitalWrite(13, HIGH);
}
delay(delayValue);
if(analogRead(2) > val+980){
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);
} else{
  digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, HIGH);
digitalWrite(12, HIGH);
digitalWrite(13, HIGH);

}
delay(delayValue);

}


