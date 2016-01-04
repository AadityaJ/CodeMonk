#include <iostream>
using namespace std;
char arr[2][2];
int a,b;
int main(int argc, char const *argv[])
{
	cin>>a>>b;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}