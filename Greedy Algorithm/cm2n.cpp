//https://www.hackerearth.com/code-monk-greedy-technique/algorithm/arjit-and-apex/
#include <iostream>
#include <map>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		std::multimap<int,int> vect;
		std::multimap<int,int>::iterator it;
		int g=0,h=0;
		int ge,he,m,n,u,v;
		it=vect.begin();
		cin>>m>>n;
		for(int i=0;i<m;i++){
			cin>>u>>v;
			it=vect.insert(it,make_pair(u,v));
		}
		//now the bad part.forgive me Torvalds :(
		for(int i=0;i<n;i++){
			cin>>u>>v;
			if((it=vect.find(u))!=vect.end()){
				g++;
				while((*it).first==u){
					if((*it).second==v){
						h++;vect.erase(it);break;
					} it++;
				}
			}
		}
		//cout<<"*****************"<<g<<"  "<<h<<endl;
		cin>>ge>>he;
		if(ge<=g && he<=h) cout<<"Great \n";
		else if(ge<=g) cout<<"Good \n";
		else cout<<":( \n";
	}
	return 0;
}