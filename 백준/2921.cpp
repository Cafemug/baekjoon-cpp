#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,a,b,res=0;
	cin>>num;
	for(int i=1;i<=num;i++){
		a=(i*(i+1))/2;
		b=i*(i+1);
		res=res+a+b;
	}
	cout<<res;
}