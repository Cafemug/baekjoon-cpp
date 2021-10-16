#include <iostream>
using namespace std;
int main(){
	string s,t,k;
	int a,b,c=0;
	cin>>t;
	cin>>a;
	while(a-->0){
		cin>>s;
		k=s+s;
		b=k.find(t);
		if(b!=string::npos)
			c++;
	}
	cout<<c;
}