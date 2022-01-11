// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char sym;
	cout << "Enter a symbol for the box: ";
	cin >> sym;

	int uno;
	cout << "Enter a whole number: ";
	cin >> uno;
	
	char function;
	cout << "Enter an operand: ";
	cin >> function;

	int dos;
	cout << "Enter the second whole number: ";
	cin >> dos;
	
	
	gotoxy(18, 9);
	cout << uno;
	cout << " ";
	cout << function;
	cout << " ";
	cout << dos;
	cout << " = ";
	if(function == '*')
	{
		cout << uno*dos;
	}
	
	if(function == '-')
	{
		cout << uno-dos;
	}	
	
	if(function == '+')
	{
		cout << uno+dos;
	}	
	
	if(function == '/')
	{
		cout << uno/dos;
	}
	
	if(function == '%')
	{
		cout << uno%dos;
	}


	cout << endl;

	//preset
	int l = 15;
	int w = 31;
	int y = 6;
	int x = 10;

	//working variables
	int i;
	int j;
	
	for(i = 1; i < w; i++){
		gotoxy(x, y);
		cout << sym;
		x = x+1;
	}
	
	for(i = 1; i < w; i++){
		gotoxy(x-1, l);
		cout << sym;
		x = x-1;
	}
	
	for(j = 1; j < l; j++){
		gotoxy(x, y);
		cout << sym;
		y = y+1;
	}

	for(j = 1; j < l; j++){
		gotoxy(x+(w-1), y-1);
		cout << sym;
		y = y-1;
	}





	gotoxy(w+20, l+20);
	cout << "You're welcome" << endl;

}
