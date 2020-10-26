#include <iostream>
using namespace std;
#define SIZE 15
void print(char *str);

void main()
{
	char s[SIZE] = "2EghDH$#%^w&*$";
	print(s);


}


void print(char *str)
{
	for (; *str; str++)
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9')))
			cout << *str << " ";
			cout << endl;

}
