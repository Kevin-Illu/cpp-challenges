#include <iostream>
using std::cin;
using std::cout;


int main(){
	for (int row = 1; row <= 7; row++){
		// for (int i = 1; i <= abs(4 - row); i++) {
		for (int hashNum = 1; hashNum <= 4 - abs(4-row); hashNum++){
			// cout << i;
			cout << "#";
		}
		cout << "\n";
	}
}


