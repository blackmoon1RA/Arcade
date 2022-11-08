#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27,20,4);
/*Embaralhar as perguntas e respostas*/
#define BotA 3
#define BotB 5
#define BotC 6
#define BotD 8

int ponto = 0;
int t = 0;

byte moonx[10] = {
  B10000,
  B01000,
  B01000,
  B00110,
  B00001,
  B00001,
  B00010,
  B00100,
};
byte moony[10] = {
  B00001,
  B00010,
  B00010,
  B01100,
  B10000,
  B10000,
  B01000,
  B00100,
};
byte moonz[10] = {
  B00100,
  B00101,
  B00011,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};
byte moons[10] = {
  B00100,
  B10100,
  B11000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};
 
void setup(){
   
  pinMode(BotA, INPUT_PULLUP);
  pinMode(BotB, INPUT_PULLUP);
  pinMode(BotC, INPUT_PULLUP);
  pinMode(BotD, INPUT_PULLUP);
  pinMode(4, INPUT);
  lcd.init();
   lcd.backlight();
  lcd.setCursor(0,0);
  lcd.createChar(1, moonx);
  lcd.createChar(2, moony);
  lcd.createChar (3, moonz);
  lcd.createChar (4, moons);
  lcd.setCursor(0,1);
  lcd.write(byte(2));
  lcd.setCursor(1, 1);
  lcd.write(byte(1));
  lcd.setCursor(0, 2);
  lcd.write (byte(3));
  lcd.setCursor (1, 2);
  lcd.write(byte(4));
  lcd.setCursor(2,1);
  lcd.print("Seja Bem Vindo!");
 
  lcd.setCursor(17, 1);
  lcd.write(byte(2));
  lcd.setCursor(18, 1);
  lcd.write(byte(1));
  lcd.setCursor(17, 2);
  lcd.write (byte(3));
  lcd.setCursor (18, 2);
  lcd.write(byte(4));

 
 
 /*for(int i=0; i<=100; i++){
  lcd.scrollDisplayLeft();
  }*/
  delay(5000);
}

