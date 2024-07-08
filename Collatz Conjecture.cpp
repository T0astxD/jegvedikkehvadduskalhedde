#include <iostream>



void calculateOddOrEven(int n) {

	for(int i=0; i<=10; i++) {
		if (n % 2 == 0) {
			n = n / 2;
			std::cout << n << "\n";
		}
		else if(n % 2 == 1) {
			n = (n * 3) + 1;
			std::cout << n << "\n";
		}
	}
}


void main() {
	calculateOddOrEven(12);

}