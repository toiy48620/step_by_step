
#include "FastLED.h" 
//#include <Adafruit_NeoPixel.h>

// How many leds in your strip?
#define NUM_LEDS 78
//#define PIN 2
// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 2
//Adafruit_NeoPixel strip = Adafruit_NeoPixel(78, PIN, NEO_GRB + NEO_KHZ800);
// Define the array of leds
CRGB leds[NUM_LEDS];

 void setup() { 
   FastLED.addLeds<WS2811, DATA_PIN, BRG>(leds, NUM_LEDS); //set neopixel strip RGB library   
   Serial.begin(9600); //sets data rate to 9600 bps
   pinMode( 22 , INPUT); //set switch 1
   pinMode( 23 , INPUT); //set switch 2
   pinMode( 24 , INPUT); //set switch 3
   pinMode( 25 , INPUT); //set switch 4
   pinMode( 26 , INPUT); //set switch 5
   pinMode( 27 , INPUT); //set switch 6
   pinMode( 28 , INPUT); //set switch 7
   pinMode( 29 , INPUT); //set switch 8
   pinMode( 30 , INPUT); //set switch 9
   pinMode( 31 , INPUT); //set switch 10
   pinMode( 32 , INPUT); //set switch 11
   pinMode( 32 , INPUT); //set switch 12
   pinMode( 34 , INPUT); //set switch 13
   pinMode( 35 , INPUT); //set switch 14
   pinMode( 36 , INPUT); //set switch 15
   pinMode( 37 , INPUT); //set switch 16
   pinMode( 38 , INPUT); //set switch 17
   pinMode( 39 , INPUT); //set switch 18
   pinMode( 40 , INPUT); //set switch 19
   pinMode( 41 , INPUT); //set switch 20
   pinMode( 42 , INPUT); //set switch 21
   pinMode( 43 , INPUT); //set switch 22
   pinMode( 44 , INPUT); //set switch 23
   pinMode( 45 , INPUT); //set switch 24
   pinMode( 46 , INPUT); //set switch 25
   pinMode( 47 , INPUT); //set switch 26
   int color[26];
   char mode;
   int mix1 = 0;
   int mix2 = 0;
   int mix3 = 0;
   int mix4 = 0;
   int num;
   String t[26];
   String g[26];
   String e[26];
   char mood;  
   color[0] = 0;
   color[1] = 0;
   color[2] = 0;
   color[3] = 0;
   color[4] = 0;
   color[5] = 0;
   color[6] = 0;
   color[7] = 0;
   color[8] = 0;
   color[9] = 0;
   color[10] = 0;
   color[11] = 0;
   color[12] = 0;
   color[13] = 0;
   color[14] = 0;
   color[15] = 0;
   color[16] = 0;
   color[17] = 0;
   color[18] = 0;
   color[19] = 0;
   color[20] = 0;
   color[21] = 0;
   color[22] = 0;
   color[23] = 0;
   color[24] = 0;
   color[25] = 0;
   color[26] = 0;
    e[0] = " ";
    e[1] = " ";
    e[2] = " ";
    e[3] = " ";
    e[4] = " ";
    e[5] = " ";
    e[6] = " ";
    e[7] = " ";
    e[8] = " ";
    e[9] = " ";
    e[10] = " ";
    e[11] = " ";
    e[12] = " ";
    e[13] = " ";
    e[14] = " ";
    e[15] = " ";
    e[16] = " ";
    e[17] = " ";
    e[18] = " ";
    e[19] = " ";
    e[20] = " ";
    e[21] = " ";
    e[22] = " ";
    e[23] = " ";
    e[24] = " ";
    e[25] = " "; 
   while(1){   
    if((mood != 'C')&&(mood != 'W') ){   
    leds[0] = CRGB::LightSeaGreen;
    leds[1] = CRGB::LightSeaGreen;
    leds[2] = CRGB::LightSeaGreen;
    leds[3] = CRGB::LightSeaGreen;
    leds[4] = CRGB::LightSeaGreen;
    leds[5] = CRGB::LightSeaGreen;
    leds[6] = CRGB::LightSeaGreen;
    leds[7] = CRGB::LightSeaGreen;
    leds[8] = CRGB::LightSeaGreen;
    leds[9] = CRGB::LightSeaGreen;
    leds[10] = CRGB::LightSeaGreen;
    leds[11] = CRGB::LightSeaGreen;
    leds[12] = CRGB::LightSeaGreen;
    leds[13] = CRGB::LightSeaGreen;
    leds[14] = CRGB::LightSeaGreen;
    leds[15] = CRGB::LightSeaGreen;
    leds[16] = CRGB::LightSeaGreen;
    leds[17] = CRGB::LightSeaGreen;
    leds[18] = CRGB::LightSeaGreen;
    leds[19] = CRGB::LightSeaGreen;
    leds[20] = CRGB::LightSeaGreen;
    leds[21] = CRGB::LightSeaGreen;
    leds[22] = CRGB::LightSeaGreen;
    leds[23] = CRGB::LightSeaGreen;
    leds[24] = CRGB::LightSeaGreen;
    leds[25] = CRGB::LightSeaGreen;
    leds[26] = CRGB::LightSeaGreen;
    leds[27] = CRGB::LightSeaGreen;
    leds[28] = CRGB::LightSeaGreen;
    leds[29] = CRGB::LightSeaGreen;
    leds[30] = CRGB::LightSeaGreen;
    leds[31] = CRGB::LightSeaGreen;
    leds[32] = CRGB::LightSeaGreen;
    leds[33] = CRGB::LightSeaGreen;
    leds[34] = CRGB::LightSeaGreen;
    leds[35] = CRGB::LightSeaGreen;
    leds[36] = CRGB::LightSeaGreen; 
    leds[37] = CRGB::LightSeaGreen;
    leds[38] = CRGB::LightSeaGreen;
    leds[39] = CRGB::LightSeaGreen;
    leds[40] = CRGB::LightSeaGreen;
    leds[41] = CRGB::LightSeaGreen;
    leds[42] = CRGB::LightSeaGreen;
    leds[43] = CRGB::LightSeaGreen;
    leds[44] = CRGB::LightSeaGreen;
    leds[45] = CRGB::LightSeaGreen;
    leds[46] = CRGB::LightSeaGreen;
    leds[47] = CRGB::LightSeaGreen;
    leds[48] = CRGB::LightSeaGreen;
    leds[49] = CRGB::LightSeaGreen;
    leds[50] = CRGB::LightSeaGreen;
    leds[51] = CRGB::LightSeaGreen;
    leds[52] = CRGB::LightSeaGreen;
    leds[53] = CRGB::LightSeaGreen;
    leds[54] = CRGB::LightSeaGreen;
    leds[55] = CRGB::LightSeaGreen;
    leds[56] = CRGB::LightSeaGreen;
    leds[57] = CRGB::LightSeaGreen;
    leds[58] = CRGB::LightSeaGreen;
    leds[59] = CRGB::LightSeaGreen;
    leds[60] = CRGB::LightSeaGreen;
    leds[61] = CRGB::LightSeaGreen;
    leds[62] = CRGB::LightSeaGreen;
    leds[63] = CRGB::LightSeaGreen;
    leds[64] = CRGB::LightSeaGreen;
    leds[65] = CRGB::LightSeaGreen;
    leds[66] = CRGB::LightSeaGreen;
    leds[67] = CRGB::LightSeaGreen;
    leds[68] = CRGB::LightSeaGreen;
    leds[69] = CRGB::LightSeaGreen;
    leds[70] = CRGB::LightSeaGreen;
    leds[71] = CRGB::LightSeaGreen;
    leds[72] = CRGB::LightSeaGreen;
    leds[73] = CRGB::LightSeaGreen;
    leds[74] = CRGB::LightSeaGreen;
    leds[75] = CRGB::LightSeaGreen;
    leds[76] = CRGB::LightSeaGreen;
    leds[77] = CRGB::LightSeaGreen;
    FastLED.show();       
    Wsup(22, "A" , "a", e, 0);
    Wsup(23, "B" , "b", e, 1);
    Wsup(24, "C" , "c", e, 2);
    Wsup(25, "D" , "d", e, 3);
    Wsup(26, "E" , "e", e, 4);
    Wsup(27, "F" , "f", e, 5);
    Wsup(28, "G" , "g", e, 6);
    Wsup(29, "H" , "h", e, 7);
    Wsup(30, "I" , "i", e, 8);
    Wsup(31, "J" , "j", e, 9);
    Wsup(32, "K" , "k", e, 10);
    Wsup(33, "L" , "l", e, 11);
    Wsup(34, "M" , "m", e, 12);
    Wsup(35, "N" , "n", e, 13);
    Wsup(36, "O" , "o", e, 14);
    Wsup(37, "P" , "p", e, 15);
    Wsup(38, "Q" , "q", e, 16);
    Wsup(39, "R" , "r", e, 17);
    Wsup(40, "S" , "s", e, 18);
    Wsup(41, "T" , "t", e, 19);
    Wsup(42, "U" , "u", e, 20);
    Wsup(43, "V" , "v", e, 21);
    Wsup(44, "W" , "w", e, 22);
    Wsup(45, "X" , "x", e, 23);
    Wsup(46, "Y" , "y", e, 24);
    Wsup(47, "Z" , "z", e, 25);
    g[0] = " ";
    g[1] = " ";
    g[2] = " ";
    g[3] = " ";
    g[4] = " ";
    g[5] = " ";
    g[6] = " ";
    g[7] = " ";
    g[8] = " ";
    g[9] = " ";
    g[10] = " ";
    g[11] = " ";
    g[12] = " ";
    g[13] = " ";
    g[14] = " ";
    g[15] = " ";
    g[16] = " ";
    g[17] = " ";
    g[18] = " ";
    g[19] = " ";
    g[20] = " ";
    g[21] = " ";
    g[22] = " ";
    g[23] = " ";
    g[24] = " ";
    g[25] = " ";
    t[0] = " ";
    t[1] = " ";
    t[2] = " ";
    t[3] = " ";
    t[4] = " ";
    t[5] = " ";
    t[6] = " "; 
    t[7] = " ";
    t[8] = " ";
    t[9] = " ";
    t[10] = " ";
    t[11] = " ";
    t[12] = " ";
    t[13] = " ";
    t[14] = " ";
    t[15] = " ";
    t[16] = " ";
    t[17] = " ";
    t[18] = " ";
    t[19] = " ";
    t[20] = " ";
    t[21] = " ";
    t[22] = " ";
    t[23] = " ";
    t[24] = " ";
    t[25] = " ";
    if(Serial.available() > 0){
       mode = Serial.read();
       //Serial.println(mode);
       if(mode != mood){
          mood = mode;
         }}}   
        if(mood == 'C'){ //colors mode
            //Serial.println(mood);      
          if(mode == 'S'){
            //Serial.println(mode);
          Csup(22, color[0], g, 0); //botton 1
          Csup(23, color[1], g, 1); //botton 2
          Csup(24, color[2], g, 2); //botton 3
          Csup(25, color[3], g, 3); //botton 4
          Csup(26, color[4], g, 4); //botton 5
          Csup(27, color[5], g, 5); //botton 6
          Csup(28, color[6], g, 6); //botton 7
          Csup(29, color[7], g, 7); //botton 8
          Csup(30, color[8], g, 8); //botton 9
          Csup(31, color[9], g, 9); //botton 10
          Csup(32, color[10], g, 10); //botton 11
          Csup(33, color[11], g, 11); //botton 12
          Csup(34, color[12], g, 12); //botton 13
          Csup(35, color[13], g, 13); //botton 14
          Csup(36, color[14], g, 14); //botton 15
          Csup(37, color[15], g, 15); //botton 16
          Csup(38, color[16], g, 16); //botton 17
          Csup(39, color[17], g, 17); //botton 18
          Csup(40, color[18], g, 18); //botton 19
          Csup(41, color[19], g, 19); //botton 20
          Csup(42, color[20], g, 20); //botton 21
          Csup(43, color[21], g, 21); //botton 22
          Csup(44, color[22], g, 22); //botton 23
          Csup(45, color[23], g, 23); //botton 24
          Csup(46, color[24], g, 24); //botton 25
          Csup(47, color[25], g, 25); //botton 26
          if (Serial.available() > 0) {
           mode = Serial.read();
           if (mode == 'E') {
              mood = 'E'; }
              }
          }
        if(mode == 'D'){
          if ((digitalRead(22) == HIGH)&&(digitalRead(23) == HIGH)&&(digitalRead(24) == HIGH)&&(digitalRead(25) == HIGH)&&(digitalRead(26) == HIGH)&&
        (digitalRead(27) == HIGH)&&(digitalRead(28) == HIGH)&&(digitalRead(29) == HIGH)&&(digitalRead(30) == HIGH)&&(digitalRead(31) == HIGH)&&
        (digitalRead(32) == HIGH)&&(digitalRead(33) == HIGH)&&(digitalRead(34) == HIGH)&&(digitalRead(35) == HIGH)&&(digitalRead(36) == HIGH)&&
        (digitalRead(37) == HIGH)&&(digitalRead(38) == HIGH)&&(digitalRead(39) == HIGH)&&(digitalRead(40) == HIGH)&&(digitalRead(41) == HIGH)&&
        (digitalRead(42) == HIGH)&&(digitalRead(43) == HIGH)&&(digitalRead(44) == HIGH)&&(digitalRead(45) == HIGH)&&(digitalRead(46) == HIGH)&&
        (digitalRead(47) == HIGH)){
          Serial.println("Ready");
          mode = 'V';
          }    
        }
        if(mode == 'V'){
          if (Serial.available() > 0) {
            mode = Serial.read();           
            g[0] = " ";
            g[1] = " ";
            g[2] = " ";
            g[3] = " ";
            g[4] = " ";
            g[5] = " ";
            g[6] = " ";
            g[7] = " ";
            g[8] = " ";
            g[9] = " ";
            g[10] = " ";
            g[11] = " ";
            g[12] = " ";
            g[13] = " ";
            g[14] = " ";
            g[15] = " ";
            g[16] = " ";
            g[17] = " ";
            g[18] = " ";
            g[19] = " ";
            g[20] = " ";
            g[21] = " ";
            g[22] = " ";
            g[23] = " ";
            g[24] = " ";
            g[25] = " ";
            }
        }
        if (Serial.available() > 0) {
           mode = Serial.read();   
        }                          
        if(mode == 'N'){   
          for(int i=0; i < 26; i++) {              
              num = random(1,5);
              if((mix1 <= 6)&&(mix2 <= 6)&&(mix3 <= 7)&&(mix4 <= 7)){
              if((num == 1)){                
                mix1++; 
                leds[i*3] = CRGB::Red; 
                leds[(i*3)+1] = CRGB::Red; 
                leds[(i*3)+2] = CRGB::Red;
                }        
      
              if((num == 2)){                
                mix2++;       
                leds[i*3] = CRGB::Blue; 
                leds[(i*3)+1] = CRGB::Blue;
                leds[(i*3)+2] = CRGB::Blue;   
              }
              if((num == 3)){
                mix3++; 
                leds[i*3] = CRGB::Green; 
                leds[(i*3)+1] = CRGB::Green; 
                leds[(i*3)+2] = CRGB::Green;  
              }
              if((num == 4)){
                mix4++; 
                leds[i*3] = CRGB::DarkOrange; 
                leds[(i*3)+1] = CRGB::DarkOrange; 
                leds[(i*3)+2] = CRGB::DarkOrange;  
              }
              }
               while((mix1 > 6) || (mix2 > 6) || (mix3 > 7) || (mix4 > 7)){
                 num = random(1,5);
                   if(mix1 > 6){
                     mix1--;
                   }
                   if(mix2 > 6){ 
                     mix2--;                 
                   } 
                   if(mix3 > 7){
                     mix3-- ;
                   } 
                   if(mix4 > 7){                  
                     mix4--;               
                 }
              if((num == 1)){                
                mix1++; 
                leds[i*3] = CRGB::Red; 
                leds[(i*3)+1] = CRGB::Red; 
                leds[(i*3)+2] = CRGB::Red;
              }        
              if((num == 2)){                
                mix2++;       
                leds[i*3] = CRGB::Blue; 
                leds[(i*3)+1] = CRGB::Blue;
                leds[(i*3)+2] = CRGB::Blue;   
              }
              if((num == 3)){
                mix3++; 
                leds[i*3] = CRGB::Green; 
                leds[(i*3)+1] = CRGB::Green; 
                leds[(i*3)+2] = CRGB::Green;  
              }
              if((num == 4)){
                mix4++; 
                leds[i*3] = CRGB::DarkOrange; 
                leds[(i*3)+1] = CRGB::DarkOrange; 
                leds[(i*3)+2] = CRGB::DarkOrange;
                 
              }             
              }
              //Serial.println(i);
              //Serial.println(num);
              color[i] = num ;
              FastLED.show();
              /*Serial.println(mix1);
              Serial.println(mix2);
              Serial.println(mix3);
              Serial.println(mix4);*/             
              
          }
          //Serial.println(mode + "arduino");   
          mix1 = 0;
          mix2 = 0;
          mix3 = 0;
          mix4 = 0;
          mode = 'S';
          //Serial.println(mode);
                     
     }
     }
  if(mood == 'W'){ //word mode
      leds[0] = CRGB::Chartreuse;
      leds[1] = CRGB::Chartreuse;
      leds[2] = CRGB::Chartreuse;
      leds[3] = CRGB::Chartreuse;
      leds[4] = CRGB::Chartreuse;
      leds[5] = CRGB::Chartreuse;
      leds[6] = CRGB::Chartreuse;
      leds[7] = CRGB::Chartreuse;
      leds[8] = CRGB::Chartreuse;
      leds[9] = CRGB::Chartreuse;
      leds[10] = CRGB::Chartreuse;
      leds[11] = CRGB::Chartreuse;
      leds[12] = CRGB::Chartreuse;
      leds[13] = CRGB::Chartreuse;
      leds[14] = CRGB::Chartreuse;
      leds[15] = CRGB::Chartreuse;
      leds[16] = CRGB::Chartreuse;
      leds[17] = CRGB::Chartreuse;
      leds[18] = CRGB::Chartreuse;
      leds[19] = CRGB::Chartreuse;
      leds[20] = CRGB::Chartreuse;
      leds[21] = CRGB::Chartreuse;
      leds[22] = CRGB::Chartreuse;
      leds[23] = CRGB::Chartreuse;
      leds[24] = CRGB::Chartreuse;
      leds[25] = CRGB::Chartreuse;
      leds[26] = CRGB::Chartreuse;
      leds[27] = CRGB::Chartreuse;
      leds[28] = CRGB::Chartreuse;
      leds[29] = CRGB::Chartreuse;
      leds[30] = CRGB::Chartreuse;
      leds[31] = CRGB::Chartreuse;
      leds[32] = CRGB::Chartreuse;
      leds[33] = CRGB::Chartreuse;
      leds[34] = CRGB::Chartreuse;
      leds[35] = CRGB::Chartreuse;
      leds[36] = CRGB::Chartreuse; 
      leds[37] = CRGB::Chartreuse;
      leds[38] = CRGB::Chartreuse;
      leds[39] = CRGB::Chartreuse;
      leds[40] = CRGB::Chartreuse;
      leds[41] = CRGB::Chartreuse;
      leds[42] = CRGB::Chartreuse;
      leds[43] = CRGB::Chartreuse;
      leds[44] = CRGB::Chartreuse;
      leds[45] = CRGB::Chartreuse;
      leds[46] = CRGB::Chartreuse;
      leds[47] = CRGB::Chartreuse;
      leds[48] = CRGB::Chartreuse;
      leds[49] = CRGB::Chartreuse;
      leds[50] = CRGB::Chartreuse;
      leds[51] = CRGB::Chartreuse;
      leds[52] = CRGB::Chartreuse;
      leds[53] = CRGB::Chartreuse;
      leds[54] = CRGB::Chartreuse;
      leds[55] = CRGB::Chartreuse;
      leds[56] = CRGB::Chartreuse;
      leds[57] = CRGB::Chartreuse;
      leds[58] = CRGB::Chartreuse;
      leds[59] = CRGB::Chartreuse;
      leds[60] = CRGB::Chartreuse;
      leds[61] = CRGB::Chartreuse;
      leds[62] = CRGB::Chartreuse;
      leds[63] = CRGB::Chartreuse;
      leds[64] = CRGB::Chartreuse;
      leds[65] = CRGB::Chartreuse;
      leds[66] = CRGB::Chartreuse;
      leds[67] = CRGB::Chartreuse;
      leds[68] = CRGB::Chartreuse;
      leds[69] = CRGB::Chartreuse;
      leds[70] = CRGB::Chartreuse;
      leds[71] = CRGB::Chartreuse;
      leds[72] = CRGB::Chartreuse;
      leds[73] = CRGB::Chartreuse;
      leds[74] = CRGB::Chartreuse;
      leds[75] = CRGB::Chartreuse;
      leds[76] = CRGB::Chartreuse;
      leds[77] = CRGB::Chartreuse;
      FastLED.show();
      Wsup(22, "A" , "a", t, 0);
      Wsup(23, "B" , "b", t, 1);
      Wsup(24, "C" , "c", t, 2);
      Wsup(25, "D" , "d", t, 3);
      Wsup(26, "E" , "e", t, 4);
      Wsup(27, "F" , "f", t, 5);
      Wsup(28, "G" , "g", t, 6);
      Wsup(29, "H" , "h", t, 7);
      Wsup(30, "I" , "i", t, 8);
      Wsup(31, "J" , "j", t, 9);
      Wsup(32, "K" , "k", t, 10);
      Wsup(33, "L" , "l", t, 11);
      Wsup(34, "M" , "m", t, 12);
      Wsup(35, "N" , "n", t, 13);
      Wsup(36, "O" , "o", t, 14);
      Wsup(37, "P" , "p", t, 15);
      Wsup(38, "Q" , "q", t, 16);
      Wsup(39, "R" , "r", t, 17);
      Wsup(40, "S" , "s", t, 18);
      Wsup(41, "T" , "t", t, 19);
      Wsup(42, "U" , "u", t, 20);
      Wsup(43, "V" , "v", t, 21);
      Wsup(44, "W" , "w", t, 22);
      Wsup(45, "X" , "x", t, 23);
      Wsup(46, "Y" , "y", t, 24);
      Wsup(47, "Z" , "z", t, 25);
      if (Serial.available() > 0) {
           mode = Serial.read();
           if (mode == 'E') {
              mood = 'E'; }
      }
    }
  }  
}
void loop() {
  }
