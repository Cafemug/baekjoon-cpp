#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	double res;
	int num,a,b,c,d,e;
	cin>>num;
	while(num-->0){
		cin>>a>>b>>c>>d>>e;
		res=a*350.34+b*230.90+c*190.55+d*125.30+e*180.90;
		printf("$%.2lf\n",res);
	}
}