#include <iostream>
using namespace std;

int sumTo(int n) {
	cout << "enter sumTo(" << n << ")" << endl;
	if (n == 0) { // base case
		cout << "base case: return 0" << endl;
		return 0;
	}
	int result = n + sumTo(n - 1); // recursive case
	cout << "sumTo(" << n << ") returns " << result << endl;
	return result;
}

int main() {
	int total = sumTo(3);
	cout << "Total = " << total << endl;
	return 0;
}