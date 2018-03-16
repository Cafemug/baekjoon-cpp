#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int j=a;j>i;j--){
			cout<<" ";
		}
		cout<<"*";
		for(int k=1;k<(i-1)*2;k++){
			cout<<" ";
			if(k==(i-1)*2-1)
				cout<<"*";
		}
		cout<<"\n";
		
	}
}