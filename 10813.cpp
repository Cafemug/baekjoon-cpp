#include <iostream>
using namespace std;
int arr[100];
int main(){
	int a,b,c,d,temp;
	cin>>a>>b;
	for(int i=0;i<a;i++){
		arr[i]=i+1;
	}
	for(int i=0;i<b;i++){
		cin>>c>>d;
		temp=arr[c-1];
		arr[c-1]=arr[d-1];
		arr[d-1]=temp;
	}
	for(int i=0;i<a;i++){
		cout<<arr[i]<<" ";
	}
}