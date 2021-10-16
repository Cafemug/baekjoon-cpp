#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b,arr[10],sum,t,c;
	double rate;
	cin>>a;
	while(a-->0){
		cin>>b;
		sum=0;
		t=0;
		for(int i=0;i<b;i++){
			cin>>arr[i];
			sum+=arr[i];
			if(arr[i]>t){
				t=arr[i];
				c=i;
			}
		}
		sort(arr,arr+b);
		if(arr[b-1]==arr[b-2])
			cout<<"no winner"<<"\n";
		else{
			rate=(double)arr[b-1]/(double)sum*100;
			if(rate>50.0){
				cout<<"majority winner "<<c+1<<"\n";
			}
			else
				cout<<"minority winner "<<c+1<<"\n";
		}

	}
}