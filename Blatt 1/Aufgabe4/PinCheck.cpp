#include <iostream>

using namespace std;

void CountCalls()
{
	static unsigned int ctr = 0;
	ctr++;
	return ctr;
}

void PinCheck()
{
	static unsigned int Pin[4] = { 4,7,1,1 };	//Array mit korektem Pin
	static unsigned int Eingabe[4];				//Array mit eingegebenem Pin
	int x;										//Eingabevariable der Pinziffer


	cout << "Bitte geben Sie ihren PIN ein:" << endl << endl;

	//Schleife zur Ermittlung des eingegebenen Pins
	for (int i = 0; i < 4; i++)
	{
		cin >> x;
		Eingabe[i] = x;
	}

}