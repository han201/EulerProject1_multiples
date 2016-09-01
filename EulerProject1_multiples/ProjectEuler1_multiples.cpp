// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
// The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;

int main() {
	// For each number below 1,000, identify whether it is a multiple of 3 or 5).
	// add i to the sum as it happens
	int sum = 0;
	for (int i = 1; i < 1000; i++) {
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
		//  cout << sum << " " << flush;
	};
	cout << "the sum of all the multiples of 3 or 5 below 1000 is : " << sum << endl;
	system("pause");
	return 0;
}
