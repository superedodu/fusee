#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int PinButton = A1, PinSon = 9, pinMenu= A2;
bool buttonState = 0, chronoStart=0, menuChange=0;
long savedTime, timerM = 0, timerS=0, timer, vol1, vol2, varChrono, acc1, att1, dec2, acc2;
int menu= 0, decTerre,  attTerre, varEtape=0, planet, menuSelect=1 ;
String texte;


void setup() {
  pinMode (PinButton , INPUT);
  pinMode (PinSon, OUTPUT);
  pinMode (pinMenu , INPUT);
  Serial.begin(2400);
lcd.begin (16,2);

savedTime = 0;
timer =0;
planet = 15;
decTerre = 20000;
  
  attTerre = 22000;

}

void loop() {
  Choixplanet :                                            // CHOIX PLANETE
  switch (planet)
  {
    case 0 : 
    goto Lune;
    break;
    
    case 1 :
    goto Mars;
    break;

    case 2 :
    goto Venus;
    break; 

    case 3 : 
    goto Mercure;
    break;

    case 4:
    goto Ceres;
    break;

    case 5:
    goto Jupiter;
    break;

    case 6:
    goto Io;
    break;

    case 7 : 
    goto Europe;
    break;

    case 8 : 
    goto Ganymede;
    break;

    case 9 :
    goto Callisto;
    break;

    case 10 :
    goto Saturne;
    break;

    case 11 :
    goto Titan; 
    break;

    case 12 :
    goto Encelade;
    break;

    case 13 : 
    goto Uranus;
    break;

    case 14 :
    goto Neptune;
    break;
  }

  Menu :                                                                                                 // MENU
  buttonState = 0 ;
  Serial.print ("Menu ");Serial.print (menu); Serial.print ("Bouton : ") ; Serial.print(buttonState); Serial.print ("menu select : "); Serial.print (menuSelect);
  lcd.setCursor (0,0);
  lcd.print ("Choisir destination");
  menuChange = analogRead (pinMenu);

  switch (menuChange)
  {
    case 0 :
    break;

    case 1 : 
    menuSelect ++;
    break;
  }
  lcd.setCursor(0,1);

  switch (menuSelect)
  {
case 1 :                                                                                        // LUNE

  varEtape = 0;
  
  
  lcd.print ("     Lune ?     ");
    Serial.print ("menu Lune"); Serial.println ("  ");
   buttonState = analogRead (PinButton);
  switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 25000;
  vol1=33000;
  att1=15000;
  dec2=15000;
  acc2=23000;
  vol2=33000;
  planet = 0;

  Lune :
  goto etape;
  
  break;
}
break;

case 2 :                                                                                          // MARS

  varEtape = 0;

  
  lcd.print ("Mars ?");
    Serial.print ("menu mars"); Serial.println ("  ");
  
   buttonState = analogRead (PinButton);
  switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 49000;
  vol1=117000;
  att1=28000;
  dec2=21000;
  acc2=54000;
  vol2=117000;
  planet = 1;

  Mars :
  Serial.print ("mars Etape : "); Serial.println (varEtape);
  goto etape;
  
  break;
}
break;
case 3 :                                                                                           // VENUS
  
  lcd.print ("Venus ?");
    Serial.print ("menu venus"); Serial.println ("  ");
   buttonState = analogRead (PinButton);
  switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
   acc1 = 36000;
  vol1=95000;
  att1=43000;
  dec2=45000;
  acc2=32000;
  vol2=95000;
  planet = 2;

  Venus :
  Serial.print ("Venus Etape : "); Serial.println (varEtape);
  goto etape;
  
  break;
}
break;

case 4 :                                                                                          // MERCURE

 

  lcd.print ("Mercure ?");
    Serial.print ("menu mercure"); Serial.println ("  ");
   buttonState = analogRead (PinButton);
    switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 53000;
  vol1=125000;
  att1=19000;
  dec2=22000;
  acc2=48000;
  vol2=125000;
  planet = 3;
   Mercure :
goto etape;
  break;
}
break;

case 5 :                                                                                // CERES

  
  
  lcd.print ("Ceres ?");
    Serial.print ("menu ceres"); Serial.println ("  ");
   buttonState = analogRead (PinButton);
    switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 71000;
  vol1=139000;
  att1=17000;
  dec2=19000;
  acc2=67000;
  vol2=139000;
  planet = 4;
  Ceres :
goto etape;
  break;
}
break;

