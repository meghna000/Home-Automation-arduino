char val;

#define RELAY1 8

void setup()

{

pinMode(RELAY1, OUTPUT);

Serial.begin(9600);

}

void loop() {
  digitalWrite(RELAY1,HIGH);

if( Serial.available() )

{

val = Serial.read();

}

switch (val) {

case '1':

digitalWrite(RELAY1,LOW);

break;

case '2':

digitalWrite(RELAY1,HIGH);

break;

}

}
