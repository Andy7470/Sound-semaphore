int MIC = A1;
int vol;
int db;

bool Mode = 1;
const int switchMode = 12;
const int led[]={3,4,5,6,7,8,9};

void accumulate();
void intensity();

void setup() {
  
  

  Serial.begin(9600);
  pinMode(MIC, INPUT);
  pinMode(switchMode,INPUT_PULLUP);


}

void loop() {

  vol = analogRead(MIC);
  
//reads the switch
if(digitalRead(switchMode)){
  Mode = 1;
  Serial.println("switchON");
}
else{
  Mode = 0;
}

//switch Mode
 if (Mode == 1){
   accumulate();
}
else if(Mode == 0){
   intensity();
}

/////////////ON LEDS//////////////////////////

    digitalWrite(led[0],HIGH);

   if (db > 50){
    digitalWrite(led[1],HIGH);
   }
   else{
    digitalWrite(led[1],LOW);
   }
    
    if (db > 100){
    digitalWrite(led[2],HIGH);
  }
  else{
    digitalWrite(led[2],LOW);
  }
  
    if (db > 250){
    digitalWrite(led[3],HIGH);
  }
  else{
    digitalWrite(led[3],LOW);
  }
  
    if (db > 300){
    digitalWrite(led[4],HIGH);
  }
  else{
    digitalWrite(led[4],LOW);
  }
  
    if (db > 400){
    digitalWrite(led[5],HIGH);
  }
  
  else{
    digitalWrite(led[5],LOW);
  }
    if (db > 550){
    digitalWrite(led[6],HIGH);
  }
  else{
    digitalWrite(led[6],LOW);
  }

//////////////////////////////////


  Serial.println(db);
  delay(10);


}
