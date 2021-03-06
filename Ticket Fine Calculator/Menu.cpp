/*
 * Speeding Fine calculator menu options and input sanitizing.
 *
 * Autor: Steve Gubenia
 * For: CMIS315
 * Project 1
 * Professor: Omar Zevallos
*/

#include <iostream>
#include <string>
#include "Menu.h" 

using namespace std;


//Default constuctor 
Menu::Menu() {};


//Default destructor 
Menu::~Menu() {};


//Prints description of fine calculations  
void Menu::fineDescription() {
	// Print general fine guidance. 
	cout << "********************************************************************************" << endl;
	cout << "* Speeding Ticket Fine Calculator                                              *" << endl;
	cout << "* One time processing fee is applied to each transaction.                      *" << endl;
	cout << "* Multiple speeding tickets can be processed during a single transaction.      *" << endl;
	cout << "* Fines for speeding are calculated based on the following parameters:         *" << endl;
	cout << "* 1) Business zone: $5 per mile over speed limit plus processing fee.          *" << endl;
	cout << "* 2) Residential zone: $8 per mile over speed limit plus additional fee of $75.*" << endl;
	cout << "* 3) Work zone: $5 per mile over speed limit plus additional fee of $125.      *" << endl;
	cout << "********************************************************************************" << endl;
	cout << endl;
};

/**
* Input and sanitization of processing fee
* @return processing fee
*/
int Menu::processingFee() {
	// Initialize processing fee to a bad value. 
	int processingFee = -1;

	// While processing fee is a bad value 
	while (processingFee < 0) {
		// Input processing fee from the user 
		cout << "Enter processing fee in dollars: $";
		cin >> processingFee;

		// If input is good and numerically correct 
		if (cin.good() && processingFee >= 0) {
			// Integer input is good do nothing 
		}

		else {
			// 'cin' bad data set. Flush and reassign. 
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			processingFee = -1;
		}
	}

	// Return court fees. 
	return processingFee;
};

/**
* Returns the zone of speeding offense
* @return zone
*/
int Menu::offenseZone() {
	// Initialize zone to a bad value 
	int zone = -1;

	// While zone is a bad value 
	while (zone < 0) {
		// Input court fees from the user. 
		cout << "Enter the speeding offense zone (1:business, 2:residential, 3:work district): ";
		cin >> zone;

		// If input was good and numerically correct 
		if (cin.good() && (zone > 0 && zone <= 3)) {
			// Integer input is good do nothing
		}

		else {
			// 'cin' bad data set. Flush and reassign. 
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			zone = -1;
		}
	}

	// Return zone 
	return zone;
};

/*
* Returns the speed limit
* @return Speed limit
*/
int Menu::speedLimit() {
	// Initialize speed limit to a bad value 
	int speedLimit = -1;

	// While speed limit is a bad value
	while (speedLimit < 0) {
		// Input speed limit from user 
		cout << "Enter the speed limit in miles per hour: ";
		cin >> speedLimit;

		// If input was good and numerically correct
		if (cin.good() && speedLimit > 0) {
			// Integer input is good do nothing 
		}

		else {
			// 'cin' bad data set. Flush and reassign. 
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			speedLimit = -1;
		}
	}

	// Return speed limit. 
	return speedLimit;
};

/*
* Returns the actual speed of offense
* @return Actual speed
*/
int Menu::actualSpeed() {
	// Initialize actual speed to bad value 
	int actualSpeed = -1;

	// While actual speed is bad value
	while (actualSpeed < 0) {
		// Input actual speed from user 
		cout << "Enter the vehicle's speed in miles per hour: ";
		cin >> actualSpeed;

		// If input was good and numerically correct 
		if (cin.good() && actualSpeed > 0) {
			// Integer input is good do nothing 
		}

		else {
			// 'cin' bad data set. Flush and reassign new value (0). 
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			actualSpeed = -1;
		}
	}

	// Blank line for readability
	cout << endl;

	// Return actual speed 
	return actualSpeed;
};

/*
* Returns option to create a new ticket
* @return Repeat flag
*/
int Menu::repeatSpeedingFineCalculator() {
	// Initialize repeat to a bad value
	int repeat = -1;

	// While repeat is a bad value 
	while (repeat < 0) {
		// Prompt user to input another ticket 
		cout << "Enter 1 to enter another ticket or 0 to quit this fine calculator: ";
		cin >> repeat;

		// If input was good and numerically correct 
		if (cin.good() && (repeat >= 0 && repeat < 2)) {
			// Integer input is good do nothing 
		}

		else {
			// 'cin' bad data set. Flush and reassign new value 
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			repeat = -1;
		}
	}

	// Return repeat choice 
	return repeat;
};