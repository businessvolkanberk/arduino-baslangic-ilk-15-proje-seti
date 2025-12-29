----
## Proje 01 – Blink (LED Yak/Söndür)
----
## Amaç
Arduino kartına ilk kodu yükleyip **kurulumun ve bağlantının doğru çalıştığını** doğrulamak.

## Gerekli parçalar
- Arduino UNO uyumlu kart
- USB kablo (veri kablosu)

> Not: Bu projede harici breadboard bağlantısı yoktur. Kart üzerindeki “L” LED’i kullanılır.

---

## Adımlar
1) Arduino IDE’yi kurun ve açın.  
2) Kartınızı USB ile bilgisayara bağlayın.  
3) Arduino IDE’de:
   - **Tools → Board**: Arduino Uno (veya UNO uyumlu kart)
   - **Tools → Port**: Görünen portu seçin
4) Kodu yükleyin:
   - **Sketch → Upload** (sağa ok)

---

## Kod
Bu projeye ait kod dosyası: **`code.ino`**  
Açmak için Arduino IDE’de **File → Open** ile bu dosyayı seçebilir veya aşağıdaki kodu yeni bir sketch’e yapıştırabilirsiniz.

```cpp
/*
  Proje 01 – Blink (LED Yak/Söndür)
  Amaç: Kart üzerindeki dahili LED’i belirli aralıklarla yakıp söndürerek
  kartın, portun ve IDE yükleme sürecinin doğru çalıştığını doğrulamak.
*/

// Arduino kartlarda dahili LED pini (UNO'da genellikle D13)
const int LED_PIN = LED_BUILTIN;

void setup() {
  // setup(): Kart açıldığında veya reset atıldığında 1 kez çalışır.
  // LED pinini çıkış (OUTPUT) olarak ayarlıyoruz; böylece HIGH/LOW verebiliriz.
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // loop(): setup() bittikten sonra sonsuz döngüde tekrar tekrar çalışır.

  // LED'i yak (pinde 5V seviyesine yakın bir seviye üretir)
  digitalWrite(LED_PIN, HIGH);

  // 500 ms bekle (1 saniyenin yarısı)
  delay(500);

  // LED'i söndür (pini 0V seviyesine çeker)
  digitalWrite(LED_PIN, LOW);

  // 500 ms bekle
  delay(500);
}
