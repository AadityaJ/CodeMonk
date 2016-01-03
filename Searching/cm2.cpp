//https://www.hackerearth.com/code-monk-searching/algorithm/monks-encounter-with-polynomial/
/*brute force approach*/

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
		for(i=0;;i++){
			if((a*(i*i))+(b*i)+c>=k) break;
		}
		printf("%d\n",i);
	}
	return 0;
}