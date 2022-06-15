//this code first get the int then cout those from big number to small
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int x, y, temp;
	cin >> x >> y;
	if(x > y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	cout << y <<endl << x;
	getch();
}
