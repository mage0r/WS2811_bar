#include <Adafruit_NeoPixel.h>

// This code uses ws2811b chips to drive a bar graph.
// Just in case it wasn't obvious, this is terrible code :)
// John Spencer - 2014

#define PIN 4

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(15, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  // Some example procedures showing how to display to the pixels:
  //colorWipe(strip.Color(255, 0, 0), 50); // Red
  //colorWipe(strip.Color(0, 255, 0), 50); // Green
  //colorWipe(strip.Color(0, 0, 255), 50); // Blue
  //rainbow(20);
  //rainbowCycle(20);
  
      fillTo(150,500);
}

void fillTo(int percentage, int wait) {
  
  int bars[15][4] = {
                    {0,0,20,0},\
                    {0,20,0,0},\
                    {0,0,0,20},\
                    {1,0,20,0},\
                    {1,20,0,0},\
                    {1,0,0,20},\
                    {2,0,20,0},\
                    {2,20,0,0},\
                    {2,0,0,20},\
                    {3,0,20,0},\
                    {3,20,0,0},\
                    {3,0,0,20},\
                    
                    
                    
                    {4,0,50,0},\
                    {4,50,0,0},\
                    {4,0,0,50},\
                    
                    

                    
                    
                  };
  int previous_bar = 0;
  
  for (int i=0; i<percentage/10; i++){
    if (bars[i][0] != previous_bar)
    {
      //strip.setPixelColor(previous_bar,0);
      //strip.show();

    }
    previous_bar = bars[i][0];
    
    //strip.getPixelColor(bars[i][0]) + ((uint32_t)bars[i][1] << 16) | ((uint32_t)bars[i][2] <<  8) | bars[i][3];
    
    strip.setPixelColor(bars[i][0],strip.getPixelColor(bars[i][0]) + ((uint32_t)bars[i][1] << 16) | ((uint32_t)bars[i][2] <<  8) | bars[i][3]);
    strip.show();
    delay(wait);
  }
  
  //((uint32_t)r << 16) | ((uint32_t)g <<  8) | b;
  
  strip.setPixelColor(0,0);
  strip.setPixelColor(1,0);
  strip.setPixelColor(2,0);
  strip.setPixelColor(3,0);
  
  strip.setPixelColor(4,0);
  strip.setPixelColor(5,0);
  strip.setPixelColor(6,0);
  strip.setPixelColor(7,0);
  strip.setPixelColor(8,0);
  
}


