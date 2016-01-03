#include <stdio.h>
// brute force approach
int main(int argc, char const *argv[])
{
	int c,p,n;
	scanf("%d",&c);
	scanf("%d",&p);
	scanf("%d",&n);
	int i;
	int mat[10000][c];
	int x[p];
	int y[n];
	for(int i=0;i<p;i++) scanf("%d",&x[i]);
	for(int i=0;i<n;i++) scanf("%d",&y[i]);
	for(i=0;i<n;i++) { mat[1][i]=1;mat[2][i]=y[i];mat[0][i]=y[i];}
	// rest all 0
	for(;i<c;i++){mat[0][i]=0;mat[1][i]=0;mat[2][i]=0;}
	for(int i=0;i<p;i++){
		/////////////////////////
	int min=mat[0][0];
	int index=0;
	for(int i=0;i<c;i++) 
		if(min>mat[0][i]) {min=mat[0][i]; index=i;}
	   //////////////////////////
	printf("%d\n",index+1);
	int count=mat[1][index];
	mat[count+2][index]=x[i];
	mat[1][index]++;
	mat[0][index]=(mat[1][index]*x[i]);
	}
	return 0;
}