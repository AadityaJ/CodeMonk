//https://www.hackerearth.com/code-monk-number-theory-i/algorithm/chandu-and-his-interns/
//why was i thinking of generating the entire table all at once :(
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int num_div(int n){
	int count=0;
	for(int i=1;i*i<=n;i++){
		if(count>=4)break;
		if(n%i==0) {
			if (i * i < n)
				count += 2;
			else count++;}
	} return count;
}
int main(int argc, char const *argv[])
{	
	int t;
	scanf("%d",&t);
	while(t--){
		int a;
		scanf("%d",&a);
		string count=(num_div(a)<4)?("NO"):("YES");
		cout<<count<<endl;
	}
	return 0;
}