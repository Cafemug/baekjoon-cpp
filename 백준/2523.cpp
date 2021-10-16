#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num;
	cin>>num;
	for(int k=0;k<num;k++){
	
	for(int j=k;j>=0;j--){
		cout<<"*";
	}
	cout<<endl;
	}
	for(int k=0;k<num-1;k++){
		
		for(int s=k;s<num-1;s++){
			cout<<"*";
		}
		cout<<endl;
	}

}
