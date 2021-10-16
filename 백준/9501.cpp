#include <iostream>
using namespace std;
int main(){
	int a,b,count;
	double c,d,e,f;
	cin>>a;
	while(a-->0){
		count=0;
		cin>>b>>c;
		while(b-->0){
			cin>>d>>e>>f;
			if(e/f*d>=c)
				count++;
		}
		cout<<count<<"\n";
	}
}