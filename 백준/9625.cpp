#include <iostream>
using namespace std;
int fibo(int t){
	if(t==0)
		return 0;
	else if(t==1)
		return 1;
	else {
		int arr[t+1];
		arr[0] = 0;
		arr[1] = 1;
		for(int i = 2 ; i < t+1 ; i++){
			arr[i] = arr[i-1] + arr[i-2];
		}
		return arr[t];
	}

}
int main(){
	int a,x,y;
	cin>>a;
	x=fibo(a-1);
	y=fibo(a);
	cout<<x<<" "<<y;
}