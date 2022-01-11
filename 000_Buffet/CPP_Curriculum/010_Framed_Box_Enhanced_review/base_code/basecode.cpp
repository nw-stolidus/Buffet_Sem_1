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
	
	//coordinates
	int x;
	int y;
	
	cout << "Enter the x coordinate that the box should start at: ";
	int h;
	cin >> h;
	
	cout << "Enter the y coordinate that the box should start at: ";
	int k;
	cin >> k;

	int i;	
	

	gotoxy(h, k);
	for(i = 0;i < w; i++)
	{
	cout << sym;
	
	}

	gotoxy(h, k+(l-1));
	for(i = 0;i < w; i++)
	{
	cout << sym;
	
	}
	
	for(i = 0;i < l; i++)
	{
	gotoxy(h, k);
	cout << sym << endl;
	k = k+1;
	
	}
	
	gotoxy(h, k);
	for(i = 0;i < l; i++)
	{
	gotoxy(h+(w-1), k-l);
	cout << sym << endl;
	k = k+1;
	
	}



}
