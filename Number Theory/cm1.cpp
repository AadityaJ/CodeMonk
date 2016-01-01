//https://www.hackerearth.com/code-monk-number-theory-i/algorithm/the-magical-shop/
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
 {
 	long long a,b;
 	string str;
 	cin>>a;
 	cin>>b;
 	cin>>str;
 	long long sum=0;
 	for(int i=0;i<str.size();i++){
 		if(str[i]=='1') sum=(sum+a)%b;
 		a=(a*a)%b;
 	}
 	 	cout<<sum<<"\n";
 	return 0;
 } 