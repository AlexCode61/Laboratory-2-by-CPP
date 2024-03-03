
#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));
	int size;
	int index = 0;
	double prouz = 1;
	double sum = 0;
	double max = -99999999;

	cout << "Array length\n";
	cin >> size;

	if (cin.fail() or size <= 1) {
		cout << "Error Array!";
		return 0;
	}

	double* arr = new double(size);
	double* arr_reverse = new double(size);

	cout << "Original array\n";

	for (int i = 0; i < size; ++i) {
		*(arr + i) = static_cast<double>(rand() % 100) / 10.0;
		cout << *(arr + i) << "/";
	}

	for (int i = 0; i < size; ++i) {
		if (*(arr + i) > max) {
			max = *(arr + i);
			index = i;
		}
		if (*(arr + i) < 0) {
			prouz = *(arr + i) * prouz;
		}
	}

	for (int i = 0; i <= index; ++i) {
		if (*(arr + i) > 0) {
			sum = sum + *(arr + i);

		}
	}
	cout << "\nReverse\n";

	for (int i = size-1; i >= 0; --i) {
		*(arr_reverse+(i-size)) = *(arr + i);
		cout << *(arr + i) << "/";
	}

	cout << "\nSumma PolozhitelnbIX\n";
	cout << sum;
}