unsigned char btnIzquierda=26,btnDerecha=23,btnDisparo=25, btnReset=22,btnReload=24;
unsigned char pinIzquierda=13,pinDerecha=12,pinDisparo=11, pinReset=10,pinReload=9,pinGameDone=8;
unsigned char pinesPatosMatados[] = {35,34,33,32,31,30,29,28};

int patosMatados;
int balas,timeout,tiempo;
int disparando,reset, reload,score;

bool puedeDisparar();
void disparar();
bool btnPresionado(unsigned char btn, int *estadoBtn);
int readFromPins(unsigned char *pins, int size);
void resetGame();
void reloadGun();
void readScore();
void pintScore();

void setup() {
  Serial.begin(9600);

  timeout=50;
  reset=0;
  
  pinMode(pinIzquierda,OUTPUT);
  pinMode(pinDerecha,OUTPUT);
  pinMode(pinDisparo,OUTPUT);
  pinMode(pinReset,OUTPUT);
  pinMode(pinReload,OUTPUT);
  
  pinMode(pinGameDone,INPUT);

  pinMode(btnIzquierda,INPUT);
  pinMode(btnDerecha,INPUT);
  pinMode(btnDisparo,INPUT);
  pinMode(btnReset,INPUT);
  pinMode(btnReload,INPUT);

  for(int i=0; i<8; i++)
  {
    pinMode(pinesPatosMatados[i],INPUT);
  }

  resetGame();
}

void loop() {
  if(!digitalRead(pinGameDone))
  {
    digitalWrite(pinIzquierda,digitalRead(btnIzquierda));
    digitalWrite(pinDerecha,digitalRead(btnDerecha));
    
    if(btnPresionado(btnDisparo,&disparando))
    {
      disparar();
      Serial.print("Balas: ");
      Serial.println(balas);
    }else{
      digitalWrite(pinDisparo,LOW);
    }
  
    if(btnPresionado(btnReload,&reload))
    {
      balas=4;
      digitalWrite(pinReload,HIGH);
    }else{
      digitalWrite(pinReload,LOW);
    }
  }else{
    if(btnPresionado(pinGameDone,&score))
    {
      printScore();
    }
  }

  if(btnPresionado(btnReset,&reset))
  {
    resetGame();
  }else{
    digitalWrite(pinReset,LOW);
  }
}

bool btnPresionado(unsigned char btn, int *estadoBtn)
{
  bool estado=false;
  int valor_actual = digitalRead(btn);
  if(*estadoBtn != valor_actual)
  {
    if(*estadoBtn==0)
    {
      estado = true;
    }
    *estadoBtn = 1 - *estadoBtn;
  }
  
  return estado;
}

bool puedeDisparar()
{
  return balas>0;
}

void disparar()
{
  if(puedeDisparar())
  {
    balas--;
    digitalWrite(pinDisparo,HIGH);
    delay(timeout);
  }
}

void resetGame()
{
  balas=4;
  tiempo=30;
  
  disparando=0;
  score=0;

  digitalWrite(pinReset,HIGH);
  delay(timeout);

  Serial.println("-         Start         -");
  Serial.println("-------------------------");
  Serial.print("- tiempo: ");
  Serial.print(tiempo);
  Serial.print("; balas: ");
  Serial.print(balas);
  Serial.println(" -\n-------------------------\n");
}

int readFromPins(unsigned char *pins, int size)
{
  unsigned char dato=0;
  for(int i = 0; i<size; i++){
    dato |= (digitalRead(pins[i])<<(size-i));
  }

  return dato;
}

void printScore()
{
  //delay(timeout*3);
  int mi_score = readFromPins(pinesPatosMatados,8);
  Serial.print("Score: ");
  Serial.println(mi_score);
}

