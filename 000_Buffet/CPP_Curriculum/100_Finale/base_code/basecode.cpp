// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	
	//Variables
	char santa = '@';
	char out = '|';
	char cov = '_';
	int j;
	int i;
	int x = 2;
	int y = 4;
	char sym;	
	
	//Framed Santa
	for(j = 0; j < 2; j++){
		y = 5;
		for(i = 0; i < 7; i++){
		gotoxy(x, y);
		cout << out;
		y = y + 1;
		}
	x = x + 26;
	y = 5;
	}
	
	x = 2;
	y = 4;
	
	for(j = 0; j < 2; j++){
		x = 3;
		for(i = 0; i < 25; i++){
			gotoxy(x, y);
			cout << cov;
			x = x + 1;
		}
	y = y + 10;	
	x = 3;
	}	
	
	gotoxy(14, 10);
	cout << santa;
	gotoxy(14, 9);
	cout << santa;
	
	gotoxy(14, 8);
	cout << '^';
	gotoxy(13, 8);
	cout << '/';
	gotoxy(12, 9);
	cout << '*';
	gotoxy(15, 8);
	cout << '\\';
	gotoxy(16, 9);
	cout << '*';
	
	gotoxy(14, 7);
	cout << '^';
	gotoxy(13, 7);
	cout << '/';
	gotoxy(12, 8);
	cout << '*';
	gotoxy(15, 7);
	cout << '\\';
	gotoxy(16, 8);
	cout << '*';
	
	gotoxy(14, 6);
	cout << '^';
	gotoxy(13, 6);
	cout << '/';
	gotoxy(12, 7);
	cout << '*';
	gotoxy(15, 6);
	cout << '\\';
	gotoxy(16, 7);
	cout << '*';
	
	gotoxy(14, 5);
	cout << '+';
	
	//Eyes = ∞

	x = 2;
	y = 4;
	
	//Intro
	gotoxy(2,3);
	cout << "Enter a character for a snowflake: ";
	cin >> sym;
	
	//Snowflakes
		
		char spa = ' ';
		
	
		for(i = 0; i < 4; i++){
			gotoxy(x+5,y+2);
			cout << sym << endl;
			sleep(1);
			gotoxy(x+5,y+2);
			cout << spa;
			cout << endl;
			y = y + 1; 
		}
		
		y = 2;
		x = 4;
		
		for(i = 0; i < 5; i++){
			gotoxy(x+14,y+3);
			cout << sym << endl;
			sleep(1);
			gotoxy(x+14,y+3);
			cout << spa;
			cout << endl;
			y = y + 1; 
		}
		
	y = 2;
	x = 4;
		
	for(i = 0; i < 3; i++){
		gotoxy(x+16,y+3);
		cout << sym << endl;
		sleep(1);
		gotoxy(x+16,y+3);
		cout << spa;
		cout << endl;
		y = y + 1; 
	}
	
	

	
	

}
