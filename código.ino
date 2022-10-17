#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 2,1,0,4,5,6,7,3,POSITIVE);

#define BotA 2
#define BotB 3
#define BotC 4
#define BotD 5

int ponto = 0;


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
  lcd.begin(20, 4);
  
  lcd.setCursor(0,0);
  lcd.createChar(1, moonx);
  lcd.createChar(2, moony);
  lcd.createChar (3, moonz);
  lcd.createChar (4, moons);
  lcd.setCursor (0,0);
  lcd.setCursor(0,1);
  lcd.write(byte(2));
  lcd.setCursor(1, 1);
  lcd.write(byte(1));
  lcd.setCursor(0, 2);
  lcd.write (byte(3));
  lcd.setCursor (1, 2);
  lcd.write(byte(4));
  lcd.setCursor(20, 0);

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
  lcd.setCursor(20, 0);
 delay(5000);
 
  for(int i=0; i<=100; i++){
  lcd.scrollDisplayLeft();
  }
 
}

void loop(){
 
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Quanto vale PI?");
          lcd.setCursor(0,1);
         lcd.print("a) 3,45 b)2,14");
         lcd.setCursor(0,2);
         lcd.print("c)3,14 d)2,45");
         
        if(AnalisaBotao()=='C'){
          lcd.setCursor(0,3);
          lcd.print("Correto!");
           ponto = ponto + 10;
        }else {
          lcd.setCursor(0,1);
          lcd.setCursor(0,3);
          lcd.setCursor(0,4);
          lcd.print("Errado!");
        }

        
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Quem escreveu");
          lcd.setCursor(0,1);
          lcd.print("Iracema?");
          lcd.setCursor(0,2);
          lcd.print("a)Castro Alves  b)Jose de Alencar");
          lcd.setCursor(0,3);
          lcd.print("c)Caio Castro d)Hilda Hilst");
      if(AnalisaBotao()=='B'){
          lcd.setCursor(0,2);
          lcd.print("Correto!");
           ponto = ponto + 10;
        }else{
          lcd.setCursor(0,1);
          lcd.setCursor(0,3);
          lcd.setCursor(0,4);
          lcd.print("Errado!");

         
        lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Relacao harmonica:");
         lcd.setCursor(0,1);
          lcd.print("a)Parasitismo  b)Amensalismo");
        lcd.setCursor (0,2);
        lcd.print("c)Predatismo d)Mutualismo");
         if(AnalisaBotao()=='D'){
          lcd.setCursor(0,4);
          lcd.print("Correto!");
          ponto = ponto + 10;
        }else{
          lcd.setCursor(0,1);
          lcd.setCursor(0,2);
          lcd.setCursor(0,3);
          lcd.print("Errado!");
        }

        
        lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Quem foi Martinho Lutero?");
        lcd.setCursor(0,1);
          lcd.print("a)Cozinheiro  b)Padre");
          lcd.setCursor (0,2);
        lcd.print("c)Colonizador d)Monge Protestante");
        if(AnalisaBotao()=='D'){
          lcd.setCursor(0,4);
          lcd.print("Correto!");
          ponto = ponto + 10;
        }else{
          lcd.setCursor(0,1);
           lcd.setCursor(0,2);
           lcd.setCursor(0,3);
          lcd.print("Errado!");
        }

        
        lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Qual o maior bloco economico?");
        lcd.setCursor(0,1);
          lcd.print("a)Uniao Europeia b)Mercosul");
        lcd.setCursor (0,2);
        lcd.print("c)Nafta d)BRICS");
        if(AnalisaBotao()=='A'){
          lcd.setCursor(0,1);
          lcd.print("Correto!");
          ponto = ponto + 10;
        }else{
          lcd.setCursor(0,2);
           lcd.setCursor(0,3);
           lcd.setCursor(0,4);
          lcd.print("Errado!");
        }


        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Qual o valor do oxigenio?");
         lcd.setCursor(0,1);
          lcd.print("a)5u b)16u");
        lcd.setCursor (0,2);
        lcd.print("c)18u d)7u");
        if(AnalisaBotao()=='B'){
          lcd.setCursor(0,2);
          lcd.print("Correto!");
          ponto = ponto + 10;
        }else{
         lcd.setCursor(0,1);
          lcd.setCursor(0,3);
          lcd.setCursor(0,4);
          lcd.print("Errado!");
        }


        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Espelho de maquiagem e:");
        lcd.setCursor(0,1);
          lcd.print("a)Concavo b)Convexo");
        lcd.setCursor (0,2);
        lcd.print("c)Plano d)Diagonal");
          lcd.setCursor(0,1);
        if(AnalisaBotao()=='C'){
          lcd.setCursor(0,3);
          lcd.print("Correto!");
          ponto = ponto + 10;
        }else{
          lcd.setCursor(0,1);
           lcd.setCursor(0,2);
           lcd.setCursor(0,4);
          lcd.print("Errado!");
        }


         lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Traducao de balcony:");
         lcd.setCursor(0,1);
         lcd.print("a) Balconista b)Sacada");
         lcd.setCursor (0,2);
        lcd.print("c)Balcao d)Escada");
        if(AnalisaBotao()=='B'){
          lcd.setCursor(0,2);
          lcd.print("Correto!");
        }else{
          lcd.setCursor(0,1);
          lcd.setCursor(0,3);
          lcd.setCursor(0,4);
          lcd.print("Errado!");
        }


        lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Construcao da");
         lcd.setCursor (0,1);
         lcd.print("sociedade de Marx:");
         lcd.setCursor(0,2);
         lcd.print("a) Colonias b)Imperios");
         lcd.setCursor (0,3);
         lcd.print("c)Feudos d)Luta de classes");
        if(AnalisaBotao()=='D'){
          lcd.setCursor(0,1);
          lcd.print("Correto!");
          ponto = ponto + 10;
        }else{
          lcd.setCursor(0,1);
          lcd.setCursor(0,2);
          lcd.setCursor(0,3);
          lcd.print("Errado!");
        }


        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Qual a condicao");
          lcd.setCursor (0,1);
          lcd.print ("de Eder Oliveira?");
          lcd.setCursor(0,2);
          lcd.print ("a)Depressao b)TDAH");
           lcd.setCursor(0,3);
           lcd.print ("c)Daltonismo d)TOC");
          delay(5000);
        if(AnalisaBotao()=='C'){
          lcd.print("Correto!");
          ponto = ponto + 10;
        }else{
          lcd.setCursor(0,1);
          lcd.setCursor(0,2);
          lcd.setCursor(0,4);
          lcd.print("Errado!");
       
        }


        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Qual o menor pais");
          lcd.setCursor (0,1);
          lcd.print("do mundo?");
          lcd.setCursor (0,2);
          lcd.print ("a)Monaco b)Vaticano");
          lcd.setCursor(0,3);
          lcd.print("c)Maldivas d)Malta");
          delay(5000);
       
        if(AnalisaBotao()=='C'){
         
          lcd.print("Correto!");
          ponto = ponto + 10;
        }else{
          lcd.setCursor(0,1);
          lcd.setCursor(0,2);
          lcd.setCursor(0,4);
          lcd.print("Errado!");
  }
    
  }
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
