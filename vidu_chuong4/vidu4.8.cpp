#include <wiringPi.h>
void setup() {
    Serial.begin(9600); // khởi động Serial với tốc độ 9600
    Serial.write(123); // số 123 là mã ASCII của ký tự '{'
    /* Để gửi được con số 123 cho con người thấy được
     * ta phải biến đổi sang kiểu ký tự,
     * mã ASCII của số 1 là 49
     * mã ASCII của số 2 là 50
     * mã ASCII của số 3 là 51
     */
    Serial.write(49);
    Serial.write(50);
    Serial.write(51);
    // Nếu không nhớ mã ASCII thì dùng cách đơn giản hơn là
    Serial.write('1');
    Serial.write('2');
    Serial.write('3');
}
void loop() {

}

