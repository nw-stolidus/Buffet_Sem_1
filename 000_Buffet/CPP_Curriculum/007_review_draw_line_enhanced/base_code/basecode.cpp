// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char sym;
	int x;
	int y;
	int z;
	int a;
	int b = 0;

	cout << "Enter a symbol: ";
	cin >> sym;
	
	cout << "Enter the length of the line: ";
	cin >> z;
	
	cout << "Enter the x coordinate of the starting point: ";
	cin >> x;
	
	cout << "Enter the y coordinate of the starting point: ";
	cin >> y;
	
	if(a < z)
	for(a = 0; a < z; a++)
		{
		gotoxy(x , y);
		cout << sym;
		if(a == z){
			break;
		}
	x = x+1;	
	}
		
	

}
