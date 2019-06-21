#include <IRremote.h>

IRsend irsend;

void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  digitalWrite(2,0);
}

void loop() {
  switch (Serial.read()) {
        case '1':{
        irsend.sendNEC(0x20F700FF,32);
        Serial.println("Aumenta brilho"); 
        break;
        }
        case '2':{
        irsend.sendNEC(0x20F7807F, 32); 
        Serial.println("Diminui Brilho");  
        break;
        }
        case '3':{
        irsend.sendNEC(0x20F740BF,32);
        Serial.println("Apaga"); 
        break;
        }
        case '4':{
        irsend.sendNEC(0x20F7C03F, 32); 
        Serial.println("acende");  
        break;
        } 
        case '5':{
        irsend.sendNEC(0x20F720DF, 32); 
        Serial.println("Verde"); 
        break; 
        } 
        case '6':{
        irsend.sendNEC(0x20F7A05F, 32); 
        Serial.println("Azul");  
        break;
        } 
        case '7':{//ver depois
        irsend.sendNEC(0x20F7609F, 32);
        Serial.println("Vermelho");  
        delay(100); 
        }  
        case '8':{
        irsend.sendNEC(0x20F7E01F, 32);
        Serial.println("Branco"); 
        break;
        }
  }
  
}
