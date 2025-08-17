// C++ code
//
int dit = 40;          // ponto
int dah = 3 * dit;     // traço
int t_letra = 3 * dit; // tempo de cada letra
int t_frase = 7 * dit; // tempo de cada frase
int barco;
int led1 = 13;

void setup()
{
  pinMode(led1, OUTPUT);
}

void loop()
{

  barco = led1;
  cod_a(barco);
  cod_n(barco);
  cod_a(barco);
  delay(t_frase);
  cod_e(barco);
  delay(t_frase);
  cod_m(barco);
  cod_a(barco);
  cod_n(barco);
  cod_u(barco);
  delay(t_frase);
  cod_m(barco);
  cod_e(barco);
  cod_r(barco);
  cod_e(barco);
  cod_c(barco);
  cod_e(barco);
  cod_m(barco);
  delay(t_frase);
  cod_1(barco);
  cod_0(barco);
  delay(t_frase);
}

void ponto(int pin)
{
  // Ponto
  digitalWrite(pin, HIGH);
  delay(dit);
  digitalWrite(pin, LOW);
  delay(t_letra);
}

void traco(int pin)
{
  digitalWrite(pin, HIGH);
  delay(dah);
  digitalWrite(pin, LOW);
  delay(t_letra);
}

void cod_a(int barco)
{
  // ponto
  ponto(barco);
  // traço
  traco(barco);
}

void cod_b(int barco)
{
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
}

void cod_c(int barco)
{
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
}

void cod_d(int barco)
{
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
}

void cod_e(int barco)
{
  // Ponto
  ponto(barco);
}

void cod_f(int barco)
{
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
}

void cod_g(int barco)
{
  // traço
  traco(barco);
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
}

void cod_h(int barco)
{
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
}
void cod_i(int barco)
{
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
}

void cod_j(int barco)
{
  // Ponto
  ponto(barco);
  // traço
  traco(barco);
  // traço
  traco(barco);
  // traço
  traco(barco);
}

void cod_k(int barco)
{
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
  // traço
  traco(barco);
}

void cod_l(int barco)
{
  // Ponto
  ponto(barco);
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
}

void cod_m(int barco)
{
  // traço
  traco(barco);
  // traço
  traco(barco);
}

void cod_n(int barco)
{
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
}

void cod_o(int barco)
{
  // traço
  traco(barco);
  // traço
  traco(barco);
  // traço
  traco(barco);
}

void cod_p(int barco)
{
  // Ponto
  ponto(barco);
  // traço
  traco(barco);
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
}

void cod_q(int barco)
{
  // traço
  traco(barco);
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
  // traço
  traco(barco);
}

void cod_r(int barco)
{
  // Ponto
  ponto(barco);
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
}

void cod_s(int barco)
{
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
}

void cod_t(int barco)
{
  // traço
  traco(barco);
}

void cod_u(int barco)
{
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // traço
  traco(barco);
}

void cod_v(int barco)
{
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // traço
  traco(barco);
}

void cod_w(int barco)
{
  // Ponto
  ponto(barco);
  // traço
  traco(barco);
  // traço
  traco(barco);
}

void cod_x(int barco)
{
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // traço
  traco(barco);
}

void cod_y(int barco)
{
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
  // traço
  traco(barco);
  // traço
  traco(barco);
}

void cod_z(int barco)
{
  // traço
  traco(barco);
  // traço
  traco(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
}

// Funções de números

void cod_0(int barco)
{
  // Traço
  traco(barco);
  // Traço
  traco(barco);
  // Traço
  traco(barco);
  // Traço
  traco(barco);
}

void cod_1(int barco)
{
  // Ponto
  ponto(barco);
  // Traço
  traco(barco);
  // Traço
  traco(barco);
  // Traço
  traco(barco);
}

void cod_2(int barco)
{
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // Traço
  traco(barco);
  // Traço
  traco(barco);
}

void cod_3(int barco)
{
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // Traço
  traco(barco);
}

void cod_4(int barco)
{
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
}

void cod_5(int barco)
{
  // Ponto
  ponto(barco);
  // Traço
  traco(barco);
  // Traço
  traco(barco);
  // Traço
  traco(barco);
}

void cod_6(int barco)
{
  // Traço
  traco(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
}

void cod_7(int barco)
{
  // Traço
  traco(barco);
  // Traço
  traco(barco);
  // Ponto
  ponto(barco);
  // Ponto
  ponto(barco);
}

void cod_8(int barco)
{
  // Traço
  traco(barco);
  // Traço
  traco(barco);
  // Traço
  traco(barco);
  // Ponto
  ponto(barco);
}

void cod_9(int barco)
{
  // Traço
  traco(barco);
  // Traço
  traco(barco);
  // Traço
  traco(barco);
  // Ponto
  ponto(barco);
}