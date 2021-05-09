
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int a=0; //13
int b=0; //2
int c=0;//check flag
int d=0;
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  a= digitalRead(ledPin);
  b = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == LOW&&c==0) {
    Serial.println("PRESS");
    delay(1);
    c=1;
 d++;
  Serial.print("d=");
   Serial.println(d);
    delay(1);
    }
    else if(buttonState == HIGH&&c==1){
      Serial.println("LOSE PRESS");
     delay(1);
      c=0;
      d++;
      Serial.print("d=");
   Serial.println(d);
      }
if(d==2){
  digitalWrite(13,HIGH);
  }
  else if(d==4){
     digitalWrite(13,LOW);
     d=0;
     Serial.print("d=");
   Serial.println(d);
    }
}
