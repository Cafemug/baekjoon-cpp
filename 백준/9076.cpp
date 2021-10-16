#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a;
	int arr[5],sum=0,flag=1;
	cin>>a;
	for(int i=0;i<a;i++){
		sum=0;
		flag=1;
		for(int j=0;j<5;j++){
			cin>>arr[j];
		}
		sort(arr,arr+5);
		for(int k=1;k<4;k++){
			if(arr[3]-arr[1]>=4){
				cout<<"KIN"<<endl;
				flag=0;
				break;
			}
			else{
				sum+=arr[k];
			}
		}
		if(flag)
			cout<<sum<<endl;
	}
}