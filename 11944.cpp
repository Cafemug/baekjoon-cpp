#include <iostream>
#include <sstream>
using namespace std;
int main(){
	string a;
	stringstream  c;
	int aa,b,n;
	cin>>aa>>b;
	c<<aa;
	a=c.str();
	if(aa<b){
		for(int i=0;i<aa;i++){
			cout<<a;
		}
	}
	else{
		for(int i=0;i<b;i++){
			cout<<a[i%a.size()];
		}
	}
	
}