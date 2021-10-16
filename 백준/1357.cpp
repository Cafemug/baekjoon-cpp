#include <iostream>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;
int Rev(string x){
	int res=0,n=x.size(),temp;
	reverse(x.begin(),x.end());
	for(int i=0;i<x.size();i++){
		temp=x[i];
		res+=(temp-48)*ceil(pow((double)10,(double)x.size()-1-i));
		
	}
	return res;
}
string Re(int x){
	stringstream ss;
	ss<<x;
	return ss.str();
}

int main() {
	string a,b,c;

	cin>>a>>b;
	c=Re(Rev(a)+Rev(b));
	cout<<Rev(c);
}