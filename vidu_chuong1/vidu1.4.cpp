void setup() 
{
	Serial.begin(9600); // khởi tạo cổng serial
}

void loop() 
{
	Serial.println("Hello World"); // in ra chữ Hello World
	delay(1000); // tạm dừng chương trình 1 giây
}
