void working(){ // funcion de menu de calculo
  lcd.clear();
  while(espiras>0 && diametro>0 && largo>0){ // conprobacion de la configuracion 

    val=(diametro,diametro1*diametro,diametro1)*(espiras*espiras); //calculo nucleo de aire 
    val1=(18*diametro,diametro1)+(40*largo,largo1);
    uH=0,395*(val/val1);

    lcd.setCursor(0, 0);// muestra en lcd resultados 
    lcd.print("uH="); 
    lcd.setCursor(4, 0);  
    lcd.print(uH);
    padF(); // funcion key pad boton enter ok = 1 

    while(ok==1){ // inicio del funcionamiento 
      analogWrite(motor,200); // encendido del motor 
      botonval=digitalRead(boton); // contador del boton 
      delay(100);    //tiempo de pse de la leva "ajustar segun el boton" 
      if(botonval==HIGH){ // contador sumatorio 
        contador++;
      }
      lcd.setCursor(0, 0); // muestra en lcd las espiras dadas al nucleo 
      lcd.print("ESPIRAS:"); 
      lcd.setCursor(10, 0);  
      lcd.print(contador);


      while(contador==espiras){ // comprobacion de las espiras dadas al nucleo y estop de la maquina 
        analogWrite(motor,0); // motor 0 
        lcd.home();           // mostramos en pantalla la terminacion 
        lcd.setCursor(4, 0);
        lcd.print("TERMINADO :)"); 

      }  
    }
  }
}
