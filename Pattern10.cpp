/*
1
23
345
4567
*/
// Method-1 using variable
/*
#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int row=1;
	while(row<=n){
		
		int col=1;
		int value=row;
		while(col<=row){
			
			cout<<value;
			value=value+1;
			col=col+1;
		}
		cout<<endl;
		row =row+1;
	}
}
*/

// Methosd-2 using relation b/w row and column
#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int row=1;
	while(row<=n){
		
		int col=1;
	
		while(col<=row){
			
			cout<<row+col-1;
			
			col=col+1;
		}
		cout<<endl;
		row =row+1;
	}
}



