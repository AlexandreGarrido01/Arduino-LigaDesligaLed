

int led = 7;
int botaoLiga = 5;
int botaoDesliga = 6;
int ligado= 0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(botaoLiga,INPUT);
  pinMode(botaoDesliga,INPUT);
}

void loop() {

      if(digitalRead(botaoLiga)==1){
          ligado=1;
        }
         if(digitalRead(botaoDesliga)==1){
         ligado=0;
         }
      if(ligado ==1){
        digitalWrite(led, HIGH);
      }else{
        digitalWrite(led, LOW);
        }
        
}
