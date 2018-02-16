#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,b,c,d,tx,ty;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	tx=a+b+c+d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	ty=a+b+c+d;
	if(tx>=ty)
		cout<<tx;
	else
		cout<<ty;
}