void loop(){
  
  if(t==12){
  ponto=0; 
  }

 switch(t) {
  case 0:
         lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Quanto vale PI?");
         lcd.setCursor(0,1);
         lcd.print("a)3,45 b)2,14");
         lcd.setCursor(0,2);
         lcd.print("c)3,14 d)2,45");
         //digitalWrite(4, HIGH);
         
        if(AnalisaBotao()=='C'){
          certo();
        }else {
          errado();
        }
        delay(2000);
  break;
  case 1://///////
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Obra de Jose de");
          lcd.setCursor(0,1);
          lcd.print("Alencar:");
          lcd.setCursor(0,2);
          lcd.print("a)O Ateneu b)Iracema");
          lcd.setCursor(0,3);
          lcd.print("c)Vidas Secas d)Maus");
      if(AnalisaBotao()=='B'){
         certo();
        }else{
         errado(); }
         delay(2000);
break;

         case 2://///////
        lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Relacao harmonica:");
         lcd.setCursor(0,1);
          lcd.print("a)Parasita b)Fungos");
        lcd.setCursor (0,2);
        lcd.print("c)Hifas d)Mutualismo");
         if(AnalisaBotao()=='D'){
          certo();
        }else{
          errado();
        }
        delay(2000);
break;

case 3: /////////
       
        lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Quem foi Martinho");
        lcd.setCursor(0,1);
        lcd.print("Lutero?");
        lcd.setCursor(0,2);
          lcd.print("a)Rei b)Padre");
          lcd.setCursor (0,3);
        lcd.print("c)Imperador d)Monge");
        if(AnalisaBotao()=='D'){
          certo();
        }else{
          errado();
        }
        delay(2000);
break;

case 4:////////
        lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Qual o maior bloco");
        lcd.setCursor(0,1);
        lcd.print("economico?");
        lcd.setCursor (0,2);
          lcd.print("a)UE b)Mercosul");
        lcd.setCursor (0,3);
        lcd.print("c)Nafta d)BRICS");
        if(AnalisaBotao()=='A'){
          certo();
        }else{
          errado();
        }
        delay(2000);
break;

case 5://///////

        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Qual o valor do");
         lcd.setCursor(0,1);
         lcd.print("oxigenio?");
         lcd.setCursor(0,2);
          lcd.print("a)5u b)16u");
        lcd.setCursor (0,3);
        lcd.print("c)18u d)7u");
        if(AnalisaBotao()=='B'){
          certo();
        }else{
         errado();
        }
        delay(2000);
break;

case 6://////
 
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Espelho de maquiagem e:");
        lcd.setCursor(0,1);
          lcd.print("a)Concavo b)Convexo");
        lcd.setCursor (0,2);
        lcd.print("c)Plano d)Diagonal");
        if(AnalisaBotao()=='A'){
          certo();
        }else{
          errado();
        }
        delay(2000);
break;

case 7://////////
         lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Traducao de balcony:");
         lcd.setCursor(0,1);
         lcd.print("a)Balao b)Sacada");
         lcd.setCursor (0,2);
        lcd.print("c)Balcao d)Escada");
        if(AnalisaBotao()=='B'){
          certo();
        }else{
          errado();
        }
        delay(2000);
break;

case 8://////////

        lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Sociedade baseada na");
         lcd.setCursor (0,1);
         lcd.print("luta de classes:");
         lcd.setCursor(0,2);
         lcd.print("a)Marx b)Weber");
         lcd.setCursor (0,3);
         lcd.print("c)Freire d)Comte");
        if(AnalisaBotao()=='A'){
          certo();
        }else{
          errado();
        }
        delay(2000);
break;

case 9://////////

        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Qual a condicao");
          lcd.setCursor (0,1);
          lcd.print ("de Eder Oliveira?");
          lcd.setCursor(0,2);
          lcd.print ("a)Depressao b)TDAH");
           lcd.setCursor(0,3);
           lcd.print ("c)Daltonismo d)TOC");
        if(AnalisaBotao()=='C'){
          certo();
        }else{
          errado();
        }
        delay(2000);
        break;

case 10:////////
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Qual o menor pais");
          lcd.setCursor (0,1);
          lcd.print("do mundo?");
          lcd.setCursor (0,2);
          lcd.print ("a)Monaco b)Vaticano");
          lcd.setCursor(0,3);
          lcd.print("c)Maldivas d)Malta");
       
        if(AnalisaBotao()=='B'){
         certo();
        }else{
          errado();
          } delay(2000);
  break;
  
  case 11:  
         lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("O Descobrimento do");
          lcd.setCursor (0,1);
          lcd.print("Brasil foi em:");
          lcd.setCursor (0,2);
          lcd.print ("a)1498 b)1500");
          lcd.setCursor(0,3);
          lcd.print("c)1375 d)1545");
       
        if(AnalisaBotao()=='B'){
         certo();
        }else{
          errado();
          } delay(2000);
  break;

 case 12:  
         lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Qual nao e uma");
          lcd.setCursor (0,1);
          lcd.print("fase lunar:");
          lcd.setCursor (0,2);
          lcd.print ("a)minguante b)cheia");
          lcd.setCursor(0,3);
          lcd.print("c)vazia d)crescente");
       
        if(AnalisaBotao()=='C'){
         certo();
        }else{
          errado();
          } delay(2000);
  break;
  
  case 13:  
         lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Idade do");
          lcd.setCursor (0,1);
          lcd.print("Shawn Mendes:");
          lcd.setCursor (0,2);
          lcd.print ("a)24 b)21");
          lcd.setCursor(0,3);
          lcd.print("c)30 d)23");
       
        if(AnalisaBotao()=='A'){
         certo();
        }else{
          errado();
          } delay(2000);
  break;

  case 14:  
         lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Quantas cores tem");
          lcd.setCursor (0,1);
          lcd.print("tem o arco-iris:");
          lcd.setCursor (0,2);
          lcd.print ("a)5 b)9");
          lcd.setCursor(0,3);
          lcd.print("c)10 d)7");
       
        if(AnalisaBotao()=='D'){
         certo();
        }else{
          errado();
          } delay(2000);
  break;
  case 15:  
         lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Maior estrela do");
          lcd.setCursor (0,1);
          lcd.print("sistema solar:");
          lcd.setCursor (0,2);
          lcd.print ("a)Sol b)Sirius");
          lcd.setCursor(0,3);
          lcd.print("c)Vega d)Rigel");
       
        if(AnalisaBotao()=='A'){
         certo();
        }else{
          errado();
          } delay(2000);
  break;
  
  case 16:
    lcd.clear();
    lcd.setCursor(1,1);
    lcd.print("Fim do jogo!");
    lcd.setCursor(1,2);
    lcd.print(ponto);
    lcd.setCursor(9,2);
    lcd.print("ponto(s)");
     delay(5000);
  break;
 }
  t++;
   
  }

 


  char AnalisaBotao(){
  bool BotaoPressionado = true;
 
  while(BotaoPressionado){
    if(!digitalRead(BotA)){
      BotaoPressionado = false;
      return 'A';
    }else if(!digitalRead(BotB)){
      BotaoPressionado = false;
      return 'B';
    }else if(!digitalRead(BotC)){
      BotaoPressionado = false;
      return 'C';
    }else if(!digitalRead(BotD)){
      BotaoPressionado = false;
      return 'D';
   }
  }
 }

void certo (){
   lcd.clear();
   ponto = ponto + 10;
   lcd.setCursor(0,1);
   lcd.print("Correto!");
   lcd.setCursor(8,1);
   lcd.print(ponto);
   lcd.setCursor(11,1);
   lcd.print("ponto(s)");
 }


 void errado (){
   lcd.clear();
   lcd.setCursor(0,1);
   lcd.print("Errado!");
   lcd.setCursor(8,1);
   lcd.print(ponto);
   lcd.setCursor(11,1);
   lcd.print("ponto(s)");
 }

