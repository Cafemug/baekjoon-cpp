#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,b,c,d,e,count=0;
	while(1){
		++count;
		cin>>a;
		if(a==0) break;
		b=a*3;
		if(b%2==0){
			c=b/2;
			d=c*3;
			e=d/9;
			printf("%d. even %d\n",count,e);
		}
		else{
			c=(b+1)/2;
			d=c*3;
			e=d/9;
			printf("%d. odd %d\n",count,e);
		}
	}
}