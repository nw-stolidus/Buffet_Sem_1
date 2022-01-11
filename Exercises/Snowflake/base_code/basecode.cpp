// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	char sym;
	cout << "Enter a character for a snowflake: ";
	cin >> sym;
	
	int i;
	int x = 1;
	int y = 3;
	char spa = ' ';
	

	for(i = 0; i < 7; i++){
		gotoxy(x,y);
		cout << sym << endl;
		sleep(2);
		gotoxy(x,y);
		cout << spa;
		cout << endl;
		y = y+1;
	}
	
	
		
	
	gotoxy(x+15, y+15);
	cout << endl;

}
