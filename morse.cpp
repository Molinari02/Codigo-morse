// C++ code
//
int dit= 40; //ponto
int dah= 3*dit; // traço
int t_letra= 3*dit; //tempo de cada letra
int t_frase= 7*dit; //tempo de cada frase 
int barco;
int led1= 13;

void setup() {
pinMode(led1, OUTPUT);
}


void loop(){
  
  barco= led1; 
  cod_a (barco);
  cod_n(barco);
  cod_a (barco);
  delay(t_frase);
  cod_e (barco);
  delay(t_frase);
  cod_m (barco);
  cod_a (barco);
  cod_n (barco);
  cod_u (barco);
  delay(t_frase);
  cod_m (barco);
  cod_e (barco);
  cod_r (barco);
  cod_e (barco);
  cod_c (barco);
  cod_e (barco);
  cod_m (barco);
  delay(t_frase);
  cod_1 (barco);
  cod_0 (barco);
  delay(t_frase);
  
}

void ponto (){
 //Ponto
  digitalWrite (13, HIGH);
delay (dit);
  digitalWrite (13, LOW);
delay(t_letra);
}

void cod_a(int barco){
  //Ponto
  digitalWrite (barco, HIGH);
  delay (dit);
  digitalWrite (barco, LOW);
  delay(t_letra);

//traço
   digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  delay(1000);
}

void cod_b (int barco){
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);

  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
delay (1000);
}

void cod_c(int barco) {
 //traço
  digitalWrite (barco, HIGH);
  delay (dah);
  digitalWrite (barco, LOW);
  delay(t_letra);
  
  //Ponto
  digitalWrite (barco, HIGH);
  delay (dit);
  digitalWrite (barco, LOW);
  delay(t_letra);

   //traço
  digitalWrite (barco, HIGH);
  delay (dah);
  digitalWrite (barco, LOW);
  delay(t_letra);
  
  //Ponto
  digitalWrite (barco, HIGH);
  delay (dit);
  digitalWrite (barco, LOW);
  delay(t_letra);

}

void cod_d (int barco){
   //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_e(int barco){
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_f (int barco){
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  
    //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_g (int barco){
    //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  
    //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_h (int barco){
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);

}


void cod_i (int barco){
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra); 
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
}


void cod_j (int barco){
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  
  
    //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  
  
    //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  
  
    //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra); 
}
  
 
void cod_k (int barco){
  
    //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
}
  
void cod_l (int barco){
 //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
   
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);

   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_m (int barco) {
 
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
   
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
}
 
void cod_n (int barco) {
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_o (int barco) {
 //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
   //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
   //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_p (int barco) {
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
 //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
   //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
   //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
}


void cod_q (int barco){
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
 //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_r (int barco){
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_s (int barco){
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_t (int barco){
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_u (int barco){
 //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_v (int barco){
//Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
       //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);

}

void cod_w (int barco){
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);

}

void cod_x (int barco){
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra); 
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_y (int barco){
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  //Ponto
  digitalWrite(barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
}

void cod_z (int barco){
//traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  //traço
  digitalWrite (barco, HIGH);
delay (dah);
  digitalWrite (barco, LOW);
delay(t_letra);
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
  //Ponto
  digitalWrite (barco, HIGH);
delay (dit);
  digitalWrite (barco, LOW);
delay(t_letra);
}


// Funções de números

void cod_0(int barco) {
  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);
}

void cod_1(int barco) {
  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);
}

void cod_2(int barco) {
  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);
}

void cod_3(int barco) {
  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);
}

void cod_4(int barco) {
  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);
}

void cod_5(int barco) {
  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);
}

void cod_6(int barco) {
  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);
}

void cod_7(int barco) {
  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);
}

void cod_8(int barco) {
  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra);
}

void cod_9(int barco) {
  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Traço
  digitalWrite(barco, HIGH);
  delay(dah);
  digitalWrite(barco, LOW);
  delay(t_letra);

  // Ponto
  digitalWrite(barco, HIGH);
  delay(dit);
  digitalWrite(barco, LOW);
  delay(t_letra); 
}