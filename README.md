# Volrobik Arduino Başlangıç Seti – 15 Proje (UNO Uyumlu)

Bu depo, **Volrobik Arduino Başlangıç Seti** için hazırlanmış resmi içerik paketidir. Set ile birlikte **15 projeyi** adım adım tamamlayabilmeniz için gerekli olan **Türkçe anlatımlar, bağlantı şemaları ve örnek kodlar (.ino)** burada yayınlanır.

Kutu içerisindeki **QR kod** ile bu sayfaya yönlendirilirsiniz.

---

## İçerik

- **15 proje** (kolaydan zora sıralı)
- Her proje için (standart):
  - `index.md` → Adım adım Türkçe anlatım + sık hatalar
  - `wiring.png` → Breadboard bağlantı görseli (varsa)
  - `code.ino` → Arduino kodu (varsa)
- **Hızlı Başlangıç** ve **SSS / Sorun Giderme** içerikleri

---

## Hızlı Başlangıç (3 Adım)

1) **Arduino IDE** kurun.  
2) Kartınızı USB ile bilgisayara bağlayın ve Arduino IDE’de:
   - **Tools → Board**: Arduino Uno (veya UNO uyumlu kart)
   - **Tools → Port**: Görünen portu seçin
3) **Proje 01 – Blink** ile test edin. Kart üzerindeki “L” LED’i yanıp sönüyorsa kurulum tamamdır.

---

## Projeler Nasıl Kullanılır?

1) Depodaki ana sayfadan (Landing) istediğiniz projeyi seçin.  
2) Proje sayfasındaki “Gerekli Parçalar” ve “Bağlantı” adımlarını uygulayın.  
3) `code.ino` dosyasını Arduino IDE’de açıp **Upload** edin.  
4) Projede ölçüm/çıktı varsa **Serial Monitor** veya LCD ekran üzerinden sonucu kontrol edin.

---

## Sık Karşılaşılan Sorunlar

- **Port görünmüyor:** USB kablonuz veri kablosu olmayabilir; farklı kablo/USB port deneyin.  
- **Upload failed:** Board/Port seçimini kontrol edin.  
- **LCD boş:** I2C adresi `0x27` yerine `0x3F` olabilir.  
- **Servo titriyor:** USB gücü yetmeyebilir; harici 5V kullanın (GND ortak olmalı).

---

## Sürümleme ve Güncellemeler

İçerikler “v1.0, v1.1 …” şeklinde güncellenebilir. En güncel içerik her zaman bu depoda yer alır. Set kutusunda belirtilen sürüm ile burada farklılık varsa, **bu depodaki en güncel sürümü** kullanmanız önerilir.

---

## Destek

Hafta içi 10:00–18:00 saatleri arasında dönüş sağlanır. 
Destek kanalı/linki: business.volkanberk@gmail.com

---

## Lisans

Bu depodaki dokümanlar ve örnek kodlar eğitim amaçlı paylaşılmıştır.
