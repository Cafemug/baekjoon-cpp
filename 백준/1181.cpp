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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int a;
	vector<string> v;
	string s;
	cin>>a;
	vector<string>::iterator tt;
	for(int i=0;i<a;i++){
		cin>>s;
		v.push_back(s);

	}
	sort(v.begin(),v.end(),compare);
	a=v.size();
    cout<<v[0]<<"\n";
	for(int i=1;i<a;i++){
        if(v[i]!=v[i-1])
		    cout<<v[i]<<"\n";

	}
}