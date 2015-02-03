#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int motor=9;
int boton=7;
int botonval=0;
int pad=A5;
int padval=0;
int contador;
int menu=0;
int espiras=0;
int diametro1=0;
int diametro=0;
int largo1=0;
int largo=0;
float uH=0;
int ok=0;
int val=0;
int val1=0;
char D[3];
char D1[3];
char L[3];
char L1[3];

void setup() {

  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(pad,INPUT);
  pinMode(boton,INPUT); 
  pinMode(motor,OUTPUT);
  lcd.setCursor(0, 0);
  lcd.print("NEW LINE ROBOTIC");
  delay(1500);
  lcd.clear();
}

void loop() {

  switch (menu) {
  case 1:
    padN();
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("N=");
    lcd.setCursor(4, 0);  
    lcd.print(espiras);
    break;
  case 2:
    padD();
    lcd.home();
    lcd.setCursor(0,0);
    lcd.print("D=");
    lcd.setCursor(3, 0);
    sprintf(D, "%0.2d", diametro);
    lcd.print(D);      
    lcd.setCursor(5, 0);
    lcd.print(",");
    lcd.setCursor(6, 0);
    sprintf(D1, "%0.2d", diametro1);
    lcd.print(D1);
    lcd.setCursor(8, 0);
    lcd.print("CM");
    break;
  case 3:
    padD1();
    lcd.home();
    lcd.setCursor(0,0);
    lcd.print("D=");
    lcd.setCursor(3, 0);
    sprintf(D, "%0.2d", diametro);
    lcd.print(D);      
    lcd.setCursor(5, 0);
    lcd.print(",");
    lcd.setCursor(6, 0);
    sprintf(D1, "%0.2d", diametro1);
    lcd.print(D1);
    lcd.setCursor(8, 0);
    lcd.print("CM");

    break;
  case 4:
    padL();
    lcd.home();
    lcd.setCursor(0,0);
    lcd.print("L=");
    lcd.setCursor(4, 0);
    sprintf(L, "%0.2d", largo);
    lcd.print(L);

    lcd.setCursor(5, 0);
    lcd.print(",");
    lcd.setCursor(6, 0);
    sprintf(L1, "%0.2d", largo1);
    lcd.print(L1);
    lcd.setCursor(8, 0);
    lcd.print("CM");
    break;
  case 5:
    padL1();
    lcd.home();
    lcd.setCursor(0,0);
    lcd.print("L=");
    lcd.setCursor(4, 0);
    sprintf(L, "%0.2d", largo);
    lcd.print(L);

    lcd.setCursor(5, 0);
    lcd.print(",");
    lcd.setCursor(6, 0);
    sprintf(L1, "%0.2d", largo1);
    lcd.print(L1);
    lcd.setCursor(8, 0);
    lcd.print("CM");
    break;

  default: 
    padM();
    lcd.setCursor(0, 0);
    lcd.print("MENU N D L"); 
  }
}
