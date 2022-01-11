// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	//endl is equivalent to java's 'ln'
	//'cin >>' is for input, 'cout <<' is for output
	//between each type of data put the carats EX: cout << "string" << int;

	cout << "Enter your first number: ";	
	int y = 0;
	cin >> y;
	cout << "Enter your second number: ";
	int x = 0;
	cin >> x;
	
	int z = x*y;
	cout << "The product of the two numbers is: " << z;

}
