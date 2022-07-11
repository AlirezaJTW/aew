#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float array [10] , sum = 0 , a = 0 ;
	for (int i = 0; i < 10; i++)
	{
		cout << "enter your number :" ;
		cin >> array[i] ;
		sum += array[i] ;
	}
	sum = sum/10 ;
	cout << "sum = " << sum ;
	for (int i = 0; i < 10; i++)
		{
		a = array[i] - sum ;
		if (a < 0)
		{
			a = -a ;
		}
		if (a <= 1)
		{
			cout << "index is :" << i << endl ;
		}
	}
return 0;
}
