//https://www.hackerearth.com/code-monk-array-strings/algorithm/chandu-and-consecutive-letters/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	char s[10];
	scanf("%d",&t);
	while(t--){
		scanf("%s",s);
		int n=0,i=0;
		while(s[n]!='\0') n++;  //n=strlen(s)
		while(i!=n){
			if(s[i]==s[i+1]){
				printf("%c",s[i]);
				while(s[i]==s[i+1]) i++;
			}
			else printf("%c",s[i]); 
				i++;
		}
		printf("\n");
	}
	return 0;
}