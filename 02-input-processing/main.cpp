#include <iostream>
#include "helpers.h"
using std::cout;
using std::cin;

int main() {


	char digit;
	int oddLengthChecksum = 0;
	int evenLengthChecksum = 0;
	int position = 1;


	cout << "Enter a number: ";
	digit = cin.get();
	while(digit != 10) {
		if (position % 2 == 0) {
			oddLengthChecksum += doubleDigitValue(digit - '0');
		} else {
			oddLengthChecksum += digit - '0';
			evenLengthChecksum += doubleDigitValue(digit - '0');
		}

		digit = cin.get();
		position++;
	}
	int checksum;
	if((position - 1) % 2 == 0) checksum = evenLengthChecksum;
	else checksum = oddLengthChecksum;
	cout << "Checksum is " << checksum << ". \n";
	
	if (checksum % 10 == 0){
		cout << "Checksum is divisible by 10. Valid. \n";
	}
	else { 
		cout << "Checksum is not divisible by 10. Invalid. \n";
	}

	return 1;
}
