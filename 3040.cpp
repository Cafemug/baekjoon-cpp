#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int arr[9];
	int sum=0,flag=0,resi,resj;
	for(int i=0;i<9;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	sort(arr,arr+9);
	for(int i=0;i<9;i++){
		flag=0;
		for(int j=0;j<9;j++){
			if(i==j){
				continue;
			}
			if(sum-arr[i]-arr[j]==100){
				resi=i;
				resj=j;
				flag=1;
				break;
			}
		}
		if(flag){
			
			break;
		}
	}
	for(int i=0;i<9;i++){
		if(i!=resi && i!=resj){
		cout<<arr[i]<<endl;
	}
	}

}