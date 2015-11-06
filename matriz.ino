#define D 2
#define C 3
#define B 4
#define A 5
#define G 6
#define data 7
#define CLK 8
#define LAT 9

void setup() {
  pinMode(D,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(A,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(data,OUTPUT);
  pinMode(CLK,OUTPUT);
  pinMode(LAT,OUTPUT);
  digitalWrite(G,LOW);
  digitalWrite(LAT,LOW);
  //uint8_t X;
  //uint8_t Y;
}

void loop() 
{
   posicion(6,15);
}

void posicion(uint8_t X, uint8_t Y)
{
  uint8_t j,m;
  if((X&1)!=0)        {  digitalWrite(A,HIGH);}  else {  digitalWrite(A,LOW);}
  if((X&(1<<1))!=0)   {  digitalWrite(B,HIGH);}  else {  digitalWrite(B,LOW);}
  if((X&(1<<2))!=0)   {  digitalWrite(C,HIGH);}  else {  digitalWrite(C,LOW);}  
  if((X&(1<<3))!=0)   {  digitalWrite(D,HIGH);}  else {  digitalWrite(D,LOW);}
  for(j=0;j<16;j++)
  {
    if(Y==j)   {  digitalWrite(data,LOW);}  else {  digitalWrite(data,HIGH);}
    digitalWrite(CLK,HIGH);
 //   delayMicroseconds(1);
    digitalWrite(CLK,LOW);
   // delayMicroseconds(1);
  }
  digitalWrite(LAT,HIGH);
  //delayMicroseconds(1);
  digitalWrite(LAT,LOW);
  //delayMicroseconds(1);
}
