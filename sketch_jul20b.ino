//motor 1:
int Ena=10;
int IN1=9;
int IN2=8;
//motor 2:
int IN3=12;
int IN4=13;
int Enb=11;


void setup(){
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);  
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
pinMode(Ena,OUTPUT);
pinMode(Enb,OUTPUT);
  
 
}


void loop(){
 //motor 1:
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
analogWrite(Ena,120);
 //motor 2:  
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
analogWrite(Enb,120);    



}
