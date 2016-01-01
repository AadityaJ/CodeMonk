//https://www.hackerearth.com/code-monk-sorting/algorithm/puchi-and-luggage/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	int arr[100];
	scanf("%d",&t);
	while(t--){
		int n,count;
		scanf("%d \n",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<n-1;i++){
			count = 0;
			int ele = arr[i];
			for(int j=i ; j < n ; j++ ){
				if(ele > arr[j]){count ++;}
			}
			printf("%d ",count);
		}
		printf("%d ", 0);
	}
	return 0;
}