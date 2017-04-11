#include <iostream>

using namespace std;

static double PI = 3.141562;

struct VektorT
{
	int a;
	int b;
	int c;
};

void Ausgabe(VektorT a);
double Skalarprodukt(VektorT a, VektorT b);
VektorT Addition(VektorT a, VektorT b);
double Laenge(VektorT a);
double Winkel(VektorT a, VektorT b);

void Ausgabe(VektorT a)
{
	cout << a.a << endl << a.b << endl << a.c << endl;
}

VektorT Addition(VektorT a, VektorT b)
{
	VektorT result;

	result.a = a.a + b.a;
	result.b = a.b + b.b;
	result.c = a.c + b.c;

	return result;
}

double Laenge(VektorT a)
{
	double result;

	result = pow(a.a, 2) + pow(a.b, 2) + pow(a.c, 2);
	result = sqrt(result);
	return result;
}

double Skalarprodukt(VektorT a, VektorT b)
{
	double result;

	result = a.a*b.a + a.b*b.b + a.c*b.c;
	return result;
}

double Winkel(VektorT a, VektorT b)
{
	double result = Skalarprodukt(a, b);
	result = result / (Laenge(a)* Laenge(b));
	result = acos(result) * 180 / PI;

	return result;
}