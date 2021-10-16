#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g;cin>>a>>b>>c>>d>>e;
	f=b%d?b/d+1:b/d;
	g=c%e?c/e+1:c/e;
	a=f>g?a-f:a-g;
	cout<<a;
}