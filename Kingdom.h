#ifndef SICT_KINGDOM_H
#define SICT_KINGDOM_H      
namespace SICT {                    
#include <iostream>
	using namespace std;
	struct Kingdom {
		char m_name[32];
		int m_population;
	};
	void display(const Kingdom &object);
	void display(Kingdom* pKingdom, int count);

}

#endif                
