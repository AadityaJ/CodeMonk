//https://www.hackerearth.com/code-monk-array-strings/algorithm/terrible-chandu/
#include <stdio.h>
#include <cstring>
int main(int argc, char const *argv[])
{
	int t;
	char a[10],b[10];
	scanf("%d",&t);
	while(t-- !=0){
		int i=0;
		scanf("%s",a);
		int n=strlen(a);
		while(i<=n){
			b[i]=a[n-i-1];
			i++;
		}
		printf("%s\n",b);
	}
	return 0;
}