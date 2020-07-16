//libraries
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main () {
	cout << "---------------------------------" << endl;
	cout << "Pin generator by Paolo Basirico'" << endl;
	cout << "---------------------------------" << endl;

	srand (unsigned(time(NULL)));
	
	//variables
	int numberOfPin = 0;
	int pin;
	
	//choice of pin number
	do {
		cout << "________________________________________________" << endl;
		cout << endl; 
		cout << "How many pins do you want generate? (minimum 1)"  << endl;
		cout << "________________________________________________" << endl;

		cin >> numberOfPin;
		
		if (numberOfPin == 0)
			{
				cout << endl;
				cout << "======================"<<endl;
				cout << "ERROR: Minimum pin: 1"<<endl;
				cout << "======================"<<endl;
				cout << endl;

			}
			
	} while (numberOfPin < 1);
	
	//console clear
	system("cls");
	
	//Pin generator
	for(int i = 0; i < numberOfPin; i++)
		{
			cout << endl;
			pin = rand();
			cout << "Pin number "<< (i + 1) << ": " << pin << endl;
		}

}
