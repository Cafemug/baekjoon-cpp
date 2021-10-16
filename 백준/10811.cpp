#include <iostream>
#include <algorithm>
using namespace std;
int arr[100];
int main(){
	int a,b,c,d,e;
	cin>>a>>b;
	for(int i=0;i<a;i++){
		arr[i]=i+1;
	}

	while(b-->0){
		cin>>c>>d;
		reverse(arr+c-1,arr+d);
	}
	for(int i=0;i<a;i++){
		cout<<arr[i]<<" ";
	}
}