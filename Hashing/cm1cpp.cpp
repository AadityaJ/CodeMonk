#include <stdio.h>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,val;
		int count=0;
		vector<bool> v(10,false);
		scanf("%d",&n);
		while(n--){
			scanf("%d",&val);
			val%=10;
			if(v[val]) count++;
			else v[val]=true;
		}
		printf("%d\n",count);
	}
	return 0;
}