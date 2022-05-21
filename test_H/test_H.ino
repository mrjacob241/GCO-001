#define L 3
#define R 4

void setup() {
  pinMode(L, OUTPUT);
  pinMode(R, OUTPUT); 
  pinMode(LED_BUILTIN, OUTPUT);
}

int cc=1;
void loop() {
  if (cc==1) {
    digitalWrite(L, HIGH); //3
    digitalWrite(R, LOW);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
  } else {
    digitalWrite(L, LOW);
    digitalWrite(R, HIGH); //4
    digitalWrite(LED_BUILTIN, LOW);
    delay(350);
     
    digitalWrite(L, LOW);
    digitalWrite(R, LOW);
    delay(300);
  }
  cc = -1*cc;
  
  
}
