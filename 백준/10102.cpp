#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int a=0,resA=0,resB=0;
	cin>>a;
	char* arr=new char(a);
	for(int i=0;i<a;i++){
		cin>>arr[i];
		if(arr[i]=='A'){
			resA++;
		}
		else{
			resB++;
		}
	}
	if(resA>resB){
		cout<<"A";
	}
	else if(resA<resB){
		cout<<"B";
	}
	else{
		cout<<"Tie";
	}
}