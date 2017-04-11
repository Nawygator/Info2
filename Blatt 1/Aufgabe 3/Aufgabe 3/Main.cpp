#include <iostream>
#include "Vektor.h"

using namespace std;

int main()
{
	VektorT v;
	v.a = 1;
	v.b = 2;
	v.c = 4;

	VektorT u;
	u.a = 3;
	u.b = 5;
	u.c = 1;

	double x = Winkel(u, v);

	cout << x << endl;
	Ausgabe(u);


	system("pause");
	return 0;
}