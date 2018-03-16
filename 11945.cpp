#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b;
	
	cin>>a>>b;
	string s[a];
	for(int i=0;i<a;i++){
		cin>>s[i];
		reverse(s[i].begin(),s[i].end());
	}
	for(int i=0;i<a;i++){
		cout<<s[i]<<"\n";
	}

}