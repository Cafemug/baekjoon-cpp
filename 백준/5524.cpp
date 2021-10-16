#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int num;
	string a;
	cin>>num;
	while(num>0){
		cin>>a;
		transform(a.begin(),a.end(),a.begin(),::tolower);
		cout<<a<<endl;
		num--;
	}
}