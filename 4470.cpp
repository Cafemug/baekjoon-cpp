#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	string s;
	int a;
	cin>>a;
	cin.ignore();
	for(int i=1;i<=a;i++){
		getline(cin,s,'\n');
		printf("%d. ",i);
		cout<<s<<"\n";
	}
}