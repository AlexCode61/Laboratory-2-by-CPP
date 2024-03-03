#include <iostream>
#include <random>
using namespace std;

int main()
{
	srand(time(NULL));
	int A[10],raz;
	int max = 15;
	int min = -20;

	for (int i = 0; i < 10; ++i) {
		*(A + i) = rand()%(max - min+1) - abs(min);
	}

	if (*A >= 0) {
		raz = *A;
		cout << *A << " Polozhitelnoe\n";
	}
	else {
		cout << *A << " Otricatelnoe\n";
	}
	for (int i = 1; i < 10; ++i) {
		if (*(A + i) >= 0) {
			cout << *(A + i) << " Polozhitelnoe\n";
			raz = raz - *(A + i);
			cout << raz << " Raznostb\n";
		}
		else {
			cout << *(A + i) << " Otricatelnoe\n";
		}
	}
	cout << raz << " Raznostb\n";
	return 0;
}

