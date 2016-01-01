//https://www.hackerearth.com/code-monk-c-stl/algorithm/monk-and-his-friends/
#include <stdio.h>
long long int a[10000];
int i=0;
void isIn(long long int arr[],long long int val){
	int res=0;
	for(int j=0;j<i;j++){
		if(val==arr[j]) {res=1;break;}
	}
	if(!res){printf("NO\n");arr[i++]=val;}
	else printf("YES\n");
}
int main(int argc, char const *argv[])
{
	int t,n,m;
	long long int val;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		scanf("%d",&m);
		for(int j=0;j<n;j++){
			scanf("%lld",&a[i++]);
		}
		for(int j=0;j<m;j++){
			scanf("%lld",&val);
			isIn(a,val);
		}
		i=0;
	}
	return 0;
}