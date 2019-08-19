#include <dht.h> // Inclui a biblioteca dht h no seu código

#define DHT11_PIN A0 // define o pino usado para dados do sensor.

dht DHT; // Cria um objeto da classe dht

void setup()
{
  Serial.begin(9600); // Inicializa serial com taxa de transmissão de 9600 bauds
}

void loop()
{ 
  //faz leitura do dht11
  DHT.read11(DHT11_PIN); // chama método de leitura da classe dht na porta analogica especificada,
  // com o pino de transmissão de dados ligado no pino A0(porta analogica especificada);
  
  // Exibe na serial o valor de umidade
  Serial.print(DHT.humidity)
  Serial.println(" %");
    
  // Exibe na serial o valor da temperatura
  Serial.print(DHT.temperature);
  Serial.println(" Celsius");
    
  delay(3000); //pausa de 3 segundos antes da proxima leitura
}
