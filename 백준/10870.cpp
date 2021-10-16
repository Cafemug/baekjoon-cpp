#include <iostream>
using namespace std;
int fibo(int s){
	if(s==0){
		return 0;
	}
	else if(s==1){
		return 1;
	}
	else{
		return fibo(s-1)+fibo(s-2);
	}
}
int main(){
	int a;
	cin>>a;
	cout<<fibo(a);
}