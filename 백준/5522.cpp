#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int res=0,num;
	for(int i=0;i<5;i++){
		cin>>num;
		res+=num;
	}
	cout<<res;
}