
#include <LiquidCrystal.h> // Khai báo thư viện
// Khai báo các chân RS, E, D4–D7 kết nối với Arduino
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
    // Khởi tạo màn hình LCD, kích thước 16x2
    lcd.begin(16, 2);
}
void loop() {
    // Xóa màn hình và đưa con trỏ về vị trí (0, 0)
    lcd.clear();
    // Di chuyển con trỏ đến cột 6, hàng 0
    lcd.setCursor(6, 0);
    lcd.print("HELLO");
    // Di chuyển con trỏ đến cột 5, hàng 1
    lcd.setCursor(5, 1);
    lcd.print("ARDUINO");
    delay(1000);
}

