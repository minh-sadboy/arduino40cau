#define a 13
#define b 12
#define c 11
#define d 10
#define e 9
#define f 8
#define g 7
#define KEY1 A0
int dem = 0;


void number0() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 0);
}

void number1() {
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
}

void number2() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 0);
  digitalWrite(g, 1);
}

void number3() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 1);
}

void number4() {
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
}

void number5() {
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
}

void number6() {
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
}

void number7() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
}

void number8() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
}

void number9() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  pinMode(KEY1, INPUT);
  number0();

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
  if ( dem % 5 == 0)
  {
    number0();
  }
  else if ( dem % 5 == 1)
  {
    number1();
  }
  else if ( dem % 5 == 2)
  {
    number2();
  }
  else if ( dem % 5 == 3)
  {
    number3();
  }
  else if ( dem % 5 == 4)
  {
    number4();
  }
}
