#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,a,b;
	int res=0;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>a>>b;
		res+=(b%a);
	}
	cout<<res<<endl;
}