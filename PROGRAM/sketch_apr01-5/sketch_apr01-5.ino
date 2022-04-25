//ορισμος ακιδων και μεταβλητων
const int stepPin = 2;
const int dirPin = 5;
const int bstepPin = 3;
const int bdirPin = 6;
const int onofp = 4;

// αρχικες τιμες μεταβλητων
int onof = 0;
int y = 0;


void setup() {
  // ορισμος ακιδων ως εσοδους και εξοδους
 
pinMode(stepPin,OUTPUT);
pinMode(dirPin,OUTPUT);
pinMode(bstepPin,OUTPUT);
pinMode(bdirPin,OUTPUT);
pinMode(onofp,INPUT);
 
}

// κυριο προγραμμα

void loop() {
  onof = digitalRead(onofp); // διαδικασια-προυποθεσεις εκκινησης
  delay(10);
  if(onof == LOW){
    digitalWrite(dirPin,LOW); //κινητηρας εμπρος
    digitalWrite(bdirPin,LOW); //κινητηρας εμπρος
    for(int x = 0; x < 2; x++) //κανει παλμους για περιστροφη
    {
      delay(10);
      digitalWrite(stepPin,HIGH);
      digitalWrite(bstepPin,HIGH);
      delayMicroseconds(1000);
      digitalWrite(stepPin,LOW);
      digitalWrite(bstepPin,LOW);
      delayMicroseconds(1000);
    }
   
  }
  else {
  
  if(onof == HIGH && y == 1){
    digitalWrite(dirPin,HIGH);//κινητηρας πισω
    digitalWrite(bdirPin,HIGH); //κινητηρας πισω
    
    for(int x = 0; x < 50; x++)//κανει παλμους για περιστροφη
     {
      delay(20);
      digitalWrite(stepPin,HIGH);
      digitalWrite(bstepPin,HIGH);
      delayMicroseconds(2000);
      digitalWrite(stepPin,LOW);
      digitalWrite(bstepPin,LOW);
      delayMicroseconds(2000);
    }

  
    digitalWrite(dirPin,LOW);//ενας κινητηρας εμπρος
    for(int x = 0; x < 312; x++)//κανει παλμους για περιστροφη
    {
      delay(10);
      digitalWrite(stepPin,HIGH);
      delayMicroseconds(2000);
      digitalWrite(stepPin,LOW);
      delayMicroseconds(2000);
      
    }
  y=0;
   }
   
   
   
   else if(onof == HIGH && y == 0){
   digitalWrite(dirPin,HIGH);//κινητηρας πισω
    digitalWrite(bdirPin,HIGH); //κινητηρας πισω
    
    for(int x = 0; x < 50; x++)//κανει παλμους για περιστροφη
     {
      delay(20);
      digitalWrite(stepPin,HIGH);
      digitalWrite(bstepPin,HIGH);
      delayMicroseconds(2000);
      digitalWrite(stepPin,LOW);
      digitalWrite(bstepPin,LOW);
      delayMicroseconds(2000);
    }
   
   
    digitalWrite(bdirPin,LOW);//κινητηρας εμπρος
    for(int x = 0; x < 301; x++)//κανει παλμους για περιστροφη
    {
      delay(10);
      digitalWrite(bstepPin,HIGH);
      delayMicroseconds(2000);
      digitalWrite(bstepPin,LOW);
      delayMicroseconds(2000);
      
      }
     y=1;
    }
  

  }

}




 
