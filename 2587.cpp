#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int a[5],res=0;
	for(int i=0;i<5;i++){
		cin>>a[i];
		res+=a[i];
	}
	sort(a,a+5);
	cout<<res/5<<endl<<a[2];
}