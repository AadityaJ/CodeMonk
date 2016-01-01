//https://www.hackerearth.com/code-monk-disjoint-set-union/algorithm/city-and-soldiers/
#include <stdio.h>
int arr[100001];
void init(int n){
	for(int i=1;i<=n;i++) 
		{arr[i]=i;
		}
}
int getleader(int i){
	while(i!=arr[i]){
		arr[i]=arr[arr[i]];
		i=arr[i];
	}
	return i;
}
//union should follow order and 
void un(int a,int b){
	int led_a=getleader(a);
	int led_b=getleader(b);
	// b is the leader now
	arr[led_a]=led_b;
}
void mkleader(int a){
	// make a the leader of his group
	int led=getleader(a);
	arr[a]=a;
	arr[led]=a;
}
int main(int argc, char const *argv[])
{
	int n,t,choice,a,b,res;
	scanf("%d",&n);
	init(n);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&choice);
		switch(choice){
			case 1: // union of a and b
					scanf("%d",&a);
					scanf("%d",&b);
					un(a,b);
					break;
			case 2: scanf("%d",&a);
					mkleader(a);
					break;
			case 3: scanf("%d",&a);
					res=getleader(a);
					printf("%d\n",res);
		}
	}
	return 0;
}