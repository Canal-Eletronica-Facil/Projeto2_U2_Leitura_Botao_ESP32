//... Livro IoT na Prática - PROGRAMA 2 - Leitura de Entradas ...//

//............. BLOCO 1 - NOMEAR PINOS USADOS NO PROJETO .............//

int LED1 = 27;      // Seleciona o nome LED1 para o GPIO 27 do ESP32
int BOTAO_1 = 35;   // Seleciona o nome BOTAO_1 para o GPIO 35 do ESP32

int VALOR_B1 = 0;   // Seleciona uma variável para armazenar o estado digital
                    // do botão 1, ou seja 1 ou 0 / HIGH ou LOW
                    
//............. BLOCO 2 - CONFIGURAR PINOS USADOS NO PROJETO .............//
void setup() 
{
  pinMode(BOTAO_1,INPUT);   // Configura o GPIO 35 do ESP32 como entrada
  pinMode(LED1, OUTPUT);    // Configura o GPIO 27 do ESP32 como saída
}
//......... BLOCO 3 - REPETIÇÃO DAS TAREFAS USADAS NO PROJETO ...........//
void loop() 
{
  VALOR_B1 = digitalRead(BOTAO_1); // Lê o estado do GPIO 35 e salva em VALOR_B1
  if(VALOR_B1 == 1)
  {
      digitalWrite(LED1, HIGH);   // Envia nível alto para o GPIO27 do ESP32
  }
  else
  {
      digitalWrite(LED1, LOW);    // Envia nível baixo para o GPIO27 do ESP32     
  }
  delay(100);                     // Aguarda 1 Segundo
}
