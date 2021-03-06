/*
* SpeedingFineCalculator class for project 1.
*
* Autor: Steve Gubenia
* For: CMIS315
* Project 1
* Professor: Omar Zevallos
*/


// Include class library 
#include "SpeedingFineCalculator.h" 


//Constructor with override for processing fee 
SpeedingFineCalculator::SpeedingFineCalculator(int processingFee) {
	_processingFee = processingFee;
};


/**
* Gets the total fine based on zone, speed limit and actual speed
*
* @param  zone        Zone where speeding offense occured
* @param  speedLimit  Posted speed limit where the offense occured
* @param  actualSpeed Actual speed of travel when ticket was issued
* @return             Total calculated fine
*/
int SpeedingFineCalculator::getFine(int zone, int speedLimit, int actualSpeed) const {
	// Initialize the extra fine and fine multiplier. 
	int extraFine = 0;
	int multiplier = 1;


	// Select the multiplier and extra fine from zone. 
	switch (zone) {
	case 1:
		multiplier = 5;
		break;
	case 2:
		multiplier = 8;
		extraFine = 75;
		break;
	case 3:
		multiplier = 5;
		extraFine = 125;
	default:
		break;
	};


	// Calculate the difference in speed. 
	int difference = actualSpeed - speedLimit;


	// Initial fine is calculated by multiplying the difference in speed 
	// by the zone multiplier
	int fine = difference * multiplier;


	// Return the fine plus extra fines + processing fee. 
	return fine + extraFine + _processingFee;
};