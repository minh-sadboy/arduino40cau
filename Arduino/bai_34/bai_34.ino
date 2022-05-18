#define KEY1 10
#define KEY2 7
int b[10];
int N = 10;
void Taomang(int *a, int n) {
  int i;
  for ( i = 0; i < n; i++) {
    *(a + i) = random(50);
  }
}

void Hienthi(int *a, int n) {
  int i;
  for (i = 0; i < n; i++) {
    Serial.print(*(a + i));
    Serial.print(" ");
  }
  Serial.println(" ");
}

void Hoanvi( int *a, int *b) {
  int tg;
  tg = *a;
  *a = *b;
  *b = tg;
}

void Sapxeptang( int *a, int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (*(a + i) > *(a + j)) {
        Hoanvi(a + i, a + j);
      }
    }
  }

}

int Minmangle(int *a, int n)
{ int i;
  int min;
  min = *(a + 0);
  for (i = 1; i < n; i++)
    if ( min % 2 != 0){
      if (*(a + i) < min)
      min = *(a + i) ;
    }
  return min;
}

void setup() {
  // put your setup code here, to run once:
  pinMode(KEY1, INPUT);
  pinMode(KEY2, INPUT);
  Serial.begin(9600);
  Taomang(b, N);
  Serial.println(" Mang vua tao la");
  Hienthi(b, N);
  delay(200);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(KEY1) == 0) {
    while (digitalRead(KEY1) == 0);
    Serial.println(" Sap xep mang la");
    Sapxeptang(b, N);
    Hienthi(b, N);
  }
   if (digitalRead(KEY2) == 0) {
    while (digitalRead(KEY2) == 0);
    Serial.println(" Gia tri min la");
    Serial.println(Minmangle(b, N));
  }
}
