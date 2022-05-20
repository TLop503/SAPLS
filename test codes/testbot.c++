int FLpin1 = 48;
int FLpin2 = 49;

int FRpin1 = 46;
int FRpin2 = 47;

int BLpin1 = 50;
int BLpin2 = 51;

int BRpin1 = 52;
int BRpin2 = 53;

void setup() {
  // put your setup code here, to run once:
  pinMode(FLpin1, OUTPUT);
  pinMode(FLpin2, OUTPUT);

  pinMode(FRpin1, OUTPUT);
  pinMode(FRpin2, OUTPUT);

  pinMode(BLpin1, OUTPUT);
  pinMode(BLpin2, OUTPUT);

  pinMode(BRpin1, OUTPUT);
  pinMode(BRpin2, OUTPUT);
}

void forwards(){
  digitalWrite(FLpin1, HIGH);
  digitalWrite(FLpin2, LOW);

  digitalWrite(FRpin1, HIGH);
  digitalWrite(FRpin2, LOW);

  digitalWrite(BLpin1, HIGH);
  digitalWrite(BLpin2, LOW);

  digitalWrite(BRpin1, HIGH);
  digitalWrite(BRpin2, LOW);
}

void backwards(){
  digitalWrite(FLpin1, LOW);
  digitalWrite(FLpin2, HIGH);

  digitalWrite(FRpin1, LOW);
  digitalWrite(FRpin2, HIGH);

  digitalWrite(BLpin1, LOW);
  digitalWrite(BLpin2, HIGH);

  digitalWrite(BRpin1, LOW);
  digitalWrite(BRpin2, HIGH);
}

void left(){
  digitalWrite(FLpin1, LOW);
  digitalWrite(FLpin2, HIGH);

  digitalWrite(FRpin1, LOW);
  digitalWrite(FRpin2, HIGH);

  digitalWrite(BLpin1, HIGH);
  digitalWrite(BLpin2, LOW);

  digitalWrite(BRpin1, HIGH);
  digitalWrite(BRpin2, LOW);
}

void right(){
  digitalWrite(FLpin1, HIGH);
  digitalWrite(FLpin2, LOW);

  digitalWrite(FRpin1, HIGH);
  digitalWrite(FRpin2, LOW);

  digitalWrite(BLpin1, LOW);
  digitalWrite(BLpin2, HIGH);

  digitalWrite(BRpin1, LOW);
  digitalWrite(BRpin2, HIGH);
}

void stop(){
  digitalWrite(FLpin1, LOW);
  digitalWrite(FLpin2, LOW);

  digitalWrite(FRpin1, LOW);
  digitalWrite(FRpin2, LOW);

  digitalWrite(BLpin1, LOW);
  digitalWrite(BLpin2, LOW);

  digitalWrite(BRpin1, LOW);
  digitalWrite(BRpin2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  
}