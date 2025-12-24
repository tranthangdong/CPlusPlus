#include <stdio.h>
using namespace std;

// Chân ST_CP của 74HC595
int latchPin = 8;
// Chân SH_CP của 74HC595
int clockPin = 12;
// Chân DS của 74HC595
int dataPin = 11;
// Trạng thái của LED là byte sẽ gửi qua shiftOut
byte ledStatus;
void setup() {
    pinMode(latchPin, OUTPUT);
    pinMode(clockPin, OUTPUT);
    pinMode(dataPin, OUTPUT);
}
void loop() {
    // Sáng tuần tự
    ledStatus = 0; // mặc định không đèn nào sáng (0 = 0b00000000)
    for (int i = 0; i < 8; i++) {
        ledStatus = (ledStatus << 1) | 1;

        digitalWrite(latchPin, LOW);   // các đèn LED chưa sáng
        // ShiftOut ra IC 74HC595
        shiftOut(dataPin, clockPin, MSBFIRST, ledStatus);
        digitalWrite(latchPin, HIGH);  // cập nhật trạng thái LED

        delay(500); // dừng 500 ms để thấy hiệu ứng
    }
    // Tắt tuần tự
    for (int i = 0; i < 8; i++) {
        ledStatus <<= 1;

        digitalWrite(latchPin, LOW);
        shiftOut(dataPin, clockPin, MSBFIRST, ledStatus);
        digitalWrite(latchPin, HIGH);
        delay(500);
    }
}

