unsigned char btnIzquierda=13,btnDerecha=12,btnDisparo=11;
unsigned char pinIzquierda=10,pinDerecha=9,pinDisparo=8;
unsigned char pinesPatosMatados[] = {7,6,5,4,3,2};

int patosMatados;
int balas,timeout,tiempo;
int disparando;

bool puedeDisparar();
void disparar();
bool dispararPresionado();
int readFromPins(unsigned char *pins, int size);

void setup() {
  Serial.begin(9600);
  
  balas=20;
  timeout=50;
  tiempo=30;
  
  disparando=0;

  pinMode(pinIzquierda,OUTPUT);
  pinMode(pinDerecha,OUTPUT);
  pinMode(pinDisparo,OUTPUT);

  pinMode(btnIzquierda,INPUT);
  pinMode(btnDerecha,INPUT);
  pinMode(btnDisparo,INPUT);

  Serial.print("tiempo: ");
  Serial.print(tiempo);
  Serial.print("; balas: ");
  Serial.println(balas);
  Serial.println("---------------------\n");
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

int readFromPins(unsigned char *pins, int size)
{
  int dato=0;
  for(int i = 0; i<size; i++){
    dato |= (digitalRead(pins[i])<<(size-i));
  }

  return dato;
}
