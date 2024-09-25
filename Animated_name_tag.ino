/*********
  Rui Santos
  Complete project details at https://randomnerdtutorials.com  
*********/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  // Display static text
  display.println("  SEGUIMI SU YOUTUBE");
  display.display(); 
    display.setTextSize(1);
  display.setTextColor(WHITE);
  // Display static text
      delay(1000);
  display.println("         cerca ");
  display.display(); 

  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(2, 16);
      delay(1000);
  display.println("DIEGOOZ");
  display.display(); 

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 38);
  // Display static text
        delay(1000);
  display.println("   Video istruttivi");
    display.display(); 
        delay(1000);
  display.println("  Elettronica pratica");
    display.display(); 
        delay(1000);
  display.println("      Recensioni");
  display.display(); 
        delay(5000);
	
ESP.restart();


}

void loop() {

}