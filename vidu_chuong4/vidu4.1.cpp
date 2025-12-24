#include <stdio.h>
using namespace std;
int led = 6;                 // chân kết nối với led
int ledState = LOW;          // khai báo biến lưu trạng thái của led
unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
    pinMode(led, OUTPUT);    // khai báo chân led là ngõ ra
}

void loop() {
    unsigned long currentMillis = millis();

    if (currentMillis - previousMillis >= interval) {
        previousMillis = currentMillis;

        if (ledState == LOW) {
            ledState = HIGH; // Đổi trạng thái led
        } else {
            ledState = LOW;  // Đổi trạng thái led
        }

        digitalWrite(led, ledState);
    }
}

