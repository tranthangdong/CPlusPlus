#include <wiringPi.h>
void setup() {
    // khởi động Serial với tốc độ 9600
    Serial.begin(9600);
    // Gửi số 123 với hàm print rất đơn giản
    Serial.print(123);
}

