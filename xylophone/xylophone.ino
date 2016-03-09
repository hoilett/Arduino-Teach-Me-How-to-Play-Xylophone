#include <MusicPlayer.h>

MusicPlayer myPlayer = MusicPlayer(7);

int small = 2;

int sensorA0 = 0;
int sensorA1 = 0;
int sensorA2 = 0;
int sensorA3 = 0;
int sensorA4 = 0;
int sensorA5 = 0;
int sensorA6 = 0;
int sensorA7 = 0;
int sensorA8 = 0;
int sensorA9 = 0;
int sensorA10 = 0;
int sensorA11 = 0;
int sensorA12 = 0;

const int common_threshold = 90;

int thresholdA0 = 80;
int thresholdA1 = common_threshold;
int thresholdA2 = common_threshold;
int thresholdA3 = 120;
int thresholdA4 = 50;
int thresholdA5 = common_threshold;
int thresholdA6 = common_threshold;
int thresholdA7 = common_threshold;
int thresholdA8 = common_threshold;
int thresholdA9 = 150;
int thresholdA10 = 150;
int thresholdA11 = 250;

//int sensor_array[] = {

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


const uint8_t ledPin_00 = 0;
const uint8_t ledPin_01 = 1;
const uint8_t ledPin_02 = 2;
const uint8_t ledPin_03 = 3;
const uint8_t ledPin_04 = 4;
const uint8_t ledPin_05 = 5;
const uint8_t ledPin_06 = 6;
const uint8_t ledPin_07 = 7;
const uint8_t ledPin_08 = 8;
const uint8_t ledPin_09 = 9;
const uint8_t ledPin_10 = 10;
const uint8_t ledPin_11 = 11;
const uint8_t ledPin_12 = 12;
const uint8_t ledPin_13 = 13;

const int keyLEDs = 14;

const uint8_t ledPin_Array[keyLEDs] = {ledPin_00, ledPin_01, ledPin_02,
ledPin_03, ledPin_04, ledPin_05, ledPin_06, ledPin_07, ledPin_08,
ledPin_09, ledPin_10, ledPin_11, ledPin_12, ledPin_13};


void setup()
{
  Serial.begin(115200);
  Serial.println("ready!");
  myPlayer.playNote(A5, Q);
  Serial.println("hello world!");
}

void loop()
{
//  int x = analogRead(A1);
//  Serial.println(x);
  readSensors();
  play();
  //printSensors();
  
  delay(10);
}


void setupPin()
{
  for (uint8_t i = 0; i < 15; i++)
  {
    pinMode(i, OUTPUT);
  }
}


void readSensors()
{
  sensorA0 = analogRead(A0);
  //delay(small);
  sensorA1 = analogRead(A1);
  //delay(small);
  sensorA2 = analogRead(A2);
  //delay(small);
  sensorA3 = analogRead(A3);
  //delay(small);
  sensorA4 = analogRead(A4);
  //delay(small);
  sensorA5 = analogRead(A5);
  //delay(small);
  sensorA6 = analogRead(A6);
  //delay(small);
  sensorA7 = analogRead(A7);
  //delay(small);
  sensorA8 = analogRead(A8);
  //delay(small);
  sensorA9 = analogRead(A9);
  //delay(small);
  sensorA10 = analogRead(A10);
  //delay(small);
  sensorA11 = analogRead(A11);
  //delay(small);
  sensorA12 = analogRead(A12);
  //delay(small);
}

int play()
{
  if (sensorA0 > thresholdA0 && sensorA3 > thresholdA3)
  {
    myPlayer.playNote(F5, Q);
//    Serial.print("A3: ");
//    Serial.println(sensorA3);
    return 0;
  }
  if (sensorA7 > thresholdA7 && sensorA8 > thresholdA8)
  {
    myPlayer.playNote(C6, Q);
//    Serial.print("A7: ");
//    Serial.println(sensorA7);
    return 0;
  }
  if (sensorA3 > thresholdA3 && sensorA11 > thresholdA11)
  {
    myPlayer.playNote(G6, Q);
//    Serial.print("A11: ");
//    Serial.println(sensorA11);
    return 0;
  }
  if (sensorA11 > thresholdA11 && sensorA10 > thresholdA10)
  {
    myPlayer.playNote(G6, Q);
//    Serial.print("A11: ");
//    Serial.println(sensorA11);
    return 0;
  }
  if (sensorA11 > thresholdA11 && sensorA3 > thresholdA3)
  {
    myPlayer.playNote(G6, Q);
//    Serial.print("A11: ");
//    Serial.println(sensorA11);
    return 0;
  }
  if (sensorA0 > thresholdA0)
  {
    myPlayer.playNote(C5, Q);
//    Serial.print("A0: ");
//    Serial.println(sensorA0);
    return 0;
  }
  if (sensorA1 > thresholdA1)
  {
    myPlayer.playNote(D5, Q);
//    Serial.print("A1: ");
//    Serial.println(sensorA1);
    return 0;
  }
  if (sensorA2 > thresholdA2)
  {
    myPlayer.playNote(E5, Q);
//    Serial.print("A2: ");
//    Serial.println(sensorA2);
    return 0;
  }
  if (sensorA3 > thresholdA3)
  {
    myPlayer.playNote(F5, Q);
//    Serial.print("A3: ");
//    Serial.println(sensorA3);
    return 0;
  }
  if (sensorA4 > thresholdA4)
  {
    myPlayer.playNote(G5, Q);
//    Serial.print("A4: ");
//    Serial.println(sensorA4);
    return 0;
  }
  if (sensorA5 > thresholdA5)
  {
    myPlayer.playNote(LA5, Q);
//    Serial.print("A5: ");
//    Serial.println(sensorA5);
    return 0;
  }
  if (sensorA6 > thresholdA6)
  {
    myPlayer.playNote(B5, Q);
//    Serial.print("A6: ");
//    Serial.println(sensorA6);
    return 0;
  }
  if (sensorA7 > thresholdA7)
  {
    myPlayer.playNote(C6, Q);
//    Serial.print("A7: ");
//    Serial.println(sensorA7);
    return 0;
  }
  if (sensorA8 > thresholdA8)
  {
    myPlayer.playNote(D6, Q);
//    Serial.print("A8: ");
//    Serial.println(sensorA8);
    return 0;
  }
  if (sensorA9 > thresholdA9)
  {
    myPlayer.playNote(E6, Q);
//    Serial.print("A9: ");
//    Serial.println(sensorA9);
    return 0;
  }
  if (sensorA10 > thresholdA10)
  {
    myPlayer.playNote(F6, Q);
//    Serial.print("A10: ");
//    Serial.println(sensorA10);
    return 0;
  }
  if (sensorA11 > thresholdA11)
  {
    myPlayer.playNote(G6, Q);
//    Serial.print("A11: ");
//    Serial.println(sensorA11);
    return 0;
  }
}


void initialize()
{
  for (uint8_t i = 0; i < num_pos; i++)
  {
    pinMode(pos_array[i], OUTPUT);
  }
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
