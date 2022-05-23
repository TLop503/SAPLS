#include <IRremote.h>

const int RECV_PIN = 11;

int FLpin1 = 48;
int FLpin2 = 49;

int FRpin1 = 46;
int FRpin2 = 47;

int BLpin1 = 50;
int BLpin2 = 51;

int BRpin1 = 52;
int BRpin2 = 53;

int kForwA = "1112";
int kBackA = "459";
int kLeftA = "45A";
int kRightA = "45B";
int kStopA = "45C";

int kForwB = "10458";
int kBackB = "10459";
int kLeftB = "1045A";
int kRightB = "1045B";
int kStopB = "45C";

boolean isBusy = false;

void setup(){
  Serial.begin(9600);
  IrReceiver.begin(RECV_PIN, ENABLE_LED_FEEDBACK); // Start the receiver

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
  isBusy = true;
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
  isBusy = true;
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
  isBusy = true;
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
  isBusy = true;
  digitalWrite(FLpin1, HIGH);
  digitalWrite(FLpin2, LOW);

  digitalWrite(FRpin1, HIGH);
  digitalWrite(FRpin2, LOW);

  digitalWrite(BLpin1, LOW);
  digitalWrite(BLpin2, HIGH);

  digitalWrite(BRpin1, LOW);
  digitalWrite(BRpin2, HIGH);
}

void halt(){
  isBusy = false;
  digitalWrite(FLpin1, LOW);
  digitalWrite(FLpin2, LOW);

  digitalWrite(FRpin1, LOW);
  digitalWrite(FRpin2, LOW);

  digitalWrite(BLpin1, LOW);
  digitalWrite(BLpin2, LOW);

  digitalWrite(BRpin1, LOW);
  digitalWrite(BRpin2, LOW);
}

void loop(){
  if (IrReceiver.decode()){
        Serial.println(IrReceiver.decodedIRData.decodedRawData);
        //IrReceiver.printIRResultShort(&Serial); // optional use new print version
    
        if (IrReceiver.decodedIRData.decodedRawData == kForwA){
          halt();
          forwards();
        } else if (IrReceiver.decodedIRData.decodedRawData == kBackA) {
          halt();
          backwards();
        } else if (IrReceiver.decodedIRData.decodedRawData == kLeftA)  {
          halt();
          left();
        } else if (IrReceiver.decodedIRData.decodedRawData == kRightA) {
          halt();
          right();
        } else if (IrReceiver.decodedIRData.decodedRawData == kStopA) {
          halt();
        }

        //continue scanning
        IrReceiver.resume();
  }
}