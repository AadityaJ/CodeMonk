//https://www.hackerearth.com/code-monk-c-stl/algorithm/the-monk-and-class-marks/
#include <iostream>
#include <map>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,marks;
	string name;
	multimap<int,string> mp; // marks serves as the key to sort here
	cin>>t;
	while(t--){
		cin>>name;
		cin>>marks;
		mp.insert(pair<int,string>(marks,name));
	}
	map <int,string>::reverse_iterator i;
	cout<<"==============================================================="<<endl;
	for(i=mp.rbegin();i!=mp.rend();++i) cout<<i->second<<" "<<i->first<<"\n";
	return 0;
}