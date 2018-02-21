#include <iostream>
using namespace std;
int arr[15000];
int main(){
	int num,tot,count=0;
	cin>>num>>tot;
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	for(int i=0;i<num;i++){
		for(int j=i+1;j<num;j++){
			if(arr[i]+arr[j]==tot)
				count++;
		
		}
	}
	cout<<count;
}