#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	string a,b;
	int p,t;
	while(1){
		t=0;
		getline(cin,a,'\n');
		if(a=="*")
			break;
		if(a.size()<26){
			cout<<"N"<<'\n';
			continue;
		}
		for(int i=97;i<123;i++){
			b=i;
			p=a.find(b);
			if(p==-1){
				cout<<"N"<<'\n';
				t=1;
				break;
			}
		}
		if(t==0)
			cout<<"Y"<<'\n';
	}
}