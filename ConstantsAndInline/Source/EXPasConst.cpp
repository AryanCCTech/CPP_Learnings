#include "EXPasConst.h"
#include <iostream>
#define HOURS 60
using namespace std;
void Expr::exprssions()
{
	const int mins = 24;
	int constexpr seconds = HOURS * mins * 60;
	cout << "HOURS is a defined macro " << HOURS ;
	cout << endl;
	cout << "Minutes is a constant " << mins;
	cout << endl;
	cout << "Seconds is a constant expression " << seconds;
}
