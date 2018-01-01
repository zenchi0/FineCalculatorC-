/*
 * Fine calculator class definition.
 *
 * Autor: Steve Gubenia
 * For: CMIS315
 * Project 1
 * Professor: Omar Zevallos
*/

class SpeedingFineCalculator {
public:
	SpeedingFineCalculator(int processingFee);
	int getFine(int zone, int speedLimit, int actualSpeed) const;
private:
	int _processingFee;
};