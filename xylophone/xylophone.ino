#include <MusicPlayer.h>


const uint16_t sensitivity = 0;


//positions to show where on the xylophone the last hit was made
const uint8_t pos_00 = 0;
const uint8_t pos_01 = 1;
const uint8_t pos_02 = 2;
const uint8_t pos_03 = 3;
const uint8_t pos_04 = 4;

const uint8_t pos_05 = 5;
const uint8_t pos_06 = 6;
const uint8_t pos_07 = 7;
const uint8_t pos_08 = 8;
const uint8_t pos_09 = 9;

const uint8_t pos_10 = 10;
const uint8_t pos_11 = 11;
const uint8_t pos_12 = 12;
const uint8_t pos_13 = 13;
const uint8_t pos_14 = 14;

const uint8_t num_pos = 15;

const uint8_t pos_array = {pos_00, pos_01, pos_02, pos_03, pos_04


Xylophone myXylophone = Xylophone(7);

void setup()
{
  Serial.begin(115200);
  myXylophone.begin();
}

void loop()
{
    myXylophone.play();
}


void MaryHadaLittleLamb()
{
  int delayTime = 50;
  
  for (int i = 0; i < keyLEDs; i++)
  {
    digitalWrite(ledPin_Array[i], LOW);
  }

  //Ma-
  //E
  digitalWrite(ledPin_Array[2], HIGH);
  delay(delayTime);

  //-ry
  //D
  digitalWrite(ledPin_Array[2], LOW);
  digitalWrite(ledPin_Array[1], HIGH);
  delay(delayTime);

  //had
  //C
  digitalWrite(ledPin_Array[1], LOW);
  digitalWrite(ledPin_Array[0], HIGH);
  delay(delayTime);

  //a
  //D
  digitalWrite(ledPin_Array[0], LOW);
  digitalWrite(ledPin_Array[1], HIGH);
  delay(delayTime);

  //lit-
  //E
  digitalWrite(ledPin_Array[1], LOW);
  digitalWrite(ledPin_Array[2], HIGH);
  delay(delayTime);

  //-tle
  //E
  digitalWrite(ledPin_Array[2], LOW);
  delay(10);
  digitalWrite(ledPin_Array[2], HIGH);
  delay(delayTime);

  //lamb
  //E
  digitalWrite(ledPin_Array[2], LOW);
  delay(10);
  digitalWrite(ledPin_Array[2], HIGH);
  delay(delayTime);

  //lit-
  //D
  digitalWrite(ledPin_Array[2], LOW);
  digitalWrite(ledPin_Array[1], HIGH);
  delay(delayTime);

  //tle
  //D
  digitalWrite(ledPin_Array[1], LOW);
  delay(10);
  digitalWrite(ledPin_Array[1], HIGH);
  delay(delayTime);

  //lamb
  //D
  digitalWrite(ledPin_Array[1], LOW);
  delay(10);
  digitalWrite(ledPin_Array[1], HIGH);
  delay(delayTime);

  //lit-
  //E
  digitalWrite(ledPin_Array[1], LOW);
  digitalWrite(ledPin_Array[2], HIGH);
  delay(delayTime);
  
  //-tle
  //G
  digitalWrite(ledPin_Array[2], LOW);
  digitalWrite(ledPin_Array[4], HIGH);
  delay(delayTime);
  
  //lamb
  //G
  digitalWrite(ledPin_Array[4], LOW);
  delay(10);
  digitalWrite(ledPin_Array[4], HIGH);
  delay(delayTime);
  
  //Ma-
  //E
  digitalWrite(ledPin_Array[4], LOW);
  digitalWrite(ledPin_Array[2], HIGH);
  delay(delayTime);
  
  //-ry
  //D
  digitalWrite(ledPin_Array[2], LOW);
  digitalWrite(ledPin_Array[1], HIGH);
  delay(delayTime);
  
  //had
  //C
  digitalWrite(ledPin_Array[1], LOW);
  digitalWrite(ledPin_Array[0], HIGH);
  delay(delayTime);
  
  //a
  //D
  digitalWrite(ledPin_Array[0], LOW);
  digitalWrite(ledPin_Array[1], HIGH);
  delay(delayTime);
  
  //lit-
  //E
  digitalWrite(ledPin_Array[2], LOW);
  delay(10);
  digitalWrite(ledPin_Array[2], HIGH);
  delay(delayTime);
  
  //-tle
  //E
  digitalWrite(ledPin_Array[2], LOW);
  delay(10);
  digitalWrite(ledPin_Array[2], HIGH);
  delay(delayTime);
  
  //lamb
  //E
  digitalWrite(ledPin_Array[2], LOW);
  delay(10);
  digitalWrite(ledPin_Array[2], HIGH);
  delay(delayTime);
  
  //his
  //E
  digitalWrite(ledPin_Array[2], LOW);
  delay(10);
  digitalWrite(ledPin_Array[2], HIGH);
  delay(delayTime);
  
  //fleece
  //D
  digitalWrite(ledPin_Array[2], LOW);
  digitalWrite(ledPin_Array[1], HIGH);
  delay(delayTime);
  
  //was
  //D
  digitalWrite(ledPin_Array[1], LOW);
  delay(10);
  digitalWrite(ledPin_Array[1], HIGH);
  delay(delayTime);
  
  //white
  //E
  digitalWrite(ledPin_Array[1], LOW);
  digitalWrite(ledPin_Array[2], HIGH);
  delay(delayTime);
  
  //as
  //D
  digitalWrite(ledPin_Array[2], LOW);
  digitalWrite(ledPin_Array[1], HIGH);
  delay(delayTime);
  
  //snow
  //C
  digitalWrite(ledPin_Array[1], LOW);
  digitalWrite(ledPin_Array[0], HIGH);
  delay(delayTime);
  
}

/*

E
D
C
D
E



 * 
 * 
 */
