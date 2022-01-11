// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout << "Press any key";
	
	int i;
	int j;
	int x = 13;
	int y = 5;
	
	
	for(j = 0; j < 2; j++){
		gotoxy(x, y);
		for(i = 0; i < 7; i++){
			cout << '#';
		}
		y = y + 7;
	}
	
	y = 5;
	
	for(j = 0; j < 2; j++){
	
		for(i = 0; i < 8; i++){
			gotoxy(x, y);
			cout << '#';
			y = y + 1;
		}
		y = 5;
		x = x + 7;
	}


		
	char key = getch();
	
	while(getch() != 'q') {
		gotoxy(16,8);
		cout << random(100);
		
			if(kbhit)
		{
			getch();
		}
		
	
	}	


	
	
}
