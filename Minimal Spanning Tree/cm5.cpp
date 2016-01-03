//https://www.hackerearth.com/problem/algorithm/the-best-internet-browser-3/
#include <iostream>
#include <string>
using namespace std;
int countvow(char *a){
	int i=0;
	while(*a!='\0'){
		switch(*a){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				i++;
		}
		a++;
	}
	return --i;
}
int main(int argc, char const *argv[])
{
	int t;
	char site[100];
	cin>>t;
	while(t--){
		cin>>site;
		int res =strlen(site)-4-countvow(site);
		cout<<res<<"/"<<strlen(site); 
	}
	return 0;
}