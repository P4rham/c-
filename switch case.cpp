#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	
	
		switch(ch)
		{
			case 'r':cout << "Red";break;
			case 'b':cout << "Blue";break;
			case 'g':cout << "Green";break;
			default :cout << "Error";
		}
}
