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
	for(int i=0;i<num;i++){
		if(i!=0){
		for(int j=i;j<num-1;j++){
			cout<<" ";
		}
		for(int k=0;k<=i*2;k++){
			cout<<"*";
			
		}
		cout<<endl;
	}
	}
	
}