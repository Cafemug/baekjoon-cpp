#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int num,a,q,d,n,p;
	cin>>num;
	while(num-->0){
		q=0;d=0;n=0;p=0;
		cin>>a;
		q=a/25;
		d=(a%25)/10;
		n=((a%25)%10)/5;
		p=((a%25)%10)%5;
		printf("%d %d %d %d\n",q,d,n,p);
	}
}