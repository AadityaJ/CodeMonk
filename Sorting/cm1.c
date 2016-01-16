// using quicksort
#include <stdio.h>
int sq[100];
int partition(int a[],int low,int high){
	int pivot=a[low];
	int leftwall=low;
	for(int i=low+1;i<high;i++){
		if(a[i]<pivot){
			leftwall++;
			int temp=a[i];
			a[i]=a[leftwall];
			a[leftwall]=temp;
		}
	}
	int temp=a[low];
	a[low]=a[leftwall];
	a[leftwall]=temp;
	return (leftwall);
}
void quicksort(int a[],int low,int high){
	if(low<high){
		int pivot_location=partition(a,low,high);
		quicksort(a,low,pivot_location-1);
		quicksort(a,pivot_location+1,high);
	}
}
int main(int argc, char const *argv[])
{
	int t;
	int it;
	scanf("%d",&t);
	while(t --){
		scanf("%d",&it);
    for (int c = 0; c < it; c++)
       scanf("%d", &sq[c]);
	   quicksort(sq,0,it);
	for(int i = 0, j = it-1; i < it/2; i++, j--){
		int temp = sq[i];
		sq[i] = sq[j];
		sq[j] = temp;
	}
	for(int c=0;c<it;c++)
 	   printf("%d ",sq[c]);
 	printf("\n");
		//printf("%d\n",sq);
	}
	return 0;
}