#include <iostream>
using namespace std;
int sum=0;
int n,m;
char arr[20][20];
int move(int a,int b){
	if(arr[a][b]=='o'){cout<<"i = "<<a<<" j = "<<b<<endl;return 1;}
	if(arr[a][b]=='#'){return 0;}
	if(a!=0){   //go up
		move(a-1,b);
	}

	if(b!=0) move(a,b-1);
	if(a!=n-1){
		move(a+1,b);
	}
	if(b!=m-1) move(a,b+1);
	return 0;
}
int main(int argc, char const *argv[])
{
	cin>>n>>m; 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
			
		}
	} 
	int indexx,indexy;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			if(arr[i][j]=='*') {
				indexx=i;
				indexy=j;
				break;
			}
	}
	//cout<<indexx<<" "<<indexy;
	int j=move(indexx,indexy);
	return 0;
}
