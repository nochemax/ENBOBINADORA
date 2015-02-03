void padM(){ //funcion keypad menu principal 

  padval=analogRead(pad);// read boton 
  delay(250);   
  if(padval==141){   //boton up menu
    menu++;
    menu=min(menu,4);     
  }
  if((padval>=324)&&(padval<=350)){ //boton down menu
    menu--;
    menu=max(menu,0);
  }
  if(padval==738){ //  calculo 
    working();   
    lcd.clear();
  }
}

void padN(){ //funcion keypad contdor de espiras

  padval=analogRead(pad);  // read boton 
  delay(150);   
  if(padval==141){   //boton up menu
    menu++;
    menu=min(menu,5);  
    lcd.clear();
  }
  if((padval>=324)&&(padval<=350)){// boton down menu
    menu--;
    menu=max(menu,0);
    lcd.clear(); 
  }
  if(padval==0){     //left resta espiras
    espiras--;
    espiras=max(espiras,0);  
  }
  if((padval>=497)&&(padval<=520)){//right suma espiras
    espiras++;
    espiras=min(espiras,9999999);// maximo de vueltas total en la bobina  
  }

  if(padval==738){// calculo
    working();  
    lcd.clear();
  }
}

void padD(){ //funcion keypad diametro unidades

  padval=analogRead(pad); //read boton 
  delay(250);   

  if(padval==141){   // boton up menu 
    menu++;
    menu=min(menu,5);  
    lcd.clear();
  }

  if((padval>=324)&&(padval<=350)){ // boton down menu
    menu--;
    menu=max(menu,0);
    lcd.clear(); 
  }

  if(padval==0){     // left menos unidades de diametro
    diametro--;
    diametro=max(diametro,0);  
  }

  if((padval>=497)&&(padval<=520)){ //right mas unidades de diametro
    diametro++;
    diametro=min(diametro,99);//valor maximo de la capacidad diamero
  }

  if(padval==738){
    working(); 
    lcd.clear();

  }
}


void padD1(){// funcion keypad decima diametro

   padval=analogRead(pad);// read boton 
  delay(250);   

  if(padval==141){   //boton up menu
    menu++;
    menu=min(menu,5);  
    lcd.clear();
  }

  if((padval>=324)&&(padval<=350)){// boton down menu
    menu--;
    menu=max(menu,0);
    lcd.clear(); 
  }

  if(padval==0){     // menos decimas de diametro
    diametro1--;
    diametro1=max(diametro1,0);  
  }

  if((padval>=497)&&(padval<=520)){ // mas decimas de diametro
    diametro1++;
    diametro1=min(diametro1,99);//valor maximo de largo bobina 
  }

  if(padval==738){
    working(); // calculos
    lcd.clear();

  }
}

void padL(){ // funcion keypad unidades largo de la bobina 

  padval=analogRead(pad);//read boton
  delay(250);   

  if(padval==141){   // boton up menu
    menu++;
    menu=min(menu,5);  
    lcd.clear();
  }

  if((padval>=324)&&(padval<=350)){ // boton down menu
    menu--;
    menu=max(menu,0);
    lcd.clear(); 
  }

  if(padval==0){     // left menos unidades de largo 
    largo--;
    largo=max(largo,0);
  }

  if((padval>=490)&&(padval<=530)){ //right mas unidades de largo 
    largo++;
    largo=min(largo,99); //valor maximo del largo   
  }
  if(padval==738){
    working();  
    lcd.clear();

  }
}


void padL1(){ // funcion keypad decimas de largo de la bobina 

  padval=analogRead(pad); // boton read 
  delay(250);   

  if(padval==141){   // boton up menu 
    menu++;
    menu=min(menu,5);  
    lcd.clear();
  }

  if((padval>=324)&&(padval<=350)){ // boton down meu 
    menu--;
    menu=max(menu,0);

    lcd.clear(); 
  }

  if(padval==0){     // left menos decimas de largo 
    largo1--;
    largo1=max(largo1,0);
  }

  if((padval>=497)&&(padval<=520)){ // right mas decimas de largo 
    largo1++;
    largo1=min(largo1,9);  
  }

  if(padval==738){
    working();  // menu final con calculo 
    delay(350);
    lcd.clear();

  }
}


void padF(){ // funcion keypad menu calculos 

  padval=analogRead(pad);
  delay(150);   

  if(padval==738){
    ok=1;   
    lcd.clear();  
  }
}
