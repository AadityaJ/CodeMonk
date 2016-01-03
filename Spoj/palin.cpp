//http://www.spoj.com/problems/PALIN/
#include <iostream>
#include <string>
using namespace std;
bool ispalin(int n){
	string num=to_string(n);
	int len=0;
	while(num[len]!='\0') len++;
	for(int i=0;i<=(len)/2;i++){
		if(num[i]!=num[len-i-1]) return 0;
	}
	return 1;
}
int main(){
	int t;
	int num;
	cin>>t;
	while(t-- > 0){
		cin>>num;
		for(int i=num+1;;i++){
			if(ispalin(i)){
				cout<<i;
				break ;
			}
		}
	}
}
//make a different function called ispalin