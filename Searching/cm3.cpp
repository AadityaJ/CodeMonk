#include <stdio.h>
int min(int a[],int size){
	int m=0;
	for(int i=0;i<size;i++)
		if(m>a[i]) m=a[i];
	return m;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int s;
		scanf("%d",&s);
		int arr1[s],arr2[s];
		for(int i=0;i<s;i++) scanf("%d",&arr1[i]);
		for(int i=0;i<s;i++) scanf("%d",&arr2[i]);
		int goit[s];
		for(int i=1;i<s;i++){
			int j=i-1,k=(j/2);
			int ele[s],p=0;
			while(k && k<i){
				if(arr1[k]==arr2[i]){ele[p++]=k-i;k++;}
				else if (arr1[k]>arr2[i]){k+=(k/2);}
				else  {k-=(k/2);}
			}
			if(p){printf("%d\n",min(ele,p));}
		}
	}
	return 0;
}