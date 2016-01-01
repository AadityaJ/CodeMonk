//https://www.hackerearth.com/code-monk-sorting/algorithm/chandu-and-his-girlfriend-returns/#
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	//printf("\n");
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d",&n);
		scanf("%d",&m);
		int arr1[100],arr2[100];
		for(int i=0;i<n;i++)
			scanf("%d",&arr1[i]);
		for(int i=0;i<n;i++)
			scanf("%d",&arr2[i]);
		int ptr1=0,ptr2=0;
		int arr3[200];
		int k=0;
		// error in this while
		while((ptr1 < n) && (ptr2 < m)){
			if(arr1[ptr1]> arr2[ptr2]){ arr3[k++] = arr1[ptr1++] ;}
			else{ arr3[k++] = arr2[ptr2++] ;}
			//else {arr3[k++] = arr1[ptr1]; arr3[k++] = arr2[ptr2] ; ptr1++ ; ptr2++;}
		}
		while(ptr1 <n){arr3[k++]=arr1[ptr1++];} 
		while(ptr2 <m){arr3[k++]=arr2[ptr2++];}
		printf("\n");
		for(int i =0;i<k;i++)
			printf("%d ",arr3[i]);
		printf("\n");
	}
	return 0;
}