#include <stdio.h>
#include <iostream>
using namespace std;
int flag=0;
int arr[100001],size[100001];
int n;
int r_a,r_b;
void init(int n){
	for(int i=1;i<=n;i++) 
		{arr[i]=i;
		size[i]=1;
		}
}
int root(int i){
	while(i!=arr[i])i=arr[i];
	return i;
}
//union should print max

void un(int a,int b){
	r_a=root(a);
	r_b=root(b);
	if(size[r_a]>size[r_b]){  // get b in a 
		arr[r_b]=r_a;
		size[r_a]+=size[r_b];
		flag=0;
	//	max=retmax();
	} else{
		arr[r_a]=r_b;
		size[r_b]+=size[r_a];
		flag=1;
	//	max=retmax();		
	}
	//retmax();
	//printf("%d\n",max);
	for(int i=1;i<=n;i++) 
		cout<<size[i]<<"  ";
		cout<<endl;
}
int main(int argc, char const *argv[])
{
	int n,t,max=0,min=1;
	scanf("%d",&n);
	init(n);
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d",&a);
		scanf("%d",&b);
		un(a,b);
		if(!flag){//flag=0
			if(max<size[r_a])max=size[r_a];
			if(min>size[r_b])min=size[r_b];
		}
		else {
			if(max<size[r_b])max=size[r_b];
			if(min>size[r_b])min=size[r_b];
		}
		if(min==1) cout<<"0 "<<endl;
		else cout<<max-min<<endl;
	}
	return 0;
}