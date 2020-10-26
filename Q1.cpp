#include <iostream>
using namespace std;
#define SIZE 7
enum Vehicle { CAR = 1, TRUCK = 2, BICYCLE = 3 };
void count(Vehicle *A, int size, int &car, int &truck, int &bicycle);

void main()
{
	Vehicle B[SIZE] = { CAR,TRUCK,CAR,BICYCLE,CAR,TRUCK,BICYCLE };
	int c = 0, t = 0, b = 0;
	count(B, SIZE, c, t, b);
	for (Vehicle *ptr = B; ptr < B + SIZE; ptr++)
		switch (*ptr)
		{
		case CAR: cout<<"CAR ";
			break;
		case TRUCK: cout << "TRUCK ";
			break;
		case 3: cout << "BICYCLE ";
			break;
		}
	cout << endl;
	cout << "car= " << c << "\ntruck= " << t << "\nbicycle= " << b << endl;
}


void count(Vehicle *A, int size, int &car, int &truck, int &bicycle)
{
	for (Vehicle *ptr = A; ptr < A + size; ptr++)
		switch (*ptr)
		{
		case CAR: car++;
			break;
		case TRUCK: truck++;
			break;
		case 3: bicycle++;
			break;
		}


}