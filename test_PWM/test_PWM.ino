#define L 3
#define R 4
#define pot A0

int cc=1;
float frac = 0.9;
int interval = 50;
int TP = L;
int val = 0;

void setup() {
  pinMode(L, OUTPUT);
  pinMode(R, OUTPUT); 
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    val = analogRead(A0);
    frac = 0.25+0.75*(1.0*val)/700;
    if (frac < 0.29) { frac = 0.0; }

    if (frac < 0.975) {
    Serial.print(val);
    Serial.print(" | ");
    Serial.println(frac);
    digitalWrite(TP, HIGH); //3
    digitalWrite(LED_BUILTIN, HIGH);
    delay(int(frac*interval));
    digitalWrite(TP, LOW); //3
    digitalWrite(LED_BUILTIN, LOW);
    delay(int((1-frac)*interval));
    } else {
    Serial.print(val);
    Serial.print(" | ");
    Serial.println(frac);
    digitalWrite(TP, HIGH); //3
    digitalWrite(LED_BUILTIN, HIGH);
    delay(interval); 
    }
 
  
  
}
