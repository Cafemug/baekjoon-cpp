#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,a;
	cin>>num;
	for(int j=1;j<=num;j++){
	for(int i=0;i<num;i++){
		if(j%2!=0){
			cout<<"*"<<" ";
		}
		else{
			cout<<" "<<"*";
		}
	}
	cout<<endl;
	
}

}