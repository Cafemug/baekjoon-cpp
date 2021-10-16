#include <iostream>
#include <string>
using namespace std;
int main(){
	int a,b,c;
	string s;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>s;
		c=(int)s.size();
		for(int g=0;g<b-1;g++){
			cout<<s[g];
		}
		for(int g=b;g<c;g++){
			cout<<s[g];
		}
		cout<<endl;
	}
	

}