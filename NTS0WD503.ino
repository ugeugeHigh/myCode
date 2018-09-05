const float R1 = 51;
void setup() {
  Serial.begin(9600);
}

void loop() {
  float val,v,R,T;
  val = analogRead(A5);
  v = 5*val/1024;
  R = v*R1/(5-v);
  
  float y = 0.000000000013787144257*pow(R,6) - 0.000000009644367069195*pow(R,5) + 0.00000277186613462706*pow(R,4) - 0.000424985505891903*pow(R,3) + 0.0381152369481333*pow(R,2) - 2.1624066385036*R + 76.3990502088956; 

  Serial.println(y); 
  delay(1000);
}

