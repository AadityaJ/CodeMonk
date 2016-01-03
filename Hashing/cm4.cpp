//https://www.hackerearth.com/code-monk-hashing/algorithm/monk-and-match-making/
#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	string s,a;
	cin>>a;
	s=" "+a;
	// s is out string now
	cin>>t;
	while(t--){
	bool flag=0;
	int l1,r1,l2,r2;
	cin>>l1>>r1>>l2>>r2;
	int diff=r1-l1;
	if(diff==(r2-l2)){
		for(int i=0;i<=diff;i++){
			if(s[l1+i]!=s[l2+i]){
				printf("No\n");
				flag=1;
				break;
			}
		}
		if(!flag)
			printf("Yes\n");
	}
	else 
		printf("No\n");
	}
	return 0;
}