case 6 :                                                                            // JUPITER
  
  lcd.print ("Jupiter ?");
    Serial.print ("menu jupiter"); Serial.println ("  ");
   buttonState = analogRead (PinButton);
   switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 108000;
  vol1=165000;
  att1=0;
  dec2=0;
  acc2=108000;
  vol2=163000;
  planet = 5;
  Jupiter :
goto etape;
  break;
}
break;

case 7 :                                                                               // IO

  lcd.print ("Io ?");
    Serial.print ("menu io"); Serial.println ("  ");
   buttonState = analogRead (PinButton);
  switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 108000;
  vol1=165000;
  att1=17000;
  dec2=18000;
  acc2=107000;
  vol2=163000;
  planet = 6;
    Io :
goto etape;
  break;
}
break;

case 8 :                                                                               // EUROPE
  
  lcd.print ("Europe ?");
    Serial.print ("menu europe"); Serial.println ("  ");
   buttonState = analogRead (PinButton);
  switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 110000;
  vol1=167000;
  att1=19000;
  dec2=18000;
  acc2=109000;
  vol2=167000;
  planet = 7;
  Europe :
goto etape;
  break;
}
break;

case 9 :                                                                                 //GANYMEDE
  
  lcd.print ("Ganymede ?");
    Serial.print ("menu ganymede"); Serial.println ("  ");
   buttonState = analogRead (PinButton);
  switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 113000;
  vol1=170000;
  att1=18000;
  dec2=17;
  acc2=112000;
  vol2=170000;
  Ganymede :
goto etape;
  break;
}
break;

case 10 :                                                                               //CALLISTO

  lcd.print ("Callisto ?");
    Serial.print ("menu callisto"); Serial.println ("  ");
   buttonState = analogRead (PinButton);
  switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 115000;
  vol1=173000;
  att1=18000;
  dec2=17000;
  acc2=173000;
  vol2=22000;
  Callisto :
goto etape;
  break;
}
break;

case 11 :                                                                          //SATURNE

  lcd.print ("Saturne ?");
    Serial.print ("menu saturne"); Serial.println ("  ");
   buttonState = analogRead (PinButton);
  switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 195000;
  vol1=208000;
  att1=0;
  dec2=0;
  acc2=196000;
  vol2=205000;
  Saturne :
goto etape;
  break;
}
break;

case 12 :                                                                                // TITAN

  lcd.print ("Titan ?");
    Serial.print ("menu titan"); Serial.println ("  ");
   buttonState = analogRead (PinButton);
  switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 198000;
  vol1=209000;
  att1=26000;
  dec2=29000;
  acc2=193000;
  vol2=209000;
  Titan :
goto etape;
  break;
}
break;

case 13 :                                                                      // ENCELADE

  lcd.print ("Encelade ?");
    Serial.print ("menu encelade"); Serial.println ("  ");
   buttonState = analogRead (PinButton);
  switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 196000;
  vol1=209000;
  att1=21000;
  dec2=22000;
  acc2=194000;
  vol2=208000;
   Encelade :
goto etape;
  break;
}
break;

case 14 :                                                                                         // URANUS

  lcd.print ("Uranus ?");
    Serial.print ("menu uranus"); Serial.println ("  ");
   buttonState = analogRead (PinButton);
  switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 270000;
  vol1=355000;
  att1=0;
  dec2=0;
  acc2=268000;
  vol2=355000;
    Uranus :
goto etape;
  break;
}
break;

case 15 :                                                                      // NEPTUNE

    lcd.print ("Neptune ?");
  Serial.println ("menu neptune  ");
  buttonState = analogRead (PinButton);
  switch (buttonState) {
  case 0 :
  delay(100);
  goto Menu;
  break;
  case 1 :
  acc1 = 347000;
  vol1=515000;
  att1=0;
  dec2=0;
  acc2=339000;
  vol2=521000;
  Neptune :
goto etape;
  break;
  }
break;

case 16 :
  menuSelect = 1;
  goto Menu;
break;
}

                                                               // DEBUT CHRONO
