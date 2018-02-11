#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string a;
	int te;
	cin>>a;
	for(int i=0;i<a.size();i++){
		te=a[i];
		te-=3;
		if(te<65){
			te+=26;
		}
		a[i]=te;
	}
	cout<<a;
}