#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	//const int ARR_SIZE = 3;
	const int arrSize = 3;

	Rectangle* rectPtrs[arrSize];

	rectPtrs[0] = new Rectangle(5, 3);
	rectPtrs[1] = new Rectangle(20, 40);
	rectPtrs[2] = new Rectangle(2, 10);

	for (int i = 0; i < arrSize; i++)
	{
		cout << rectPtrs[i]->perimeter() << endl;
		cout << rectPtrs[i]->area() << endl;
		cout << endl;
	}

	//now, delete
	for (int i = 0; i < arrSize; i++)
	{
		delete rectPtrs[i];
		rectPtrs[i] = nullptr;
	}
	return 0;
}