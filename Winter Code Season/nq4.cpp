//http://www.iecsemanipal.com/wcs/
#include <stdio.h>
#include <algorithm>
using namespace std;
bool iszero(long long int arr[]){
	for(int i=0;i<3;i++) 
		if(arr[i]<0)
			return 0;
		return 1;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long int b,w,s;
		long long int eb,ew,es;
		scanf("%lld %lld %lld",&b,&w,&s);
		scanf("%lld %lld %lld",&eb,&ew,&es);
		long long int arr[3];
		arr[0]=b-eb;
		arr[1]=w-ew;
		arr[2]=s-es;
		if(iszero(arr)) {printf("Yes\n"); continue;}
		sort(arr,arr+3);
		for(int i=0;i<10000000;i++){
			arr[2]-=2;
			arr[0]+=1;
			if(iszero(arr)) break;
			sort(arr,arr+3);
		}
		if(iszero(arr)) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}