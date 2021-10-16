#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,a,b;
	cin>>num;
	while(num>0){
		cin>>a>>b;
		cout<<"You get "<<a/b<<" piece(s) and your dad gets "<<a%b<<" piece(s)."<<endl;
		num--;
	}
	
}