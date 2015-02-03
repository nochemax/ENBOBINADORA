void working(){
  lcd.clear();
  while(espiras>0 && diametro>0 && largo>0){

    val=(diametro,diametro1*diametro,diametro1)*(espiras*espiras); //calculo nucleo de aire 
    val1=(18*diametro,diametro1)+(40*largo,largo1);
    uH=0,395*(val/val1);

    lcd.setCursor(0, 0);
    lcd.print("uH="); 
    lcd.setCursor(4, 0);  
    lcd.print(uH);
    padF();

    while(ok==1){
      analogWrite(motor,200);
      botonval=digitalRead(boton);
      delay(100);    //tiempo de pse de la leva 
      if(botonval==HIGH){
        contador++;
      }
      lcd.setCursor(0, 0);
      lcd.print("ESPIRAS:"); 
      lcd.setCursor(10, 0);  
      lcd.print(contador);


      while(contador==espiras){
        analogWrite(motor,0);
        lcd.home();
        lcd.setCursor(4, 0);
        lcd.print("TERMINADO :)"); 

      }  
    }
  }
}
