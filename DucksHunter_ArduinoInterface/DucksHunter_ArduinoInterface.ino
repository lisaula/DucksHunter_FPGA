unsigned char btnIzquierda=13,btnDerecha=12,btnDisparo=11, btnReset=22;
unsigned char pinIzquierda=10,pinDerecha=9,pinDisparo=8, pinReset=23;
unsigned char pinesPatosMatados[] = {7,6,5,4,3,2};

int patosMatados;
int balas,timeout,tiempo;
int disparando,reset;

bool puedeDisparar();
void disparar();
bool btnPresionado(unsigned char btn, int *estadoBtn);
int readFromPins(unsigned char *pins, int size);
void resetGame();

void setup() {
  Serial.begin(9600);

  timeout=50;
  reset=0;
  
  pinMode(pinIzquierda,OUTPUT);
  pinMode(pinDerecha,OUTPUT);
  pinMode(pinDisparo,OUTPUT);
  pinMode(pinReset,OUTPUT);

  pinMode(btnIzquierda,INPUT);
  pinMode(btnDerecha,INPUT);
  pinMode(btnDisparo,INPUT);
  pinMode(btnReset,INPUT);

  resetGame();
}

void loop() {
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
  balas=20;
  tiempo=30;
  
  disparando=0;

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
  int dato=0;
  for(int i = 0; i<size; i++){
    dato |= (digitalRead(pins[i])<<(size-i));
  }

  return dato;
}
