#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	cin.ignore();
	for(int i=0;i<a;i++){
		char s[51];
		int e;
		string t;
		cin.getline(s,50);
		e=s[0];
		if(e<=122 && e>=97){
			e-=32;
		}
		s[0]=e;
		t=s;
		cout<<t<<endl;
	}

}