#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(b-45<0){
		if(a-1>=0){
		cout<<a-1<<" "<<b-45+60;
	}
	else{
		cout<<a+23<<" "<<b-45+60;
	}
	}
	else{

		cout<<a<<" "<<b-45;
	
		
	}
}