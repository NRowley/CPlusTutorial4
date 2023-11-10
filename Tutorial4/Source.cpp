#include <iostream>
using namespace std;

int main() {
	//while loop
	int myInt(0);
	int count = 0;

	while (count <= 10) {
		cout << myInt << endl;
		myInt++;
		count++;
	}
	//End while loop


	//Do while loop
	double numPi = 3.14;
	double numE = 2.71;
	int count = 0;

	bool condition = true;

	do {
		cout << "The number PI is: " << numPi << endl;
		cout << "The number E is: " << numE << endl;
		cout << "Count: " << count << endl;
		cout << "PI + E * count = " << numPi + numE * count << endl;
		count++;
		if (count <= 10) {
			condition = true;
		}
		else {
			condition = false;
		}

	} while (condition);
	//End Do while loop

	//For loops

	for (int i = 0;i <= 10; i++) {
		for (int j = 0; j <= 10; j++) {
			for (int k = 0; k <= 10; k++) {
				cout << "i = " << i << ", j = " << j << ", k = " << k << endl;
			}
		}
	}


	system("pause");
}