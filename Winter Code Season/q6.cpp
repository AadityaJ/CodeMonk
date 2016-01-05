#include <stdio.h>
#include <stack>
using namespace std;
int ncr(int a,int b){
	stack <int> st;
	int prod=1;
	for(int i=1;i<=a;i++){
		st.push(i);
	}
	for(int i=1;i<=b;i++){
		prod*=st.top();
		st.pop();
	}
}
