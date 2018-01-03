#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int num;
	cin>>num;
	if(num%100==0 && num%400!=0){
		cout<<0;
	}
	else if(num%4==0 || num%400==0){
		cout<<1;
	}
	else{
		cout<<0;
	}

}