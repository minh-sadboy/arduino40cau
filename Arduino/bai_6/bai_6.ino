#define a 4
#define b 5
#define c 6
#define d 7
#define KEY1 A0
#define KEY2 A1
int dem = 0;

void led0() {
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
}

void nhiphan(int number) {
  if (number == 0) {
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
  }
  if (number == 1) {
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 1);
  }
  if (number == 2) {
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
  }
  if (number == 3) {
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
  }
  if (number == 4) {
    digitalWrite(b, 1);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
  }
  if (number == 5) {
    digitalWrite(b, 1);
    digitalWrite(c, 0);
    digitalWrite(d, 1);
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);

  pinMode(KEY1, INPUT);
  pinMode(KEY2, INPUT);
  led0();
}



void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(KEY1) == 0)
  {
    while (digitalRead(KEY1) == 0);
    dem = dem + 1;
    if (dem > 255)
      dem = 0;
  }
  if ( dem % 6 == 0)
  {
    nhiphan(0);
  }
  else if ( dem % 6 == 1)
  {
    nhiphan(1);
  }
  else if ( dem % 6 == 2)
  {
    nhiphan(2);
  }
  else if ( dem % 6 == 3)
  {
    nhiphan(3);
  }
  else if ( dem % 6 == 4)
  {
    nhiphan(4);
  }
  else if ( dem % 6 == 5)
  {
    nhiphan(5);
  }
}
