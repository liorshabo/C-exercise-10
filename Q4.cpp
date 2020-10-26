#include <iostream>
using namespace std;

#define SIZE1 3
#define SIZE2 4
bool up_down(int* arr1, int* arr2, int size1, int size2);

void main()
{
	int arr1[SIZE1] = { 2,15,65 }, arr2[SIZE2] = { 200,100,5,1 };
	for (int* p1 = arr1, *p2 = arr2; (p1 < arr1 + SIZE1 ) || (p2 < arr2 + SIZE2 ); )
	{
		if (p1 < arr1 + SIZE1)
			cout << *(p1++) << " ";
		else if (p1++ == arr1 + SIZE1)
			cout << endl;
		else if (p2 < arr2 + SIZE2)
				cout << *(p2++) << " ";
			else
				cout << endl;
	}

	cout << (up_down(arr1, arr2, SIZE1, SIZE2) ? "\nall good\n" : "\nnot good\n");
	
}


bool up_down(int* arr1, int* arr2, int size1, int size2)
{
	
	for (int* p1 = arr1, *p2 = arr2; (p1 < arr1 + size1 - 1) || (p2 < arr2 + size2 - 1); p1++, p2++)
	{
		if (*p1 >= *(p1 + 1) && (p1 < arr1 + size1 - 1))
			return false;
		if (*p2 <= *(p2+1) && (p2 < arr2 + size2 - 1))
			return false;
	}
	return true;

}