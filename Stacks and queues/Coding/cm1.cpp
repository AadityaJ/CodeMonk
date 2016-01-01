//https://www.hackerearth.com/code-monk-stacks-queues/algorithm/monk-and-power-of-time/
#include <queue>
#include <stdio.h>
using namespace std;
queue <int> s;
queue <int> s1;

int main(int argc, char const *argv[])
{	int ele,a;
	scanf("%d",&ele);
	for(int i=0;i<ele;i++){
		scanf("%d",&a);
		s.push(a);
	}
	for(int i=0;i<ele;i++){
		scanf("%d",&a);
		s1.push(a);
	}
	int count=0;
	while(s.size()){
		count++;
		if(s.front()==s1.front()){
			s.pop();
			s1.pop();
		}
		else {
			s.push(s.front());
			s.pop();
		}
	}
	printf("%d\n",count);
	return 0;
}