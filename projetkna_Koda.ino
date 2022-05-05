boolean button = false;
boolean button2 = false;
boolean button3 = false;

boolean button4 = false;

boolean isOn = false;

int value = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);

  pinMode(11, INPUT);

  pinMode(6, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(A1, INPUT);
}

void loop() {
  button = digitalRead(8);
  button2 = digitalRead(9);
  button3 = digitalRead(10);

  button4 = digitalRead(11);

  value = analogRead(A1);
  Serial.println(value);

  if (button && isOn == false && (value > 1024 / 2 || button4))
  {
    isOn = true;
    digitalWrite(6, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
  }
  
  if (button2 && isOn == false && (value > 1024 / 2 || button4))
  {
    isOn = true;
    digitalWrite(4, LOW);
    digitalWrite(2, HIGH); 
    digitalWrite(6, HIGH);
  }

  if (value < 1024 / 2 || button4) 
  {
    isOn = false;
    digitalWrite(6, LOW);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
  }

  if (button3 && isOn)
  {
    isOn = false;
    digitalWrite(6, LOW);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
  }
}
