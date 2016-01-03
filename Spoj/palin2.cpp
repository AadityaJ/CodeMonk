//http://www.spoj.com/problems/PALIN/
#include <iostream>
#include <string.h>
using namespace std;
bool ispalin(char *num,int len){
	for(int i=0;i<=(len)/2;i++){
		if(num[i]!=num[len-i-1]) return 0;
	}
	return 1;
}
char a[100002];
int main(){
	int t,i,j;
    scanf("%i",&t);
	cin>>t;
	while(t --){
		scanf("%s",a);
		int len=strlen(a);
		if(ispalin(a,len))
			{
				if(!(len & 1)){  // even scenario
					i =(len/2)-1;
					j =(len/2);
					if(a[i]!=9){
					a[i]+=1;
					a[j]+=1;
				} else {
					a[i]=a[j]=0;

				}
				}
				else {
					i=(len/2);
					a[i]+=1;
				}
			}
		else{
			if(len & 1){ // odd scenario
				i=len/2 -1;
				j=len/2 +1;
			}
			else{

			}
			int flag;
			while(i>0){
				if(a[i]-a[j]>0){
					flag=1;
					break;
				}
				else if(a[i]-a[j]<0){
					flag=2;
					break;
				}
				i--;
				j++;}
			if(len & 1) {
	                i = len/2 - 1;
	                j = len/2 + 1;
	            }

	            else {
	                i = len/2 - 1;
	                j = len/2;
	            }

	            if(flag == 1) {    /*  line 1*/
	                while(i >= 0) {
	                    a[j] = a[i];

	                    i--;
	                    j++;
	                }
	            }

	            else if(flag == 2 && len&1 && a[len/2] < '9'){    
	                a[len/2]++;

	                i = len/2 - 1;
	                j = len/2 + 1;

	                while(i >= 0) {
	                   a[j] = a[i];
	                   i--;
	                   j++;
	                }
	            }

	            else {                          

	                if( len & 1) {
	                    a[len/2] = '0';
	                }

	                while(i >= 0) {
	                    if(a[i] < '9') {
	                        a[i]++;
	                        a[j] = a[i];
	                        break;
	                    }

	                    else {
	                        a[i] = a[j] = '0';
	                    }
	                    i--;
	                    j++;
	                }

	                while(i >= 0) {
	                    a[j] = a[i];

	                    i--;
	                    j++;
	                }
	            }

		}
		cout<<a;}

}