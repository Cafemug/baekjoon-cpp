#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a;
	while(a-->0){
		cin>>b>>c;
		if(b<=c)
			cout<<1<<"\n";
		else{
			if(b%c!=0)
				cout<<b/c+1<<"\n";
			else
				cout<<b/c<<"\n";

		}
	}
}