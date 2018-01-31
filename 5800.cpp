#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n,a,e,res=0;
	cin>>n;
	for(int i=0;i<n;i++){
		vector<int> v;
		cin>>a;
		res=0;
		for(int k=0;k<a;k++){
			cin>>e;
			v.push_back(e);
		}
		sort(v.begin(),v.end(),greater<int>());
		for(int x=0;x<a-1;x++){
			if(v[x]-v[x+1]>res){
				res=v[x]-v[x+1];
			}
		}
		cout<<"Class "<<i+1<<endl;
		cout<<"Max "<<v[0]<<", "<<"Min "<<v[a-1]<<", "<<"Largest gap "<<res<<endl;
	}
}