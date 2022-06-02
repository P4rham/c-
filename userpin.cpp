#include<iostream>
using namespace std;
int main()
{
	int userpin = 1234, pin, errorcounter = 0;
	do
	{
		cout << " Enter the PIN :";
		cin >> pin;
		if(pin != userpin)
		errorcounter++;
	}
	while(errorcounter < 3 && pin!=userpin);
	
	if(errorcounter < 3)
		cout << "Loading...";
	else
		cout << " Your accont Blocked...";	
}
