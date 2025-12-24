#include <stdio.h>
using namespace std;
int button = 9;
int led = 5;

void setup() {
    pinMode(button, INPUT);   // khai báo chân button có thể đọc dữ liệu
    pinMode(led, OUTPUT);     // khai báo chân led là ngõ ra
}

void loop() {
    int buttonStatus = digitalRead(button); // đọc trạng thái button

    if (buttonStatus == HIGH) {   // nếu button được nhấn
        digitalWrite(led, HIGH);  // bật led
    } else {                      // ngược lại
        digitalWrite(led, LOW);   // tắt led
    }
}

