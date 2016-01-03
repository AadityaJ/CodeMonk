//https://www.hackerearth.com/code-monk-hashing/algorithm/monk-and-the-collision/
#include <stdio.h>
#include <vector>
using namespace std;
vector<int> hashTable[101];
void init(int n){
	for(int i=0;i<=n;i++){
		hashTable[i].clear();
	}
}
int hashFunc(int n){
	return n%10;
}
void insert(int n){
	int index=hashFunc(n);
	hashTable[index].push_back(n);
}
int count(int n){
	int c=0;
	for(int i=0;i<=n;i++){
		if(hashTable[i].size()>=2) c++;
	}
	return c;
}
//cleaned the vectors to be used for each test cases. will use v.size() since it gives O(1)
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,x,a;
		int counter=0;
		scanf("%d",&n);
		x=n;
		init(n);
		while(n--){
			scanf("%d",&a);
			insert(a);
		}
		printf("%d\n",count(x));
	}
	return 0;
}