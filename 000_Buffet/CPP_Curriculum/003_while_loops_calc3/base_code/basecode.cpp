// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
		// write code here
	while(true)
	{
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
		cout << x+y << endl;
		}
		
		if(operation == "-")
		{
		cout << y-x << endl;
		}
		
		if(operation == "*")
		{
		cout << x*y << endl;
		}
		
		if(operation == "/")
		{
		cout << y/x << endl;
		}
		
		string checkin;
		cout << "Would you like to do another equation? (yes or no)" << endl;
		cin >> checkin;
	if(checkin == "no" || "No" || "NO")
	{
	 break;
	}
}
	
	int x = 0;
	char y = 'x';
	while(true) {
		cout << "You've been gnomed!";
		
		cin >> y;
		if(y == 'q'){
			break;
		}
		cout << x;
		if(x == 100) {
			break;
		}
		x = x+1;
	}

	
}
