#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,res;
	cin>>a;
	while(a-->0){
		cin>>b>>c;
		res=0;
		while(b-->0){
			cin>>d;
			res+=d/c;

		}
		cout<<res<<"\n";
	}
}