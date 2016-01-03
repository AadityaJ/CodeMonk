//https://www.hackerearth.com/code-monk-searching/algorithm/monks-encounter-with-polynomial/
/*a bit more modified*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a, b, c;
		int k,i;
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		scanf("%d",&k);
		int l=(c-k)-((b*b)/(4*a));
		for(i=l;;i++){
			if((a*(i*i))+(b*i)+c>=k && i>=0) break;
		}
		printf("%d\n",i);
	}
	return 0;
}