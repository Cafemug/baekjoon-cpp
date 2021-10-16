#include <iostream>
using namespace std;
int main(){
	int a,b,i;
	cin>>a;
	while(a-->0){
		cin>>b;
		for(i=0;i<b;i++){
			if(i*i+i>b)
				break;
		}
		cout<<i-1<<"\n";
	}
}