// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char sym;
	cout << "Please enter a symbol: ";
	cin >> sym;

	cout << "Enter the height you want the box: ";
	int l;
	cin >> l;
	
	cout << "Enter the width you want the box: ";
	int w;
	cin >> w;
	
	cout << "Enter the x coordinate of the start point: ";
	int a;
	cin >> a;
	
	cout << "Enter the y coordinate of the start point: ";
	int b;
	cin >> b;
	
	int x;
	int y;
	
	for(x=0; x<l; x=x+1){
		for(y=0; y<w; y=y+1){
			gotoxy(a, b);
			a = a+1;
			cout << sym;
		}
		cout << endl;
		b = b+1;
		a = a-w;
	}
	
	
	
}
