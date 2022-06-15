#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c;
		cout << "Enter 3 numbers :"<< endl;
	cin >> a >> b >> c;
	int min;
	min = a;
	if(b < min)
		min = b;
	if(c < min)
		min = c;
	cout << "min = "<< min;
	
	getch();		
		
}
