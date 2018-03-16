#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v,c;
	vector<int>::iterator it=v.begin();
	int a,b,t;
	cin>>a;
	for(int i=1;i<=a;i++){
		v.push_back(i);
	}
	for(int i=1;i<a;i++){
		c.push_back(v[0]);
		v.erase(v.begin());
		b=v[0];
		v.erase(v.begin());
		v.push_back(b);
	}
	t=c.size();
	for(int i=0;i<a-1;i++){
		cout<<c[i]<<" ";
	}
	cout<<v[0];


}