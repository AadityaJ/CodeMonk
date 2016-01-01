//https://www.hackerearth.com/problem/algorithm/biased-chandan/
#include <stack>
#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{	stack <int> s;
	int t,n,sum=0;
	scanf("%d",&n);
	while(n-- !=0){
		scanf("%d",&t);
		if(t==0 && s.size()!=0){ s.pop();}
		else if(t>=0 && t<=10){s.push(t);}
	}
	for(int i=0;i<s.size();i++){
		sum+=s.top();
		s.pop();
	}0
	printf("%d\n",sum);
}