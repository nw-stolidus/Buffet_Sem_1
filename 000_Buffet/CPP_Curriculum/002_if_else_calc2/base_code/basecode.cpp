// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout << "Enter your first number: ";	
	int y = 0;
	cin >> y;
	
	cout << "Enter your second number: ";
	int x = 0;
	cin >> x;

	cout << "Enter the operatior(+,-,*,/): ";
	string operation;
	cin >> operation;
	if(operation == "+")
	{
	cout << x+y;
	}
	
	if(operation == "-")
	{
	cout << x-y;
	}
	
	if(operation == "*")
	{
	cout << x*y;
	}
	
	if(operation == "/")
	{
	cout << x/y;
	}
	
	
}
