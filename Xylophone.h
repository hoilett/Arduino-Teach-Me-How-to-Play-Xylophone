/*
 * FILENAME:	Mux.h
 * AUTHOR:      Orlando S. Hoilett
 * EMAIL:       orlandohoilett@gmail.com
 *              ohoilett@purdue.edu
 * VERSION:     0.0
 
 
 * AFFILIATIONS
 
 
 * DESCRIPTION
	
 
 * UPDATES
 * Version 0.0
 * 2015/03/08:2023>
 *			Started writing the code.
 
 
 * DISCLAIMER
 * This code is in the public domain. Please feel free to use, modify, distribute,
 * etc. as needed, but please give reference to original author as a courtesy to
 * open source developing/-ers.
 *
 * If you find any bugs in the code, or have any questions, please feel free to
 * contact me.
 
 
 */


#ifndef XYLOPHONE_H
#define XYLOPHONE_H

#include "Arduino.h"
#include "MusicPlayer.h"


const uint8_t numSensors = 12;
uint8_t sensors[numSensors] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int set1[] = {C5, D5, E5, F5, G5, LA5, B5, C6, D6, E6, F6, G6}
const int threshold = 90;

const uint8_t LEDs[numSensors] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

class Xylophone
{
private:
    MusicPlayer myPlayer;
    

    
    
public:
    
    Xylophone();
    Xylophone();
    
    
};

#endif /* #define XYLOPHONE_H */
