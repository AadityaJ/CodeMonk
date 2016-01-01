//https://www.hackerearth.com/code-monk-number-theory-i/algorithm/the-confused-monk/
#include <iostream>
using namespace std;
//euclid's approach
int gcd(int x,int y){
	if(y==0) return x;
	if(x==0) return y;
	else return gcd(y,x%y);
}
long modpowIter(int a, int b, long c) {
        long ans=1;
        while(b != 0) {
                if(b%2 == 1)
                        ans=(ans*a)%c;

                a=(a*a)%c;
                b /= 2;
        }
        return ans;
}
int main(int argc, char const *argv[])
{	long val=1000000007;
	int num;
	int t;
	int prod=1;
	cin>>t;
	int arr;
	for(int i=0;i<t;i++){
		cin>>arr;
		if(!i){num=arr;}
		else num=gcd(arr,num);
		prod*=arr;
	} 
	long ans=modpowIter(prod,num,val);
	cout<<ans;
	return 0;
}