//https://www.hackerearth.com/code-monk-greedy-technique/algorithm/arjit-and-printing-press/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string r,w;
		cin>>w>>r;
		int count=0;          // will serve as the flag
		sort(r.begin(),r.end());
		for(int i=0;i<w.length();i++){
			if(w[i]>r[count]){
				w[i]=r[count++];
			}
			if(count==r.length()) break;
		}
		cout<<w<<"\n";
	}
	return 0;
}