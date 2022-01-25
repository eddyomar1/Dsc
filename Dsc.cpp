#include "Arduino.h"
#include "Dsc.h"
 
Ds::Dsc()
{
//   pinMode(pin, OUTPUT);
//   _pin = pin;
}



const int pins[7] = { 2, 3, 4, 5, 6, 7, 8 };
 
const char numbersDisplayAnode[20] = {
//0b1101111, //b,a,c,d,e
0b0111111, //0
0b0000101, //1
0b1011011, //2
0b1001111, //3
0b1100101, //4
0b1101110, //5
0b1111110, //6
0b0000111, //7
0b1111111, //8
0b1100111, //9
0b1110111, //a
0b1111100, //b
0b1011000, //c
0b0111010, //C
0b1011101, //d
0b1111010, //e
0b0000101, //f
}; 



void Dsc::show(char pin){

// for(int i = 0; i < 7; i++) {
// pinMode(pins[i], OUTPUT);
// }


//void lightSegments(int number = pin) {
int numberBit = numbersDisplayAnode[pin];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}

}
  

void Dsc::a(){
int numberBit = numbersDisplayAnode[10];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}


void Dsc::b(){
int numberBit = numbersDisplayAnode[11];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}


void Dsc::c(){
int numberBit = numbersDisplayAnode[12];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}

void Dsc::C(){
int numberBit = numbersDisplayAnode[13];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}

void Dsc::d(){
int numberBit = numbersDisplayAnode[14];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}

void Dsc::e(){
int numberBit = numbersDisplayAnode[15];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}

void Dsc::f(){
int numberBit = numbersDisplayAnode[16];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}





// }
 

