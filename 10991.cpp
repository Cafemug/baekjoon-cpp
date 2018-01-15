#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,a;
	cin>>num;
	for(int j=1;j<=num;j++){
	for(int i=j;i<num;i++){
		cout<<" ";
		
	}
	for(int k=1;k<=j;k++){
		cout<<"*"<<" ";
	}
	cout<<endl;
	
}

}