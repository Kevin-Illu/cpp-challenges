
int doubleDigitValue(int digit) {
	int doubleDigit = digit * 2;
	int sum;
	if(doubleDigit > 10) sum = 1 + doubleDigit % 10;
	else sum = doubleDigit;

	return sum;
}


