#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	while(1){
		cin>>a>>b>>c;
		if(a==0 && b==0 &&c==0) break;
		if(a==0 || b==0 || c==0){
			if(b-a==c-b){
			cout<<"AP"<<" "<<c+b-a<<"\n";
		}
		}
		else{
		if(b/a+b%a==c/b+c%a){
			cout<<"GP"<<" "<<c*b/a<<"\n";
		}
		else if(b-a==c-b){
			cout<<"AP"<<" "<<c+b-a<<"\n";
		}
	}
	}
}