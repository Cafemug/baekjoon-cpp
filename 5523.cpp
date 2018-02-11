#include <iostream>
using namespace std;
int main() {
	int num,a,b,ai=0,bi=0;
	cin>>num;
	while(num>0){
		cin>>a>>b;
		if(a>b)
			ai++;
		else if(a<b)
			bi++;
		num--;
	}
	cout<<ai<<" "<<bi;
}