#include <stdio.h>
int main(int argc, char const *argv[])
{
	int t,a,x,y;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&a);
		int t=a;
		int sum=0;
		int isCity[10000]={0};
		int max=0;
		while(a--){
			scanf("%d",&x);
			scanf("%d",&y);
			if(max<x)max=x;
			if(max<y)max=y;
			isCity[x]++;
			isCity[y]++;
			}
		for(int i=1;i<=max;i++){
			if(isCity[i]>0)
				sum++;
			}
		printf("%d\n",sum);
	}
	return 0;
}
