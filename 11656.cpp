#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	string a;
	vector<string> v;
	int num;
	cin>>a;
	num=a.size();
	
	for (int i=0;i<num;i++){
		v.push_back(a.substr(i,num));
	}
	sort(v.begin(),v.end());
	for (int i=0;i<num;i++){
		cout<<v[i]<<endl;
	}
}