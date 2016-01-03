//http://www.spoj.com/problems/FCTRL/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int counter=0;
	int i=n;
	while(i){
		if(i%5 ==0 && i%2 ==0){counter ++;}
		i--;                            
	}
	cout<<counter;
}