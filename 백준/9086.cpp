#include <iostream>
using namespace std;
int main(){
	int a;
	string s;
	cin>>a;
	while(a>0){
		cin>>s;
		if(s.size()>1){
			cout<<s[0]<<s[s.size()-1]<<endl;
		}
		else{
			cout<<s[0]<<s[0]<<endl;
		}
		a--;

	}
}