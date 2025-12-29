/*
  Proje 02 – Harici LED + Direnç
  Amaç: D8 pininden harici bir LED'i yakıp söndürmek ve
  direncin LED akımını sınırlamak için neden gerekli olduğunu görmek.
*/

const int LED_PIN = 8;  // Harici LED'i bağladığımız dijital pin

void setup() {
  // setup(): Kart açıldığında 1 kez çalışır.
  // LED pinini çıkış olarak ayarlıyoruz.
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // loop(): Sürekli tekrar eder.

  digitalWrite(LED_PIN, HIGH); // LED'i yak
  delay(500);                  // 500 ms bekle

  digitalWrite(LED_PIN, LOW);  // LED'i söndür
  delay(500);                  // 500 ms bekle
}