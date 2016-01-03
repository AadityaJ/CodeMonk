//https://www.hackerearth.com/code-monk-heaps-and-priority-queues/algorithm/monk-and-champions-league/
#include <stdio.h>
#include <queue>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,x,m;
	priority_queue <int> heap;
	scanf("%d",&m);
	scanf("%d",&n);
	for(int i=1;i<=m;i++){
		scanf("%d",&x);
		heap.push(x);
	}
	int sum=0;
	for(int i=0;i<n;i++){
		int num=heap.top();
		sum+=num;
		num --;
		heap.pop();
		heap.push(num);
	}
	printf("%d\n",sum);
	return 0;
}