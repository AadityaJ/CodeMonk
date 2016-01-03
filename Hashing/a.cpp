#include <iostream>
#include <bitset>
using namespace std;
int main(int argc, char const *argv[])
{
	int t=67;
	int count=0;
	while(t){
		if(t%2==1) count++;
		t/=2;
	}
	printf("%d\n",count);
	return 0;
}