#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int a[8],temp=0,te;
	for(int i=0;i<4;i++){
		cin>>a[2*i]>>a[2*i+1];
		if(i==0){
			te=a[2*i+1]-a[2*i];
		}
		else{
			te=te+a[2*i+1]-a[2*i];
		}
		if(te>=temp){
			temp=te;
		}
	}
	cout<<temp;


}