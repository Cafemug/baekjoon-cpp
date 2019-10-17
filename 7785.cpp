#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	map<string, int,greater<string> > m;
	map<string, int,greater<string> >::iterator it;
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		string a,b;
		cin>>a>>b;
		if(b=="enter"){
			m[a]=1;
		}
		else{
			m.erase(a);
		}
	}

	for(it = m.begin();it!=m.end();it++){
		cout<<(*it).first<<"\n";
	}

}