#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int deg;
	int sum=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&deg);
		sum+=deg;
	}
	if(sum==(2*(n-1))){printf("Yes\n");}
	else {printf("No\n");}
	return 0;
}