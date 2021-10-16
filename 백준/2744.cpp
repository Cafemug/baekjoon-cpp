#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	string a;
	int x;
	cin>>a;
	for(int i=0;i<a.size();i++){
		x=a[i];
		if(x>=97 && x<=122){
			x-=32;
		}
		else{
			x+=32;
		}
		a[i]=x;
	}
	cout<<a;
}