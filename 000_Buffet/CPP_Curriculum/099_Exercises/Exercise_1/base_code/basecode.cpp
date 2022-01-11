// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x;
	int j = 25;
	
	if(x <= j) 
	for(x = 5;x <= j; x++)
		{
		cout << x << endl;
		}
		
	cout << endl;
		
	int y = 15;
	int k = 5;
		
	while(true) {
		if(y < k){
			break;
		}
		cout << y << endl;
		if(y == k) {
			break;
		}
		y = y-1;
	}

}
