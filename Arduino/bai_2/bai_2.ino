#define a 4
#define b 5
#define c 6
#define d 7
#define KEY1 A0
#define KEY2 A1
void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);

  pinMode(KEY1, INPUT);
  pinMode(KEY2, INPUT);
}

void led1() {
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
}

void led2() {
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
}

void led3() {
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
}

void led4() {
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
}

int posbutton = 1;
void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(KEY1) == 1) {
    if (posbutton = 1) {
      led1();
      posbutton = posbutton + 1;
      delay(1000);
    }
  }
  if (digitalRead(KEY1) == 1) {
    if (posbutton = 2) {
      led2();
      posbutton = posbutton + 1;
      delay(1000);
    }
  }
  if (digitalRead(KEY1) == 1) {
    if (posbutton = 1) {
      led3();
      posbutton = posbutton + 1;
      delay(1000);
    }
  }
  if (digitalRead(KEY1) == 1) {
    if (posbutton = 4) {
      led4();
      posbutton = 1;
      delay(1000);
    }
  }

  if (digitalRead(KEY1) == 0) {
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
  }
}
