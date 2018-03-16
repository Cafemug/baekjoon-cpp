#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int jug(string st){
	int a=st.size(),t=0;
	for(int i=0;i<a;i++){
		if(st[i]!=st[a-i-1]){
			t=0;
			break;
		}
		else
			t=1;
	}
	return t;
}
int main(){
	int a,o,t,res;
	string s,k;
	cin>>a;
	while(a-->0){
		cin>>s;
		o=stoi(s);
		reverse(s.begin(),s.end());
		t=stoi(s);
		k=to_string(o+t);
		res=jug(k);
		if(res)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";
	}

}