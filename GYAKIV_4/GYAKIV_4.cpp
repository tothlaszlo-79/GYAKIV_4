#include<iostream>
#include<ctime>
using namespace std;
int osszeszoroz(int a, int b)
{
	return a* b;
}
#define szoroz(X, Y) (X) * (Y)
int main()
{
	int c = 3, k = 8;
	clock_t kezd, veg;
	kezd = clock();
	for (int i = 0; i < 2100000000; i++)
	{
		osszeszoroz(c + 3, k - 2);
	}
	veg = clock();
	cout << "A fuggveny futasi ideje :" << (float)(veg - kezd) / CLK_TCK << endl;
	kezd = clock();
	for (int i = 0; i < 2100000000; i++)
	{
		szoroz(c + 3, k - 2);
	}
	veg = clock();
	cout << "A makro futasi ideje :" << (float)(veg - kezd) / CLK_TCK << endl;
	kezd = clock();
	for (int i = 0; i < 2100000000; i++)
	{
		(c + 3)* (k - 2);
	}
	veg = clock();
	cout << "A muvelet futasi ideje :" << (float)(veg - kezd) / CLK_TCK << endl;
	system("pause");
	return 0;
}