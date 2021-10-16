#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,m,n,res=0,temp;
	int arr[501]={0,};
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>m>>n;
		res=0;
		
		for(int j=0;j<m;j++){
			cin>>arr[j];
		}
		sort(arr,arr+m);
		temp=arr[0];
		for(int x=1;x<m;x++){
			if(temp==arr[x]){
				res++;
			}
			else{
				temp=arr[x];
			}
		}
		arr[501]={0,};
		cout<<res<<endl;
	}
}