//https://www.hackerearth.com/code-monk-hashing/algorithm/monk-in-the-land-of-pokemons/
//lets try hashing later will use set
#include <stdio.h>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,count=0;
		std::vector<int> table[100001];
		scanf("%d",&n);
		long int a,b;
		while(n--){
			scanf("%ld",&a);
			scanf("%ld",&b);
			table[a].push_back(1);
			if(!table[b].size()) count++;
			else table[b].pop_back();
		}
		printf("%d\n",count);
	}
	return 0;
}