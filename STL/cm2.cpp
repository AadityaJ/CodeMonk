//https://www.hackerearth.com/code-monk-c-stl/algorithm/monks-birthday-party/
#include <iostream>
#include <set>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,n;
	string name;
	cin>>t;
	while(t--){
		cin>>n;
		//will use maps since they allow for key-based sorting
		//and also they are super chill
		//ok no sets are more super chill
		set<string> s;
		while(n--){
			cin>>name;
			s.insert(name);
		}
		set <string>::iterator it;
		for(it=s.begin();it!=s.end();it++){
			cout<<(*it)<<"\n";
		}
	}
	return 0;
}