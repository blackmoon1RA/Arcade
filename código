#include <Wire.h>
#include <LiquidCrystal_I2C.h>


#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

#define BotA 2
#define BotB 3
#define BotC 4
#define BotD 5

int ponto = 0;
int nQuestao = 10;
int array[10];


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

 
  {  
   
  pinMode(BotA, INPUT);
  pinMode(BotB, INPUT);
  pinMode(BotC, INPUT);
  pinMode(BotD, INPUT);
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0,0);
}
  lcd.createChar(1, moonx);
  lcd.createChar(2, moony);
  lcd.createChar (3, moonz);
  lcd.createChar (4, moons);
   lcd.setCursor (0,0);
 lcd.setCursor(14, 0);
  lcd.write(byte(2));
  lcd.setCursor(15, 0);
  lcd.write(byte(1));
  lcd.setCursor(14, 1);
  lcd.write (byte(3));
  lcd.setCursor (15, 1);
  lcd.write(byte(4));
  lcd.setCursor(16, 0);
 
   lcd.print("Seja Bem Vindo!");
 
  lcd.createChar(1, moonx);
  lcd.createChar(2, moony);
  lcd.createChar (3, moonz);
  lcd.createChar (4, moons);
   lcd.setCursor (0,0);
 lcd.setCursor(31, 0);
  lcd.write(byte(2));
  lcd.setCursor(32, 0);
  lcd.write(byte(1));
  lcd.setCursor(31, 1);
  lcd.write (byte(3));
  lcd.setCursor (32, 1);
  lcd.write(byte(4));
 
 
  for(int i=0; i<=100; i++){
  lcd.scrollDisplayLeft();
   
 
  }
 Serial.begin(9600);
 lcd.clear();
 delay(100);
 
 geraSequencia();
}

void loop(){
 
 
  for (int i = 0; i < nQuestao; i++)
      SelecionaQuestao(array[i]);
 
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Fim de Jogo!");
 
  delay(2000);
}
  }
