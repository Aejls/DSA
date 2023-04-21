// Pattern Question
/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444 */
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(i==1 || i==7 ) {
                cout<<4;
                
            } else if(j==1 || j==7){
                cout<<4;
            } else if(i==2 || i==6){
                cout<<3;
            } else if(j==2 || j==6){
                cout<<3;
                
            }else if(i==4 && j==4){
                cout<<1;
            }else{
                cout<<2;
            }
            
     }
        cout<<endl;
    }

    return 0;
}
