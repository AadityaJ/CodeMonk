//http://www.iecsemanipal.com/wcs/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int t=1,a,sum=1;
	scanf("%d",&a);
	int n[a];
	for(int i=0;i<a;i++){
		scanf("%d",&n[i]);
		if(i==0) sum=1;
		else{
			if(n[i]>n[i-1])t+=1;
			else t=1;
			sum+=t;
		}
	}
	printf("%d\n",sum);
	return 0;
}