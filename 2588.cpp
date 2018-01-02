#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int c,d,e;
	c=b/100;
	d=(b-c*100)/10;
	e=(b-c*100-d*10);
	cout<<a*e<<"\n";
	cout<<a*d<<"\n";
	cout<<a*c<<"\n";
	cout<<a*b;


}