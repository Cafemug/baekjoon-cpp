#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,a,b;
	cin>>num;
	for(int i=num;i>0;i--){
		for(int j=num;j>i;j--){
			cout<<" ";
		}
		for(int k=1;k<i*2;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
}