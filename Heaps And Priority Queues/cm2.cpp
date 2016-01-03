//https://www.hackerearth.com/code-monk-heaps-and-priority-queues/algorithm/monk-and-some-queries/
//extreme brute force . MAJOR NHP ASSUMED
#include <stdio.h>
int size=0;
int arr[1000];
int max(){
	int max=arr[0];
	for(int i=0;i<size;i++)
		if(max<arr[i]) max=arr[i];
	return max;
}
int min(){
	int min=arr[0];
	for(int i=0;i<size;i++)
		if(min>arr[i]) min=arr[i];
	return min;
}
void del(int ele){
	int index=-1;
	for(int i=0;i<size;i++)
		if(arr[i]==ele) index=i;
	if(index==-1) printf("%d\n",-1);
	size--;
	for(int i=index;i<size;i++)
		arr[i]=arr[i+1];
}
int main(int argc, char const *argv[])
{
	long long t;
	scanf("%d",&t);
	while(t--){
		int choice,num,mx,mn;
		scanf("%d",&choice);
		switch(choice){
			case 1: scanf("%d",&num);
					arr[size++]=num;
					break;
			case 2: scanf("%d",&num);
					del(num);
					break;
			case 3: mx=max();
					printf("%d\n",mx);
					break;
			case 4: mn=min();
					printf("%d\n",mn);
					break;
		}
	}
	return 0;
}