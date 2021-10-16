#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v,c;
	int a,b,t;
	cin>>a;
	for(int i=1;i<=a;i++){
		v.push_back(i);
	}
	for(int i=1;i<a;i++){
		v.erase(v.begin());
		b=v[0];
		v.erase(v.begin());
		v.push_back(b);
	}
	cout<<v[0];
}