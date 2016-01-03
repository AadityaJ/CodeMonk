//https://www.codechef.com/ZCOPRAC/problems/ZCO14003
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	std::vector<int> v;
	int t;
	scanf("%d",&t);
	int i=t;
	int sum=0;
	while(i--){
		int num;
		scanf("%d",&num);
		v.push_back(num);
	}
	sort(v.begin(),v.end());
	int max=v.at(t-1);
	if(max*)
	for(int i=t-2;i>=0;i--){
		if((max*(t-i-1))>=(v.at(i)*(t-i)))
			break;
	}
	printf("%d\n",max);
	/* code */
	return 0;
}