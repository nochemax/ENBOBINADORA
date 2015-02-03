#include <LiquidCrystal.h>
//pin
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int motor=9;
int boton=7;
int botonval=0;
int pad=A5;
//variables
int padval=0; //variable valor boton 
int contador; //contador de vueltas
int menu=0;// variable menu
long int espiras=0; // numero de vueltas 
float diametro=0;// unidades de diametro
float largo=0; //  largo bobina 
float uH=0;// resultado de la capacidad de la bobina
int ok=0;// //variable simple 1 o 0 
int val=0; // variable de calculos
int val1=0;//variable de calculos


void setup() {// configuraciion de la placa 
  
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
    lcd.print(diametro);
    lcd.setCursor(8, 0);
    lcd.print("CM");
    break;
  case 3:
    padD1();
    lcd.home();
    lcd.setCursor(0,0);
    lcd.print("D=");
    lcd.setCursor(3, 0);
    lcd.print(diametro);
    lcd.setCursor(8, 0);
    lcd.print("CM");
    break;
  case 4:
    padL();
    lcd.home();
    lcd.setCursor(0,0);
    lcd.print("L=");
    lcd.setCursor(3, 0);
    lcd.print(largo);
    lcd.setCursor(8, 0);
    lcd.print("CM");
    break;
  case 5:
    padL1();
    lcd.home();
    lcd.setCursor(0,0);
    lcd.print("L=");
    lcd.setCursor(3, 0);
    lcd.print(largo);
    lcd.setCursor(8, 0);
    lcd.print("CM");
    break;

  default: 
    padM();
    lcd.setCursor(0, 0);
    lcd.print("MENU N D L"); 
  }
}
