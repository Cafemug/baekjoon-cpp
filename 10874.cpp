#include <iostream>
using namespace std;
int main(){
	string t="1 2 3 4 5 1 2 3 4 5",a;
	int r,count=1;
	cin>>r;
	cin.ignore();
	while(r-->0){
		getline(cin,a,'\n');
		if(a==t)
			cout<<count<<"\n";
		count++;
	}
}