
//Chef has two integers X and Y. Chef wants to perform some operations to make XX and YY equal. In one operation, Chef can either:

//set X := x+1
//Y:=Y+2
//Find the minimum number of operations required to make X and Y equal.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(y>x){
	        cout<<(y-x)<<endl;
	    }
	    else if((x-y)%2==0){
	        cout<<(x-y)/2<<endl;
	    }
	    else{
	        cout<<2+(x-y)/2<<endl;
	    }
	}
	return 0;
}
