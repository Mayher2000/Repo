#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

// Sterowanie:

// Wyjścia:
// Stany niskie na pinach do trzech przekaźników
// 1. Przekaźnik - kręcenie w jedną stronę
// 2. Przekaźnik - kręcenie w drugą stronę
// 3. Przekaźnik - zamknięcie zaworu

// Wejścia:
// 1. Krańcówka - maksymalne zamknięcie zaworu
// 2. Krańcówka - maksymalne otwarcie zaworu
// 1. Enkoder inkrementacja - 
// 2. Enkoder dekrementacja

// Algorytm:
// Regulator który na wejściu będzie miał temperaturę brzeczki a na wyjściu stopień otwarcia zaworu (od 0% do 100%);
// Następnie trzeba zamienić stopień otwarcia na pozycje dla enkodera
// Potem trzeba odpalić silnik w odpowiednią stronę i sprawdzać czy dojechał do zadanej pozycji

// Zmienne w programie
// int enkoder - odczyt z enkodera
// bool max_limit - odczyt z pinu maksymalnego otwarcia
// bool min_limit - odczyt z pinu minimalnego otwarcia
// bool motor_open - ustwienie wyjścia z kontrolera, które uruchamia silnik w celu otwarcia zaworu
// bool motor_close - ustwienie wyjścia z kontrolera, które uruchamia silnik w celu zamknięcia zaworu
// bool 
void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}