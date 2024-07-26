#include <SoftwareSerial.h>

int Tx = 5;
int Rx = 4;

SoftwareSerial Bluetooth(Tx, Rx);

char boton;
int estado = 0;
int intensidad_luz = 6400;

void setup() {
  Serial.begin(9600); 
  Bluetooth.begin(38400);

  pinMode(4, OUTPUT);
}

void loop() {
  
  if (Bluetooth.available() ){
    boton = Bluetooth.read();
    if (boton == 'a'){
    digitalWrite(3, HIGH);
    }
    if (boton == 'b'){
    digitalWrite(3, LOW);
    }
    
    if(estado=='1') intensidad_luz = 6300;
    if(estado=='2') intensidad_luz = 5800;
    if(estado=='3') intensidad_luz = 5200;
    if(estado=='4') intensidad_luz = 4900;
    if(estado=='5') intensidad_luz = 4500;
    if(estado=='6') intensidad_luz = 4000;
    if(estado=='7') intensidad_luz = 3500;
    if(estado=='8') intensidad_luz = 3000;
  }
}
