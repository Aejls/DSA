//Printing Binary No. of decimal number 
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int ans =0;
	int i =0;
	while(n!=0) {
		
		int bit =n&1;
		ans = (bit * pow(10,i)) + ans; //This code is valid only for the number whose binary number lies b/w -2,147,483,647 to 2,147,483,647 (i.e. -2^31 to 2^31-1).
	//If we store this answer in string or array then we will be able to print long number too.
		n=n>>1;
		i++;
		
	}
	cout<< ans;
	

}
//This above code is only for positive number which lies in the range of integer number
