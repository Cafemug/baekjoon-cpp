#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a=4,b,sum=0;
	while(a-->0){
		cin>>b;
		sum+=b;

	}
	printf("%d\n%d",sum/60,sum%60);
}