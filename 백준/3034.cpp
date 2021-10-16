#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a,b,c,f,e,g;
	int d;
	cin>>a>>b>>c;
	e=pow(b,2)+pow(c,2);
	f=sqrt(e);
	g=b<c ? b:c;
	while(a-->0){
		cin>>d;
		if(d<=f)
			cout<<"DA"<<"\n";
		else
			cout<<"NE"<<"\n";
	}

}