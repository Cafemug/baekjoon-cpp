#include <iostream>
using namespace std;
int arr[100]={0,};
int main(){
	int a,b,c,d,e;
	cin>>a>>b;
	while(b-->0){
		cin>>c>>d>>e;
		for(int i=c-1;i<d;i++){
			arr[i]=e;
		}
	}
	for(int i=0;i<a;i++){
		cout<<arr[i]<<" ";
	}
}