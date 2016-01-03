//https://www.hackerearth.com/code-monk-hashing/algorithm/monk-and-tasks/
#include <stdio.h>
long long int hash_tab[61];  // 2^59>10^19 . SERIOUSLY 
void init(){
	for(int i=0;i<=61;i++)
		hash_tab[i]=0;
}
int hashfun(long long int ele){
	int index=0;
	while(ele){
		if(ele%2==0) index++;
		ele/=2;
	}
	return index;
}
void add(long long int ele){
	int index=hashfun(ele);
	while(hash_tab[index]!=0)
		index=(index+1)%61;
	hash_tab[index]=ele;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i;
		long long int val;
		scanf("%d",&n);
		init();
		i=n;
		while(n--){
			scanf("%lld",&val);
			add(val);
		}
		for(int j=0;j<i;j++) printf("%lld ",hash_tab[j]);
	}
	return 0;
}