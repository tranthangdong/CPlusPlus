#include <SD.h>
#define SD_ChipSelectPin 4
#include <TMRpcm.h>
#include <SPI.h>
	 
TMRpcm tmrpcm;
unsigned long time = 0;
	 
void setup()
{
 
		tmrpcm.speakerPin = 9 
		Serial.begin(9600); //bật serial monitor ở mức baudrate 9600
		if (!SD.begin(SD_ChipSelectPin))
		{
			Serial.println("SD fail");
			return;
		}else{
			Serial.println("OK");
		}
	
		tmrpcm.play("xinchao.wav");
		delay(3000);
		time = millis();
	} 
	void loop()
	{
		tmrpcm.play("tambiet.wav");
		delay(5500);
		digitalWrite(9, LOW);
	 
		if(millis() - time > 50)
		{
			if (!tmrpcm.isPlaying())
			digitalWrite(9, LOW);
			time = millis();
		}
}