void Csup( int e, int f , String c[], int i){ //position colors mode
 if(c[i] == " "){
    if( (digitalRead(e) == LOW) && (f == 1)){ // red bottons f
      if(c[i] != "R"){
        Serial.println("R");
        c[i] = "R"; 
        }
    }
     if((digitalRead(e) == LOW) && (f == 2)){ // Blue bottons f
      if(c[i] != "B"){
        Serial.println("B");
        c[i] = "B"; 
        }
    }
    if((digitalRead(e) == LOW) && (f == 3)){ // Green bottons f 
      if(c[i] != "G"){
        Serial.println("G");
        c[i] = "G"; 
        }
    }
    if((digitalRead(e) == LOW) && (f == 4)){ // pink bottons f 
      if(c[i] != "P"){
        Serial.println("P");
        c[i] = "P"; 
        }
    }
 }
 else if(c[i] != " "){
 if( (digitalRead(e) == LOW) && (f == 1)){ // red bottons f
      if((c[i] != "R")&&(c[i] == "r")){
        Serial.println("R");
        c[i] = "R"; 
        }
    }
 else if ((digitalRead(e) == HIGH) && (f == 1)){
      if((c[i] != "r")&&(c[i] == "R")){
        Serial.println("r");
        c[i] = "r"; 
        }
 }
 if((digitalRead(e) == LOW) && (f == 2)){ // Blue bottons f
      if((c[i] != "B")&&(c[i] == "b")){
        Serial.println("B");
        c[i] = "B"; 
        }
    }
 else if ((digitalRead(e) == HIGH) && (f == 2)){
      if((c[i] != "b")&&(c[i] == "B")){
        Serial.println("b");
        c[i] = "b"; 
        }
 }        
 if((digitalRead(e) == LOW) && (f == 3)){ // Green bottons f 
      if((c[i] != "G")&&(c[i] == "g")){
        Serial.println("G");
        c[i] = "G"; 
        }
    }
 else if ((digitalRead(e) == HIGH) && (f == 3)){
      if((c[i] != "g")&&(c[i] == "G")){
        Serial.println("g");
        c[i] = "g"; 
        }
 }      
 if((digitalRead(e) == LOW) && (f == 4)){ // pink bottons f 
      if((c[i] != "P")&&(c[i] == "p")){
        Serial.println("P");
        c[i] = "P"; 
        }
    }
 else if ((digitalRead(e) == HIGH) && (f == 4)){
      if((c[i] != "p")&&(c[i] == "P")){
        Serial.println("p");
        c[i] = "p"; 
        }
}      
}
}


void Wsup( int v, String w , String x, String c[], int i){ //position Words mode
    if(c[i] == " "){
    if( digitalRead(v) == LOW ){   //on
      if(c[i] != w){
        Serial.println(w);
        c[i] = w; 
        }
    }
    }
    if(c[i]!= " "){
      if( digitalRead(v) == LOW ){   //on
      if((c[i] != w)&&(c[i] == x)){
        Serial.println(w);
        c[i] = w; 
        }
    }
    else if( digitalRead(v) == HIGH ){   //off
      if((c[i] != x)&&(c[i] == w)){
        Serial.println(x);
        c[i] = x;        
    }
    } 
}
}

