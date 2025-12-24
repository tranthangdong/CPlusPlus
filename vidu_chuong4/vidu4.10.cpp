#include <Wire.h>
/* Địa chỉ của DS1307 */
const byte DS1307 = 0x68;
/* Số byte dữ liệu sẽ đọc từ DS1307 */
const byte NumberOfFields = 7;
/* khai báo các biến thời gian */
int second, minute, hour, day, wday, month, year;
void setup() {
    Wire.begin();
    Serial.begin(9600);
    /* cài đặt thời gian cho module */
    // 12:30:45 Chủ nhật 08-02-2015
    setTime(12, 30, 45, 1, 8, 2, 15);
}
void loop() {
    /* Đọc dữ liệu của DS1307 */
    readDS1307();

    /* Hiển thị thời gian ra Serial Monitor */
    digitalClockDisplay();

    delay(1000);
}
void readDS1307() {
    Wire.beginTransmission(DS1307);
    Wire.write((byte)0x00);
    Wire.endTransmission();

    Wire.requestFrom(DS1307, NumberOfFields);

    second = bcd2dec(Wire.read() & 0x7F);
    minute = bcd2dec(Wire.read());
    hour   = bcd2dec(Wire.read() & 0x3F); // chế độ 24h
    wday   = bcd2dec(Wire.read());
    day    = bcd2dec(Wire.read());
    month  = bcd2dec(Wire.read());
    year   = bcd2dec(Wire.read()) + 2000;
}
/* Chuyển từ BCD sang Decimal */
int bcd2dec(byte num) {
    return (num / 16 * 10) + (num % 16);
}
/* Chuyển từ Decimal sang BCD */
int dec2bcd(byte num) {
    return (num / 10 * 16) + (num % 10);
}
void digitalClockDisplay() {
    Serial.print(hour);
    printDigits(minute);
    printDigits(second);

    Serial.print(" ");
    Serial.print(day);
    Serial.print(" ");
    Serial.print(month);
    Serial.print(" ");
    Serial.print(year);
    Serial.println();
}
void printDigits(int digits) {
    Serial.print(":");
    if (digits < 10)
        Serial.print('0');
    Serial.print(digits);
}
/* cài đặt thời gian cho DS1307 */
void setTime(byte hr, byte min, byte sec, byte wd, byte d, byte mth, byte yr) {
    Wire.beginTransmission(DS1307);
    Wire.write((byte)0x00); // reset pointer
    Wire.write(dec2bcd(sec));
    Wire.write(dec2bcd(min));
    Wire.write(dec2bcd(hr));
    Wire.write(dec2bcd(wd)); // Sunday = 1, Saturday = 7
    Wire.write(dec2bcd(d));
    Wire.write(dec2bcd(mth));
    Wire.write(dec2bcd(yr));
    Wire.endTransmission();
}

