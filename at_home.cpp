#include <iostream>
using namespace std;
#include "Kingdom.h"
using namespace SICT;
void read(Kingdom&);
int main() {
	int count = 0; 
	Kingdom* pKingdom;
	cout << "==========\n"
		<< "Input data\n"
		<< "==========\n"
		<< "Enter the number of kingdoms: ";
	cin >> count;
	cin.ignore();
	if (count < 1) return 1;
	pKingdom = new Kingdom[count];
	for (int p = 0; p < count; ++p) {
		cout << "Kingdom #" << p + 1 << ": " << endl;
		read(pKingdom[p]);
	}
	cout << "==========" << endl << endl;
	cout << "------------------------------" << endl
		<< "The first kingdom entered is" << endl
		<< "------------------------------" << endl;
	display(pKingdom[0]);
	cout << "------------------------------" << endl << endl;
	Kingdom* pKingdom_n;
	pKingdom_n = new Kingdom[count + 1];
	pKingdom_n[0] = pKingdom[0];
	pKingdom_n[1] = pKingdom[1];
	delete[] pKingdom;
	pKingdom = pKingdom_n;
	cout << "==========\n"
		<< "Input data\n"
		<< "==========\n"
		<< "Kingdom #" << count + 1 << ": " << endl;
	read(pKingdom[count]);
	++count;
	cout << "==========\n" << endl;
	
	display(pKingdom, count);
	cout << endl;
	delete[] pKingdom;
	return 0;
}
void read(Kingdom& kingdom) {

	cout << "Enter the name of the kingdom: ";
	cin.get(kingdom.m_name, 32, '\n');
	cin.ignore(2000, '\n');
	cout << "Enter the number people living in " << kingdom.m_name << ": ";
	cin >> kingdom.m_population;
	cin.ignore(2000, '\n');
}