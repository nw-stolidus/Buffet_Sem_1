// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char sym;
	cout << "Please enter a symbol: ";
	cin >> sym;

	cout << "Enter the length you want the line: ";
	int j;
	cin >> j;
	
	cout << "Should the line be h(horizontal) or v(vertical)? ";
	string director;
	cin >> director;
	
	int i;

	if(director == "h")
	for(i = 0;i < j; i++)
	{
	cout <<sym;
	}
	
	if(director == "v")
	for(i = 0;i < j; i++)
	{
	cout <<sym << endl;
	}


}
