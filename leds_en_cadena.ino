int led1 = 9;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int potenciometro = 0;
int long vPotenciometro;


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(potenciometro, INPUT);
  Serial.begin(9600);
}

void loop() {
  vPotenciometro = analogRead(potenciometro);
  Serial.print(10000 - map(vPotenciometro, 0L, 1023L, 0, 10000));
  Serial.println(" ohmios");
  
  if (vPotenciometro == 0) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  if (vPotenciometro > 0 && vPotenciometro <= 127) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  } else if (vPotenciometro > 127 && vPotenciometro <= 255) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2, LOW);    
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  } else if (vPotenciometro > 255 && vPotenciometro <= 383) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  } else if (vPotenciometro > 283 &&  vPotenciometro <= 511) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  } else if (vPotenciometro > 511 && vPotenciometro <= 630) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  } else if (vPotenciometro > 630 && vPotenciometro <= 767) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  } else if (vPotenciometro > 767 && vPotenciometro <= 895) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,LOW);
  } else if (vPotenciometro > 895 && vPotenciometro <= 1023) {
    
  }

}
