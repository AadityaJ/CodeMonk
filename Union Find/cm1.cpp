//https://www.hackerearth.com/code-monk-disjoint-set-union/algorithm/city-and-flood-1/
//learning :: all of the empires will have atleast one such kingdom where arr[i]=i
#include <stdio.h>
//using namespace std;
// a invades b
int arr[100002];
void init(int n){
	for(int i=1;i<=n;i++) 
		{arr[i]=i;
		 //size[i]=0;
		}
}
int root(int i){
	while(i!=arr[i])i=arr[i];
	return i;
}
void un(int a ,int b){
	int r_a=root(a);
	int r_b=root(b);
	arr[r_b]=r_a;	
}
int main(int argc, char const *argv[])
{
	int n,t,a,b;
	scanf("%d",&n);
	init(n);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&a);
		scanf("%d",&b);
		un(a,b);
	}
	int done[100001]={0};
	int count=0;
	for(int i=1;i<=n;i++){
		count+=(arr[i]==i);
	}
	printf("%d",count);
	return 0;
}
