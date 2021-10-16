#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,a,b,res=0;
	cin>>num;
	for(int i=0;i<num;i++){
		res=0;
		cin>>a;
		for(int j=0;j<a;j++){
			cin>>b;
			res+=b;
		}
		cout<<res<<endl;
	}
}

