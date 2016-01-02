//http://www.iecsemanipal.com/wcs/
#include <stdio.h>
#include <algorithm>
using namespace std;
long long int arr[100],s_arr[100];
bool isS(int n){
	for(int i=0;i<n;i++){
		if(arr[i]!=s_arr[i]) return 0;
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
		s_arr[i]=arr[i];
	}
	sort(s_arr,s_arr+n);
	//bool s=0;
	long long int a,b;
	int index,in2;
	if(isS(n)) {printf("yes\n"); return 0;}
	int flag=0;
	int sw[100];
	for(int i=0;i<n;i++){
		if(arr[i]!=s_arr[i]) {
			sw[flag++]=i;
		}
	}
	if(flag==2){
		printf("yes\n");
		printf("swap %d %d\n",sw[0]+1,sw[1]+1);
		return 0;
	}
	/*bool poss=0;
	bool f=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=s_arr[i]){
			int j=i;
			while(!f && j<n){
				if(arr[j]==s_arr[j]) f=1;
				j++;
			}
			if(!f)
		}
	}*/
	int i,s,e;
	for( s=0;s<n;s++){
		if(arr[s]!=s_arr[s]) break;
	}
	for( e=n-1;e>0;e--){
		if(arr[e]<arr[e-1]) break;
	}
	/*int max=arr[s],min=arr[s];
	for(i = s + 1; i <= e; i++)
  {
    if(arr[i] > max)
      max = arr[i];
    if(arr[i] < min)
      min = arr[i];
  }
  
  // step 2(b) of above algo
  	for( i = 0; i < s; i++)
  	{
    	if(arr[i] > min)
    	{  
      	s = i;
      	break;
    	}      
  	} 
  	for( i = n -1; i >= e+1; i--)
  	{
    	if(arr[i] < max)
    	{
      	e = i;
      	break;
    		} 
  	}*/ int ea=e+1;
  	reverse(arr+s,arr+ea);
  	if(isS(n)){
  		printf("yes\n");
  		printf("reverse %d %d \n",s+1,e+1);
  		return 0;
  	}  
  	printf("no\n");
	return 0;
}
