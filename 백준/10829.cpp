#include <iostream>
#include <algorithm>
using namespace std;
int arr[100],count1=0;
void bin(long long a){
	if(a==1)
		arr[count1]=a;
	else{
		arr[count1]=a%2;
		count1++;
		bin(a/2);
	}
}
int main(){
	long long a;
	cin>>a;
	bin(a);
	reverse(arr,arr+count1+1);
	for(int i=0;i<=count1;i++){
		cout<<arr[i];
	}
}