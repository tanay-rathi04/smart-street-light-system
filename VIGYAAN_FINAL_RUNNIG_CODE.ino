
int led1 = 3;
int led2 = 5;
int led3 = 6;
int ldr =7;

int ir1 = 13;
int ir2 = 12;
int ir3 = 8;




void setup() 
{
  Serial.begin (9600);
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  
  
  
  pinMode (ldr,INPUT);
  
  
  pinMode (ir1,INPUT);
  pinMode (ir2,INPUT);
  pinMode (ir3,INPUT);
  
 

}
void loop() 
{
 Serial.println(digitalRead(7));
  int ldrStatus = digitalRead (ldr);
    if (ldrStatus==LOW)
     {
       
       digitalWrite(led1,HIGH);
       analogWrite(led1,255/5);
       
       digitalWrite(led2, HIGH);
       analogWrite(led2,255/5); 
       
       digitalWrite(led3, HIGH);
       analogWrite(led2,255/5); 
       

       if (digitalRead(13)==LOW)       // IR 1 CODE    
               {
                digitalWrite(led1,LOW);
                analogWrite(led1,255);       
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led1,HIGH);
                  analogWrite(led1,255/5);
                  
                }
          
          if (digitalRead(12)==LOW)           // IR 2 CODE
               {
                digitalWrite(led2,HIGH);
                analogWrite(led2,255); 
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led2,HIGH);
                   analogWrite(led2,255/5); 
                  
                }
                
           if (digitalRead(8)==LOW)           // IR 3 CODE
               {
                digitalWrite(led3,HIGH);
                analogWrite(led3,255); 
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led3,HIGH);
                   analogWrite(led3,255/5); 
                  
                }
                
            
     }
   
}