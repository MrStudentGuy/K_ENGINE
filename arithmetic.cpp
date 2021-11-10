#include <iostream>
#include <Windows.h>
#include "./ari.h"

using namespace std;

int op;
int i;
float n1;
float n2;

float AddFunc(float i1, float i2)
{
	float fin = i1 + i2;
	return fin;
}

float MinFunc(float i1, float i2)
{
	float fin = i1 - i2;
	return fin;
}

float mul(float i1, float i2)
{
	float fin = i1 * i2;
	return fin;
}

float div(float i1, float i2)
{
	float fin = i1 / i2;
	return fin;
}

void AskNAnalyze()
{
	cout << "Which Operation would you like to use?" << endl;
	cout << "1: + (Add)" << endl;
	cout << "2: - (Subtract)" << endl;
	cout << "3: x (Multiply)" << endl;
	cout << "4: ÷ (Divide)" << endl;
	cin >> op;

	cout << "Number 1" << endl;
	cin >> n1;

	cout << "Number 2" << endl;
	cin >> n2;


	switch (op)
	{
		case 1:
			cout << "Answer: ";
			cout << AddFunc(n1, n2) << endl;
			cout << "Exit the app and relaunch to try other functions." << endl;
			cin >> i;
			break;
		case 2:
			cout << "Answer: ";
			cout << MinFunc(n1, n2) << endl;
			cout << "Exit the app and relaunch to try other functions." << endl;
			cin >> i;
			break;
		case 3: 
			cout << "Answer: ";
			cout << mul(n1, n2) << endl;
			cout << "Exit the app and relaunch to try other functions." << endl;
			cin >> i;
			break;
		case 4: 
			cout << "Answer: ";
			cout << div(n1, n2) << endl;
			cout << "Press any key to exit the app. Relaunch to try other functions." << endl;
			cin >> i;
			break;
		default:
			cout << "Invalid Input." << endl;
			cout << "Press any key to exit the app. Relaunch to try other functions." << endl;
			cin >> i;
			break;
	}
}

void Ar()
{
	AskNAnalyze();
}