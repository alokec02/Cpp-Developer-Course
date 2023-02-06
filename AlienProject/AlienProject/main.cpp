#include <iostream>
#include <string>
#include "Alien.h"
#include <vector>

using namespace std;



int main()
{

	Alien alien1(10, 100, 'F');
	Alien alien2(20, 52, 'M');
	Alien alien3(25, 35, 'M');
	Alien alien4(45, 15, 'F');


	Alien alien5 = alien1 + alien2;
	Alien alien6 = alien3 + alien4;

	cout << "alien1 == alien2? " << boolalpha
		<< (alien1 == alien2) << endl;

	cout << "alien1 != alien3? " << boolalpha
		<< (alien1 != alien3) << endl;

	cout << "alien4 > alien3? " << boolalpha
		<< (alien4 > alien3) << endl;
	cout << "alien4 >= alien1? " << boolalpha
		<< (alien4 >= alien1) << endl;

	cout << "alien5 < alien4? " << boolalpha
		<< (alien5 < alien4) << endl;

	cout << "alien6 <= alien2? " << boolalpha
		<< (alien6 <= alien2) << endl;



	return 0;
}