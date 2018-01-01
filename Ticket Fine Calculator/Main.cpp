/*
* Project 1 - Calculating speeding ticket fines
*
* Autor: Steve Gubenia
* For: CMIS315
* Project 1
* Professor: Omar Zevallos
*/

// Class/Library includes. 
#include <iostream> 
#include "SpeedingFineCalculator.h" 
#include "Menu.h" 

using namespace std;

// Main program execution
int main() {
	// Repeat the menu until told not to 
	int repeat = 1;

	// Declare variable to hold fines total
	int totalFine = 0;

	// Counter for tickets processed
	int ticketCounter = 0;

	// Create an instance of the menu. 
	Menu* menu = new Menu();

	// Print speeding fine descriptions. 
	menu->fineDescription();

	// Get processing fee 
	int processingFee = menu->processingFee();

	while (repeat == 1) {
		// increment counter
		ticketCounter++;

		// Print ticket number
		cout << "Speeding Ticket #" << ticketCounter << endl;

		// Get the offense zone 
		int offenseZone = menu->offenseZone();

		// Get the speed limit. 
		int speedLimit = menu->speedLimit();

		// Get the actual speed. 
		int actualSpeed = menu->actualSpeed();

		// Create an instance of the fine calculator 
		SpeedingFineCalculator* calc = new SpeedingFineCalculator(processingFee);

		// Add fine to total
		totalFine = totalFine + calc->getFine(offenseZone, speedLimit, actualSpeed);

		// Print the fine output. 
		cout << "The total fine is: $" << totalFine << endl << endl;

		// Ask for a repeat of a ticket. 
		repeat = menu->repeatSpeedingFineCalculator();
	}

	// Exit cleanly. 
	return 0;
};