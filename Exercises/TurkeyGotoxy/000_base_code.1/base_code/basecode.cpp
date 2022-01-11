// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char sym = '[';
	char eye = 'O';
	char leg = '|';
	char gob = '}';
	char bod = 'M';
	
	int i;
	int f = 8;
	int f1 = 11;
	int f2 = 12;
	int f3 = 14;
	int lonk = 4;
	int f9 = 10;
	
	gotoxy(13, 15);
	for(i = 0; i < f; i++)
	{
	 cout << sym;
	}
		
	gotoxy(11, 16);
	for(i = 0; i < f9; i++)
	{
	 cout << sym;
	}
	
	gotoxy(10, 17);
	for(i = 0; i < f1; i++)
	{
	 cout << sym;
	}
	
	gotoxy(10, 18);
	for(i = 0; i < f2; i++)
	{
	 cout << sym;
	}
	
	gotoxy(9, 19);
	for(i = 0; i < f3; i++)
	{
	 cout << sym;
	}
	
	gotoxy(10, 20);
	for(i = 0; i < f2; i++)
	{
	 cout << sym;
	}
	
	gotoxy(11, 21);
	for(i = 0; i < f; i++)
	{
	 cout << sym;
	}
	
	
	for(i = 0; i < lonk; i = i+1)
	{
		gotoxy(17,i+22);
		cout << leg;
	}
	
	for(i = 0; i <= lonk; i = i+1)
	{
		gotoxy(20,i+21);
		cout << leg;
	}
	
	gotoxy(19, 17);
	for(i = 0; i < f; i++)
	{
	 cout << bod;
	}
	
	gotoxy(17, 18);
	for(i = 0; i < f9; i++)
	{
	 cout << bod;
	}
	
	gotoxy(17, 19);
	for(i = 0; i < f9; i++)
	{
	 cout << bod;
	}
	
	gotoxy(18, 20);
	for(i = 0; i < f; i++)
	{
	 cout << bod;
	}
	
	
	for(i = 0; i < lonk; i++)
	{
	gotoxy(24, 17-i);
	 cout << bod;
	}

	gotoxy(25, 14);
	cout << gob;
	
	gotoxy(24, 13);
	for(i = 0; i < 2; i++)
	{
		cout << eye;
	}
	
	for(i = 0; i < 1; i++)
	{
	gotoxy(23, 13-i);
	 cout << bod;
	}
	
	for(i = 0; i < 1; i++)
	{
	gotoxy(26, 13-i);
	 cout << bod;
	}
	
	for(i = 0; i < 2; i++)
	{
	gotoxy(24+i, 12);
	 cout << bod;
	}
	
	gotoxy(50,50);
}