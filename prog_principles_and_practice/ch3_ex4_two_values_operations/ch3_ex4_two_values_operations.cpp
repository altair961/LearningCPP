#include "../std_lib_facilities.h"

int main() {
	cout << "Please, enter first value: ";
	int val1;
	cin >> val1;

	cout << "Please, enter second value: ";
	int val2;
	cin >> val2;
	
	if(val1 > val2) {
		cout << "first value is greater than second\n";
	} else if(val1 < val2) {
		cout << "first value is less than second\n";
	} else if(val1 == val2) {
		cout << "first value is equal to second\n";
	}

	int sum = 0;
	sum = val1 + val2;
	cout << "Sum of first and second values is: " << sum << "\n";

	int difference = 0;
	difference = val1 - val2;
	cout << "Difference of first and second values is: " << difference << "\n";

	int product = 0;
	product = val1 * val2;
	cout << "Product of first and second values is: " << product << "\n";

	double ratio = 0;
	ratio = val1 * 1.0 / val2;
	cout << "Ratio of first/second values is: " << ratio << "\n";
}
