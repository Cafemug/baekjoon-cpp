#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(string a,string b){
	if (a.length() == b.length())
		return a<b;
	else
		return a.length() < b.length();
}
int main(){
	int a;
	vector<string> v;
	string s;
	cin>>a;
	vector<string>::iterator tt;
	for(int i=0;i<a;i++){
		cin>>s;
		tt=find(v.begin(),v.end(),s);
		if(tt!=v.end())
			v.erase(tt);
		v.push_back(s);

	}
	sort(v.begin(),v.end(),compare);
	a=v.size();
	for(int i=0;i<a;i++){
		cout<<v[i]<<endl;

	}
}