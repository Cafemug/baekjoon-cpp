#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a;
	int arr[10];
	cin>>a;
	for(int i=0;i<a;i++){
		
		for(int j=0;j<10;j++){
			cin>>arr[j];
		}
		sort(arr,arr+10);
		cout<<arr[7]<<endl;
		
	}
}