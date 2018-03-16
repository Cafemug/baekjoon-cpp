#include <iostream>
using namespace std;
long long fibo(long long t){
	if(t<2)
		return 1;
	else if(t==2)
		return 2;
	else if(t==3)
		return 4;
	else {
		long long arr[t+1];
		arr[0] = 1;
		arr[1] = 1;
		arr[2] = 2;
		arr[3] = 4;
		for(int i = 4 ; i < t+1 ; i++){
			arr[i] = arr[i-1] + arr[i-2]+arr[i-3]+arr[i-4];
		}
		return arr[t];
	}

}
int main(){
	long long a,x,y;
	cin>>a;
	while(a-->0){
		cin>>y;
		x=fibo(y);
		cout<<x<<"\n";
	}
	
}