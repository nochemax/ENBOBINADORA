void padM(){

  padval=analogRead(pad);
  delay(250);   
  if(padval==141){   
    menu++;
    menu=min(menu,4);     
  }
  if((padval>=324)&&(padval<=350)){
    menu--;
    menu=max(menu,0);
  }
  if(padval==738){
    working();   
    lcd.clear();
  }
}

void padN(){

  padval=analogRead(pad);
  delay(150);   
  if(padval==141){   
    menu++;
    menu=min(menu,5);  
    lcd.clear();
  }
  if((padval>=324)&&(padval<=350)){
    menu--;
    menu=max(menu,0);
    lcd.clear(); 
  }
  if(padval==0){     
    espiras--;
    espiras=max(espiras,0);  
  }
  if((padval>=497)&&(padval<=520)){
    espiras++;
    espiras=min(espiras,9999999);// maximo de vueltas total en la bobina  
  }

  if(padval==738){
    working();  
    lcd.clear();
  }
}

void padD(){

  padval=analogRead(pad);
  delay(250);   

  if(padval==141){   
    menu++;
    menu=min(menu,5);  
    lcd.clear();
  }

  if((padval>=324)&&(padval<=350)){
    menu--;
    menu=max(menu,0);
    lcd.clear(); 
  }

  if(padval==0){     
    diametro--;
    diametro=max(diametro,0);  
  }

  if((padval>=497)&&(padval<=520)){
    diametro++;
    diametro=min(diametro,99);//valor maximo de la capacidad diamero
  }

  if(padval==738){
    working(); 
    lcd.clear();

  }
}


void padD1(){

   padval=analogRead(pad);
  delay(250);   

  if(padval==141){   
    menu++;
    menu=min(menu,5);  
    lcd.clear();
  }

  if((padval>=324)&&(padval<=350)){
    menu--;
    menu=max(menu,0);
    lcd.clear(); 
  }

  if(padval==0){     
    diametro1--;
    diametro1=max(diametro1,0);  
  }

  if((padval>=497)&&(padval<=520)){
    diametro1++;
    diametro1=min(diametro1,99);//valor maximo de largo bobina 
  }

  if(padval==738){
    working(); 
    lcd.clear();

  }
}

void padL(){

  padval=analogRead(pad);
  delay(250);   

  if(padval==141){   
    menu++;
    menu=min(menu,5);  
    lcd.clear();
  }

  if((padval>=324)&&(padval<=350)){
    menu--;
    menu=max(menu,0);
    lcd.clear(); 
  }

  if(padval==0){     
    largo--;
    largo=max(largo,0);
  }

  if((padval>=490)&&(padval<=530)){
    largo++;
    largo=min(largo,99); //valor maximo del largo   
  }
  if(padval==738){
    working();  
    lcd.clear();

  }
}


void padL1(){

  padval=analogRead(pad);
  delay(250);   

  if(padval==141){   
    menu++;
    menu=min(menu,5);  
    lcd.clear();
  }

  if((padval>=324)&&(padval<=350)){
    menu--;
    menu=max(menu,0);

    lcd.clear(); 
  }

  if(padval==0){     
    largo1--;
    largo1=max(largo1,0);
  }

  if((padval>=497)&&(padval<=520)){
    largo1++;
    largo1=min(largo1,9);  
  }

  if(padval==738){
    working(); 
    delay(350);
    lcd.clear();

  }
}


void padF(){

  padval=analogRead(pad);
  delay(150);   

  if(padval==738){
    ok=1;   
    lcd.clear();  
  }
}
