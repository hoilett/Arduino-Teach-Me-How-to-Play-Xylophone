//
//  Xylophone.cpp
//  
//
//  Created by Orlando Hoilett on 3/8/16.
//
//

#include "Xylophone.h"



Xylophone::Xylophone()
{
    
}


Xylophone::Xylophone(uint8_t speaker)
{
    MusicPlayer myPlayer = MusicPlayer(speaker);
}


void Xylophone::volume()
{
    
}


Xylophone::begin()
{
    for (uint8_t i = 0; i < numSensors; i++)
    {
        pinMode(LEDs[i], OUTPUT);
    }
}


Xylophone::play()
{
    for (uint8_t i = 0; i < numSensors; i++)
    {
        if (analogRead(sensors[i]) > threshold)
        {
            myPlayer.playNote(note[i], Q);
            digitalWrite(LEDs[i], HIGH);
            delay(20);
            digitalWrite(LEDs[i], LOW);
        }
    }
}