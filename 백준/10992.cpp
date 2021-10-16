#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int j=a;j>i;j--){
			cout<<" ";
		}
		if(i==1){
			cout<<"*"<<endl;
		}
		else if(i==a){
			for(int k=0;k<(2*a-1);k++){
				cout<<"*";
			}
			cout<<endl;
		}
		else{
			for(int k=0;k<(2*i-1);k++){
				if(k==0 || k==2*i-2){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
			cout<<endl;
		}
		
	}

}