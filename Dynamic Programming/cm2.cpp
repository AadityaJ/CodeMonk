//https://www.hackerearth.com/code-monk-dynamic-programming/algorithm/vibhu-and-his-mathematics/description/
#include <stdio.h>
#define MOD 1000000007
long long int funct[1000001];
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	funct[1]=1;funct[2]=2;
	for(int i=3;i<=1000000;i++){
		funct[i]=funct[i-1]+(i-1)*funct[i-2];
		funct[i]%=MOD;
		}
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lld\n",funct[n]);
	}
	return 0;
}