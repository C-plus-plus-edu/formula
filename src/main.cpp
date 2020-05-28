#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	double a;
	double b;
	double c;
	double d;

	cin >> a >> b >> c;

	if (b == 0 && c == 0) {
		cout << 0;
		return 0;
	}

	if (a == 0 && c == 0) {
		cout << 0;
		return 0;
	}

	if (a == 0 && b == 0) {
		return 0;
	}

	if (a == 0) {
		cout << (c * -1.0) / b;
		return 0;
	}

	// full
	d = (b * b) - (4 * a * c);
	if (d >= 0) {
		cout << ((-1 * b) + sqrt(d)) / (2 * a);
		if (d != 0) {
			cout << " " << ((-1 * b) - sqrt(d)) / (2 * a);;
		}
	}
	return 0;
}
