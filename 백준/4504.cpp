#include <iostream>
using namespace std;
int main(){
	int num,a=1;
	cin>>num;
	while(a!=0){
		cin>>a;
		if(a==0)
			break;
		if(a%num==0)
			cout<<a<<" is a multiple of "<<num<<"."<<endl;
		else
			cout<<a<<" is NOT a multiple of "<<num<<"."<<endl;
	}
}