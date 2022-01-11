// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
		char sym;
	cout << "Please enter a symbol: ";
	cin >> sym;

	cout << "Enter the height you want the border: ";
	int l;
	cin >> l;
	
	cout << "Enter the width you want the border: ";
	int w;
	cin >> w;
	
	int i;
	
	//coordinates
	int x = 1;
	int y = 5;
		
	for(i = 0;i <= w; i++)
	{
	cout << sym;
	
	}
	
	gotoxy(x,y+(l-1));
	for(i = 0;i <= w; i++)
	{
	cout << sym;
	
	}
	
	gotoxy(x, y);
	for(i = 0;i < l; i++)
	{
	cout << sym << endl;
	
	}

	
	for(i = 0;i < l; i++)
	{
	gotoxy(x+w, y);
	cout << sym << endl;
	gotoxy(x+w, y);
	y = y+1;
	}
	
	gotoxy(2+w, 2+l);
	cout << endl;

}
