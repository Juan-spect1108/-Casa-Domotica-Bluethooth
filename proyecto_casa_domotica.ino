// Made by: Juan Rodrigo Guzman Martinez

//conexiones del modulo bluethooth al arduino
//    Arduino        bluethooth
//     tx     -       rx
//     rx     -       tx
//     Gnd    -       Gnd
//     5v     -       5v

// ojo... desconecte el modulo bluethooth antes de cargar el programa
// si no lo hace habra un conflicto y no permitira subir el codigo.

int sala= 40;  // ponemos foco de la sala en el pin digital 40
int cocina=41; // ponemos el foco de la cocina en el pin digital 41
int comedor=42; // ponemos el foco del comedor en el pin digital 42
int habitacion1=43; // ponemos el foco de la habitacion 1 en el pin digital 43
int habitacion2=44; // ponemos el foco de la habitacion 2 en el pin digital 44

int estado=0; // Declaramos una variable de tipo entero donde se almacenaran los datos recibidos

void setup() {

Serial.begin(9600); // Inicializamos el monitor serial a 9600 baudios
delay(1000);
pinMode(sala, OUTPUT); // declaramos el foco de la sala como salidad digital
pinMode(cocina, OUTPUT); // declaramos el foco de la cocina como salida digital
pinMode(comedor, OUTPUT);// declaramos el foco del comedor como salida digital
pinMode(habitacion1, OUTPUT);// declaramos el foco de la habitacion1 como salida digital
pinMode(habitacion2, OUTPUT);// declaramos el foco de la habitacion2 como salida digital
 servoMotor.attach(52);
}

void loop() {

if(Serial.available()>0) {
  estado= Serial.read();
}

if (estado=='a'){
digitalWrite(sala,HIGH); // si estado es igual a 1, entonces el foco de la sala se prendera
}

if (estado=='b'){
digitalWrite(sala,LOW); // si estado es igual a 2, entonces el foco de la sala se apagara
}

if (estado=='c'){
digitalWrite(cocina,HIGH); // si estado es igual a 3, entonces el foco de la cocina se prendera
}

if (estado=='d'){
digitalWrite(cocina,LOW);  // si estado es igual a 4, entonces el foco de la cocina se apagara
}

if (estado=='e'){
digitalWrite(comedor,HIGH); // si estadoes igual a 5, entonces el foco del comedor se prendera
}

if (estado=='f'){
digitalWrite(comedor,LOW); // si estado es igual a 6, entonces el foco del comedor se apagara
}

if (estado=='g'){
digitalWrite(habitacion1,HIGH); // si estado es igual a 7, entonces el foco de la habitacion1 se prendera
}

if (estado=='h'){
digitalWrite(habitacion1,LOW); // si estado es igual a 8, entonces el foco de la habitacion1 se apagara
}

if (estado=='i'){
digitalWrite(habitacion2,HIGH); // si estado es igual a 9, entonces el foco de la habitacion2 se prendera
}

if (estado=='j'){
  digitalWrite(habitacion2,LOW); // si estado es igual a 10, entonces el foco de la habitacion2 se apagara
}
   
}
   
   
