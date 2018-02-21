#include <iostream>
using namespace std;
int main(){
	string s;
	int num;
	cin>>num;
	while(num-->0){
		cin>>s;
		int k=s.size();
		k/=2;
		if(s[k-1]==s[k])
			cout<<"Do-it"<<"\n";
		else
			cout<<"Do-it-Not"<<"\n";
	}
}