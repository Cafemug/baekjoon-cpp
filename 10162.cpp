#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	int num;
	cin>>num;
	a=num/300;
	b=(num%300)/60;
	c=(num%300)%60/10;
	if((a*300+b*60+c*10)!=num){
		cout<<-1;
	}
	else{
		cout<<a<<" "<<b<<" "<<c;
	}
}