//https://www.hackerearth.com/code-monk-searching/algorithm/monks-encounter-with-polynomial/
/*looking at their explanation :( I missed it */
#include <stdio.h>
int a, b, c, k;
int binSearch(int arr[],int left,int right){
	int mid=(left+right)/2;
	if((a*(arr[mid]*arr[mid]))+(b*arr[mid])+c>=k)
		break;
	else if ()
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int i;
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
