#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int a,t,count=0;
	cin>>a;
	vector<int> v;
	vector<int>::iterator tt;
	for(int i=0;i<a;i++){
		cin>>t;
		tt=find(v.begin(),v.end(),t);
		if(tt==v.end()){
			v.push_back(t);
		}
		else{
			count++;
		}
	}
	cout<<count;
}