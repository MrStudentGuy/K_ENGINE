#include <iostream>
#include <Windows.h>
#include "./geo.h"

using namespace std;

int op4G;
float numChosen;
int x;

float sumintang(float n)
{
	float nAns = n - 2;
	nAns *= 180;
	return nAns;
}

float eachAng(float n)
{
	float nAns = n - 2;
	nAns *= 180;
	nAns /= n;

	return nAns;
}

void GetnAn()
{
	cout << "Which Operation would you like to use?" << endl;
	cout << "1: Find the sum of interior angles." << endl;
	cout << "2: Find value of each interior angle" << endl;
	cin >> op4G;

	cout << "Number of sides: ";
	cin >> numChosen;

	switch (op4G)
	{
		case 1:
			cout << "Using N-2(180) (where N was the value you had entered), the sum of all interior angles in the desired polygon is ";
			cout << sumintang(numChosen);
			cout << " Degrees." << endl;
			cout << "Exit the app and relaunch to try other functions." << endl;
			cin >> x;
			break;
		case 2:
			cout << "Using N-2(180)/N (where N was the value you had entered), the value of each interior angle in the desired polygon is ";
			cout << eachAng(numChosen);
			cout << " Degrees." << endl;
			cout << "Exit the app and relaunch to try other functions." << endl;
			cin >> x;
			break;
		default:
			cout << "Error: Unknown Values.";
			cout << "Exit the app and relaunch to try other functions." << endl;
			cin >> x;
			break;
	}
}

void Geo()
{
	GetnAn();
}

//TODO: Lh6Yktw5GD3tj4QJ57+YASrcENEvTHmnXjE645DEzL8=