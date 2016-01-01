#include <stdio.h>
#include <stack>
using namespace std;
int main(int argc, char const *argv[])
{
	stack <int> st;
	int t,n,cost;
	scanf("%d",&t);
	while(t-- !=0){
		scanf("%d",&n);
		if(n==1){
			if(st.size()){
				printf("%d\n", st.top());
				st.pop();
			}
		else printf("No Food\n");
		}
		else{
			scanf("%d",&cost);
			st.push(cost);
		}
	}
	return 0;
}