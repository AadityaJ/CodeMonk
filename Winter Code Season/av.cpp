#include <stdio.h>
/*
	[  1   0    0    ]
	[  0   0    0    ]
	[  0   0    1	 ]
*/
int numberofPaths(int a,int b){
	if(a==1 || b==1) return 1;
	return numberofPaths(a-1,b)+numberofPaths(a,b-1);
}
int main(int argc, char const *argv[])
{
	printf("%d\n",numberofPaths(20,20));
	return 0;
}
