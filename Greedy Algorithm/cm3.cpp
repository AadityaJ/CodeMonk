//https://www.hackerearth.com/code-monk-greedy-technique/algorithm/the-legend-of-tanmay/
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
int prod(int arr[],int n){
	int pr=1;
	for(int i=0;i<n;i++){
		if(arr[i]) pr*=arr[i];
	}
	return pr;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a,num_nega=0,num_posi=0;
		int n;
		int arr[25];
		int min_nega,min_posi;
		int max_prod=1,min_prod=1;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a);
			arr[i]=a;
			if(a<0) num_nega++;
			if(a>0) num_posi++;
		}
		if(n==1){printf("%d %d\n",arr[0],arr[0]);continue;}
		if(!num_posi && !num_nega){printf("0 0\n"); continue;}
		//printf("%d\n",num_nega);
		std::sort(arr,arr+n);
		min_posi=arr[n-1];
		min_nega=arr[0];
		for(int i=0;i<n;i++){
			if((arr[i]>0)&&(min_posi>arr[i])) min_posi=arr[i];
			if((arr[i]<0)&&(min_nega<arr[i])) min_nega=arr[i];
		}
		if(!num_nega){
			//special case
			max_prod=prod(arr,n);
			min_prod=arr[0];
			printf("%d %d\n",max_prod,min_prod);
			continue;
		}
		if(!(num_posi)&&(num_nega==1)){
			max_prod=0;
			min_prod=arr[0];
			printf("%d %d\n",max_prod,min_prod);
			continue;
		}
		if(!(num_nega%2)){
			//even number of negative numbers
			max_prod=prod(arr,n);
			min_prod=prod(arr,n);
			min_prod/=min_nega;
			printf("%d %d\n",max_prod,min_prod);
			continue;
		}
		else {
			max_prod=prod(arr,n);
			max_prod/=min_nega;
			min_prod=prod(arr,n);
			printf("%d %d\n",max_prod,min_prod);
			continue;
		}
		/*
		int min_prod=1,max_prod=1;
		for(int i=0;i<n;i++){
			if(!(num_nega%2)){
				//even situation
				if(arr[i]) max_prod*=arr[i];
				if(!num_nega) min_prod
			}
		}*/
	}
	return 0;
}