chrono :     
Serial.print("   Début chrono  ");
  chronoStart = 0;                                                // CHRONO
  timer = 0;

  buttonState = analogRead (PinButton);
  if (buttonState == 0)
  {
    goto chrono;
  }
  if (buttonState == 1)
  {
  while (timer >= 0)
  {
 
    if ( chronoStart == 0)
    {
         savedTime = millis();

  timer = ((varChrono) - (millis()-savedTime)); // Temps restant  = 60s - temps depuis initialisation
  chronoStart =1;
    }
  timer = varChrono- (millis()-savedTime);
  
  timerM= timer /60000; // Minutes restantes = Temps total restant en ms / 60*1000
  timerS= timer%60000/1000; // Secondes restantes = temps restant - minutes restantes
  Serial.print ("chrono Etape : "); Serial.print (varEtape);Serial.print (" Secondes : ");Serial.println (timerS);
 lcd.clear();
 lcd.setCursor (0,0);
 lcd.print (texte);
  lcd.setCursor (6,1);
  lcd.print (timerM);
  lcd.setCursor (7,1);
  lcd.print (":");
  lcd.setCursor (8,1);
  lcd.print (timerS);
  delay(100);


if (timerS < 1)
{
  tone (PinSon, 880);
delay (300);
noTone (PinSon);
delay (600);
}
  }
  goto Choixplanet;
  }
                                                                                          // FIN CHRONO

  etape :                                                                                 // ETAPE
  switch (varEtape)
  {
    
    
    case 0 :
    texte = "Decollage";
    lcd.setCursor (0,0);
    lcd.print (texte);
    Serial.print (planet) ; Serial.print (" ETAPE 0"); Serial.print ("  varChrono : "); Serial.print (varChrono); Serial.print ("timer : "); Serial.print (timer);
  varChrono = decTerre;
  varEtape = varEtape + 1;
  
goto chrono;
  break;
  
    case 1 :
     texte = "Acceleration :";
    lcd.setCursor (0,0);
    lcd.print (texte);
    Serial.print (planet);  Serial.print (" ETAPE 1"); Serial.print ("  varChrono : "); Serial.print (varChrono); Serial.print ("timer : "); Serial.print (timer);
  varChrono = acc1;
  varEtape = varEtape + 1;
 

goto chrono;
  break;
  

  case 2 :
 texte = " Vol : ";
    lcd.setCursor (0,0);
    lcd.print (texte);
       Serial.print (planet); Serial.print (" ETAPE 2"); Serial.print ("  varChrono : "); Serial.print (varChrono); Serial.print ("timer : "); Serial.print (timer);
  varChrono = vol1;
  varEtape = varEtape + 1;
 
goto chrono;
  break;

  case 3 : 
  texte = "Alunissage";
    lcd.setCursor (0,0);
    lcd.print (texte);
       Serial.print (planet); Serial.print (" ETAPE 3"); Serial.print ("  varChrono : "); Serial.print (varChrono); Serial.print ("timer : "); Serial.print (timer);
  varChrono = att1;
  if (varChrono == 0);
  {
    lcd.print ("Phase orbitale en cours ...");
  }
  varEtape ++;
  
goto chrono;
  break;

  case 4 : 
texte = " Decollage : ";
    lcd.setCursor (0,0);
    lcd.print (texte);
       Serial.print (planet); Serial.print (" ETAPE 4"); Serial.print ("  varChrono : "); Serial.print (varChrono); Serial.print ("timer : "); Serial.print (timer);
  varChrono = dec2;
  if (varChrono == 0);
  {
    lcd.print ("Phase orbitale en cours ...");
  }
 varEtape ++;
  
goto chrono;
  break;

  case 5: 
texte = "Acceleration";
    lcd.setCursor (0,0);
    lcd.print (texte);
   Serial.print (planet); Serial.print (" ETAPE 5"); Serial.print ("  varChrono : "); Serial.print (varChrono); Serial.print ("timer : "); Serial.print (timer);
  varChrono = acc2;
  varEtape ++;
  
goto chrono;
  break;

  case 6 : 
  texte = "Vol :";
    lcd.setCursor (0,0);
    lcd.print (texte);
   Serial.print (planet); Serial.print (" ETAPE 6"); Serial.print ("  varChrono : "); Serial.print (varChrono); Serial.print ("timer : "); Serial.print (timer);
  varChrono = vol2;
  varEtape ++;
  
goto chrono;
  break;

  case 7:
  texte = "Atterissage";
    lcd.setCursor (0,0);
    lcd.print (texte);
   Serial.print (planet); Serial.print (" ETAPE 7"); Serial.print ("  varChrono : "); Serial.print (varChrono); Serial.print ("timer : "); Serial.print (timer);
  varChrono = attTerre;
  varEtape ++;
  
goto chrono;
  break;
  
  case 8 : 
  goto Menu;
  break;
  }  // FIN SWITCH ETAPE
  
 
  }  // FIN VOID LOOP

  


