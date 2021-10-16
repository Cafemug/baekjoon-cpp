#include <iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main(){
	long long num,a,b,c;
	cin>>num;
	while(num-->0){
		cin>>a>>b;
		c= a>b ? gcd(a,b):gcd(b,a);
		cout<<(a*b/c+a*b%c)<<"\n";
	}
}