//http://www.iecsemanipal.com/wcs/
#include <stdio.h>
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
		long long int sum=0;
		for(int i=0;i<3;i++)
			if(arr[i]>0)
				sum+=arr[i];
			else sum+=(arr[i]*2);
		if(sum>=0) printf("Yes \n");
		else printf("No \n");
	}
	return 0;
}