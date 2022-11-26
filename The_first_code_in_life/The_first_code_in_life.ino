int Echo=11;
int Trig=12;
int speak=8;
long duration;
int distance;

void setup() {
  Serial.begin(9600);
  pinMode(Echo,INPUT);
  pinMode(Trig,OUTPUT);
  pinMode(speak,OUTPUT);

}

void loop() {
  digitalWrite(Trig, LOW);
  delayMicroseconds(5);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  duration = pulseIn(Echo,HIGH);
  distance = duration *0.034 / 2;
  Serial.println(distance);
  
  if (distance<60){
   digitalWrite(speak,HIGH);
   delay(500);
   digitalWrite(speak,LOW);
  }
  else (distance>60);
  {
   digitalWrite(speak,LOW);
  }}
