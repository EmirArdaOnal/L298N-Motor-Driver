# L298N-Motor-Driver
DC motor control made with L298N

# Connection

1. Arduino ve L298N motor sürücüyü hazırlayın. Arduino Uno kullanıyorsanız, 5V ve GND pinlerine bağlantı yapmanız gerekmektedir.

2. L298N motor sürücü üzerinde ENA, IN1, ve IN2 pinlerini M1 motoru için, ENB, IN3, ve IN4 pinlerini ise M2 motoru için kullanacağız.

3. Aşağıdaki şekildeki gibi L298N motor sürücüyü bağlayın:

   - Arduino'nun 5V pinini L298N'nin VCC pinine bağlayın.
   - Arduino'nun GND pinini L298N'nin GND pinine bağlayın.
   - Arduino'nun 9. pinini L298N'nin ENA pinine bağlayın.
   - Arduino'nun 8. pinini L298N'nin IN1 pinine bağlayın.
   - Arduino'nun 7. pinini L298N'nin IN2 pinine bağlayın.
   - Arduino'nun 10. pinini L298N'nin ENB pinine bağlayın.
   - Arduino'nun 12. pinini L298N'nin IN3 pinine bağlayın.
   - Arduino'nun 11. pinini L298N'nin IN4 pinine bağlayın.
   - M1 motorunun pozitif (+) ucunu L298N'nin OUT1 pinine bağlayın.
   - M1 motorunun negatif (-) ucunu L298N'nin OUT2 pinine bağlayın.
   - M2 motorunun pozitif (+) ucunu L298N'nin OUT3 pinine bağlayın.
   - M2 motorunun negatif (-) ucunu L298N'nin OUT4 pinine bağlayın.

4. Bağlantıları tamamladıktan sonra Arduino'yu USB kablosuyla bilgisayara bağlayın.


# Code

1. İlk olarak, `setup()` fonksiyonu çalıştırılır. Bu fonksiyonda, kullanacağımız pinleri çıkış olarak ayarlıyoruz. `ENA`, `IN1`, `IN2`, `ENB`, `IN3` ve `IN4` pinlerini çıkış olarak belirliyoruz.

2. Ardından, `loop()` fonksiyonu sürekli olarak çalışır. Bu döngüde belirli işlemler tekrarlanır.

3. İlk olarak, `ileri()` fonksiyonu çağrılır. Bu fonksiyon, M1 ve M2 motorlarını ileri yönde hareket ettirir. Bunun için `IN1` ve `IN4` pinleri LOW (düşük) yapılırken, `IN2` ve `IN3` pinleri HIGH (yüksek) yapılır. `ENA` ve `ENB` pinlerine 255 değeriyle PWM (Darbe Genişlik Modülasyonu) sinyali gönderilerek motorların hızı 255 olarak ayarlanır.

4. Sonra, `delay(2000)` komutu ile 2 saniye beklenir. Bu süre boyunca motorlar ileri yönde hareket eder.

5. Daha sonra, `dur()` fonksiyonu çağrılır. Bu fonksiyon, motorları durdurmak için kullanılır. Tüm `IN` pinleri LOW (düşük) yapılır ve `ENA` ve `ENB` pinlerine 0 değeriyle PWM sinyali gönderilir.

6. `delay(1000)` komutu ile 1 saniye beklenir. Bu süre boyunca motorlar durur.

7. Son olarak, `geri()` fonksiyonu çağrılır. Bu fonksiyon, M1 ve M2 motorlarını geri yönde hareket ettirir. `IN1` ve `IN4` pinleri HIGH (yüksek) yapılırken, `IN2` ve `IN3` pinleri LOW (düşük) yapılır. `ENA` ve `ENB` pinlerine 255 değeriyle PWM sinyali gönderilerek motorların hızı 255 olarak ayarlanır.

8. Tekrar `delay(2000)` komutu ile 2 saniye beklenir. Bu süre boyunca motorlar geri yönde hareket eder.

9. Son olarak, tekrar `dur()` fonksiyonu çağrılır ve `delay(1000)` komutu ile 1 saniye beklenir. Motorlar durur ve bu işlem sürekli olarak tekrarlanır.
