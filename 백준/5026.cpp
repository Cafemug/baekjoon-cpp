#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int a,b,n,t;
	string s;
	cin>>n;
	while(n-->0){
		cin>>s;
		if(s=="P=NP"){
			cout<<"skipped"<<"\n";
			
		}
		else{
			t=s.find('+');
			a=atoi(s.c_str());
			b=atoi(s.c_str()+t);
			cout<<a+b<<"\n";
		}
	}
}