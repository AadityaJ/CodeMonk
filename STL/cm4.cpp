//https://www.hackerearth.com/code-monk-c-stl/algorithm/monk-and-the-magical-candy-bags/
#include <stdio.h>
#include <queue>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		long long int val;
		priority_queue<long long int> pq;
		scanf("%d",&n);
		scanf("%d",&k);
		long long int count=0;
		while(n--){
			scanf("%lld",&val);
			pq.push(val);
		}
		while(k--){
			long long int num=pq.top();
			count+=num;
			pq.pop();
			pq.push(num/2);
		}
		printf("%lld\n",count);
	}
	return 0;
}