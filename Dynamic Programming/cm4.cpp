//https://www.hackerearth.com/code-monk-dynamic-programming/algorithm/samu-and-special-coprime-numbers/
#include <stdio.h>
int gcd(int a,int b){
	if(a==0)return b;
	if(b==0)return a;
	else return gcd(b,a%b);
}
int count;
void todo(int a){
	int b=a;
	int digisum=0;
	int digisumsq=0;
	while(b){
		digisum+=(b%10);
		digisumsq+=((b%10)*(b%10));
		b/=10;
	} if(!digisum%2 && !digisumsq%2) return;
	if(gcd(digisum,digisumsq)==1) count++;
	//printf("%d %d :: %d\n",digisum,digisumsq,gcd(digisum,digisumsq));
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		count=0;
		int a,b;
		scanf("%d",&a);
		scanf("%d",&b);
		for(int i=a;i<=b;i++)
			todo(i);
		printf("%d\n",count);
	}
	return 0;
}