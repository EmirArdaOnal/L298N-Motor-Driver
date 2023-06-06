// L298N motor sürücü pin bağlantıları
const int ENA = 9;  // M1 motoru için Enable pin
const int IN1 = 8;  // M1 motoru için Input 1 pin
const int IN2 = 7;  // M1 motoru için Input 2 pin
const int ENB = 10; // M2 motoru için Enable pin
const int IN3 = 12; // M2 motoru için Input 3 pin
const int IN4 = 11; // M2 motoru için Input 4 pin

void setup() {
  pinMode(ENA, OUTPUT);  // ENA pini çıkış olarak ayarlanır
  pinMode(IN1, OUTPUT);  // IN1 pini çıkış olarak ayarlanır
  pinMode(IN2, OUTPUT);  // IN2 pini çıkış olarak ayarlanır
  pinMode(ENB, OUTPUT);  // ENB pini çıkış olarak ayarlanır
  pinMode(IN3, OUTPUT);  // IN3 pini çıkış olarak ayarlanır
  pinMode(IN4, OUTPUT);  // IN4 pini çıkış olarak ayarlanır
}

void loop() {
  ileri();               // İleri gitmek için ileri fonksiyonu çağrılır
  delay(2000);           // 2 saniye beklenir
  
  dur();                 // Durmak için dur fonksiyonu çağrılır
  delay(1000);           // 1 saniye beklenir
  
  geri();                // Geri gitmek için geri fonksiyonu çağrılır
  delay(2000);           // 2 saniye beklenir
  
  dur();                 // Durmak için dur fonksiyonu çağrılır
  delay(1000);           // 1 saniye beklenir
}

void ileri() {
  digitalWrite(IN1, HIGH);   // IN1 pini HIGH (yüksek) yapılır
  digitalWrite(IN2, LOW);    // IN2 pini LOW (düşük) yapılır
  digitalWrite(IN3, HIGH);   // IN3 pini HIGH (yüksek) yapılır
  digitalWrite(IN4, LOW);    // IN4 pini LOW (düşük) yapılır
  analogWrite(ENA, 255);     // ENA pini 255 değeriyle PWM (Darbe Genişlik Modülasyonu) sinyali gönderir
  analogWrite(ENB, 255);     // ENB pini 255 değeriyle PWM (Darbe Genişlik Modülasyonu) sinyali gönderir
}

void geri() {
  digitalWrite(IN1, LOW);    // IN1 pini LOW (düşük) yapılır
  digitalWrite(IN2, HIGH);   // IN2 pini HIGH (yüksek) yapılır
  digitalWrite(IN3, LOW);    // IN3 pini LOW (düşük) yapılır
  digitalWrite(IN4, HIGH);   // IN4 pini HIGH (yüksek) yapılır
  analogWrite(ENA, 255);     // ENA pini 255 değeriyle PWM (Darbe Genişlik Modülasyonu) sinyali gönderir
  analogWrite(ENB, 255);     // ENB pini 255 değeriyle PWM (Darbe Genişlik Modülasyonu) sinyali gönderir
}

void dur() {
  digitalWrite(IN1, LOW);    // IN1 pini LOW (düşük) yapılır
  digitalWrite(IN2, LOW);    // IN2 pini LOW (düşük) yapılır
  digitalWrite(IN3, LOW);    // IN3 pini LOW (düşük) yapılır
  digitalWrite(IN4, LOW);    // IN4 pini LOW (düşük) yapılır
  analogWrite(ENA, 0);       // ENA pini 0 değeriyle PWM (Darbe Genişlik Modülasyonu) sinyali gönderir
  analogWrite(ENB, 0);       // ENB pini 0 değeriyle PWM (Darbe Genişlik Modülasyonu) sinyali gönderir
}
