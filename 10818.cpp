#include <iostream>
#include <string>
using namespace std;
int main(){
	int a,b,te=-1000000,temp=1000000;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		if(b>te){
			te=b;
		}
		if(b<temp){
			temp=b;
		}
	}
	cout<<temp<<" "<<te;
}