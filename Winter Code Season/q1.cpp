#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i=1;
	while(i!=-1){
		scanf("%d",&i);
		int num=i/9;
		if(i%9 || i==0) num++;
		if(i!=-1) printf("%d\n",num);
	}
	return 0;
}