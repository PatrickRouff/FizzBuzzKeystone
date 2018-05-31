#include <iostream>

using namespace std;

int main() {
	int i = 0;
	int j = 0;
	cout<<"Start: ";
	cin>>i;
	cout<<"End: ";
	cin>>j;
	while (i<=j) {
  		if ((i%3) == 0){
    		cout<<"Fizz";
  	} else if ((i%5) == 0 ){
	    	cout<<"Buzz";
  	} else {
		cout<<i;	
	}
  	cout<<", ";
  	i++;
	}
}