void SelecionaQuestao(int nQuestao){
 
  switch(nQuestao){
    case 0:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Quanto vale PI?");
          lcd.setCursor(0,1);
         lcd.print("a) 3,45");
         lcd.setCursor(0,2);
         lcd.print("b) 2,14");
         lcd.setCursor(0,3);
         lcd.print("c) 3,14");
         lcd.setCursor(0,4);
         lcd.print("d) 2,45");
         
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
    break;
    case 1:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Quem escreveu Iracema?")
          lcd.setCursor(0,1);
          lcd.print("a) Castro Alves");
         lcd.setCursor(0,2);
         lcd.print("b) José de Alencar");
         lcd.setCursor(0,3);
         lcd.print("c) Caio Castro");
         lcd.setCursor(0,4);
         lcd.print("d) Hilda Hilst");
   
      if(AnalisaBotao()=='b'){
          lcd.setCursor(0,2);
          lcd.print("Correto!");
           ponto = ponto + 10;
        }else{
          lcd.setCursor(0,1);
          lcd.setCursor(0,3);
          lcd.setCursor(0,4);
          lcd.print("Errado!");
         
    break;
    case 2:
        lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Relacao harmonica:");
         lcd.setCursor(0,1);
         lcd.print("a) Parasitismo");
         lcd.setCursor(0,2);
         lcd.print("b) Amensalismo");
         lcd.setCursor(0,3);
         lcd.print("c) Predatismo");
         lcd.setCursor(0,4);
         lcd.print("d)Mutualismo");
       
         if(AnalisaBotao()=='d'){
          lcd.setCursor(0,4);
          lcd.print("Correto!");
          ponto = ponto + 10;
        }else{
          lcd.setCursor(0,1);
          lcd.setCursor(0,2);
          lcd.setCursor(0,3);
          lcd.print("Errado!");
        }
    break;
    case 3:
        lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Quem foi Martinho Lutero?");
         lcd.setCursor(0,1);
         lcd.print("a) Cozinheiro");
         lcd.setCursor(0,2);
         lcd.print("b) Padre");
         lcd.setCursor(0,3);
         lcd.print("c) Colonizador");
         lcd.setCursor(0,4);
         lcd.print("d) Monge protestante");
       
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
    break;
    case 4:
        lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Qual o maior bloco economico?")
         lcd.setCursor(0,1);
         lcd.print("a) Uniao Europeia");
         lcd.setCursor(0,2);
         lcd.print("b) Mercosul");
         lcd.setCursor(0,3);
         lcd.print("c) Nafta");
         lcd.setCursor(0,4);
         lcd.print("d) BRICS");
       
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
    break;
    case 5:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Qual o valor do oxigenio?");
          lcd.setCursor(0,1);
          lcd.print("a) 5u");
          lcd.setCursor(0,2);
          lcd.print("b) 16u");
          lcd.setCursor(0,3);
          lcd.print("c) 18u");
          lcd.setCursor(0,4);
          lcd.print("d) 7u");
       
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
    break;
    case 6:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Espelho de maquiagem é:");
          lcd.setCursor(0,1);
          lcd.print("a) Concavo");
          lcd.setCursor(0,2);
          lcd.print("b) Convexo");
          lcd.setCursor(0,3);
          lcd.print("c) Plano");
          lcd.setCursor(0,4);
          lcd.print("d) Diagonal");
       
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
    break;
    case 7:
         lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Traducao de balcony:");
         lcd.setCursor(0,1);
         lcd.print("a) Balconista");
         lcd.setCursor(0,2);
         lcd.print("b) Sacada");
         lcd.setCursor(0,3);
         lcd.print("c) Balcão");
         lcd.setCursor(0,4);
         lcd.print("d) Escada");
   
        if(AnalisaBotao()=='b'){
          lcd.setCursor(0,2);
          lcd.print("Correto!");
        }else{
          lcd.setCursor(0,1);
          lcd.setCursor(0,3);
          lcd.setCursor(0,4);
          lcd.print("Errado!");
        }
    break;
    case 8:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Construcao da sociedade de Marx:");
          lcd.setCursor(0,1);
          lcd.print("a) Balconista");
          lcd.setCursor(0,2);
          lcd.print("b) Sacada");
          lcd.setCursor(0,3);
          lcd.print("c) Balcão");
          lcd.setCursor(0,4);
          lcd.print("d) Escada");
       
        if(AnalisaBotao()=='A'){
          lcd.setCursor(0,1);
          lcd.print("Correto!");
          ponto = ponto + 10;
        }else{
          lcd.setCursor(0,1);
          lcd.print("Errado!");
        }
    break;
    case 9:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Qual a condicao de Éder Oliveira?");
    lcd.scrollDisplayLeft();
        if(AnalisaBotao()=='B'){
          lcd.setCursor(0,1);
          lcd.print("Correto!");
          ponto = ponto + 10;
        }else{
          lcd.setCursor(0,1);
          lcd.print("Errado!");
       
        }
    break;
  }
 
}

char AnalisaBotao(){
  bool BotaoPressionado = true;
 
  while(BotaoPressionado){
    if(digitalRead(BotA)){
      BotaoPressionado = false;
      return 'A';
    }else if(digitalRead(BotB)){
      BotaoPressionado = false;
      return 'B';
    }else if(digitalRead(BotC)){
      BotaoPressionado = false;
      return 'C';
    }else if(digitalRead(BotD)){
      BotaoPressionado = false;
      return 'D';
    }
  }
}


void geraSequencia(){
  randomSeed(random(0, 1000));
  for (int i = 0; i < nQuestao; i++){    
    array[i] = i;
  }
  for (int i = 0; i < nQuestao; i++) {    
    int temp = array[i];
    int novoIndice = random(nQuestao);
    array[i] = array[novoIndice];
    array[novoIndice] = temp;
  }
}
