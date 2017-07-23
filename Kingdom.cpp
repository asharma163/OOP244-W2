#include <iostream>
using namespace std;
#include "Kingdom.h"
namespace SICT {
	void display(const Kingdom &object)
	{
		cout << object.m_name << ", population " << object.m_population << endl;

	}
	void display(Kingdom* pKingdom, int count)
	{   
		cout << "------------------------------" << endl;
		cout << "Kingdoms of SICT" << endl;
		cout << "------------------------------" << endl;
		int sum = 0;
		for (int x = 0; x < count; x++)
		{   
			cout << x + 1 << ". "<< pKingdom[x].m_name << ", population "<< pKingdom[x].m_population << endl;
			sum = sum + pKingdom[x].m_population;
		}
		cout << "------------------------------" << endl;
		cout << "Total population of SICT: " << sum << endl;
		cout << "------------------------------" << endl;
	}

}