#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main(){
	string a;

	while(1){
		char s[501];
		cin.getline(s,500);
		a=s;
		if(a=="END")
			break;
		reverse(a.begin(),a.end());
		cout<<a<<endl;;
	}
}