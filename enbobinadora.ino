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
int espiras=0; // numero de vueltas 
int diametro1=0;// decenas de diametro  unidades,decena representacion en lcd
int diametro=0;// unidades de diametro
int largo1=0; // decenas de largo bobina
int largo=0; // unidades de largo bobina 
float uH=0;// resultado de la capacidad de la bobina
int ok=0;// //variable simple 1 o 0 
int val=0; // variable de calculos
int val1=0;//variable de calculos
char D[3];//variables de muestra en pantalla sprintf
char D1[3];
char L[3];
char L1[3];

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

  switch (menu) {// menu de pantalla
  case 1:
    padN();// funcion pad para cambiar el valor de espiras
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("N=");
    lcd.setCursor(4, 0);  
    lcd.print(espiras);
    break;
  case 2:
    padD();// funcion pad para cambiar el valor de diametro unidades
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
    padD1(); // funcion pad para cambiar el valor de diametro decenas
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
    padL();// funcion pad para cambiar el valor de largo unidades
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
    padL1();// funcion pad para cambiar el valor de decenas
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
    padM();// menu principal 
    lcd.setCursor(0, 0);
    lcd.print("MENU N D L"); 
  }
}
