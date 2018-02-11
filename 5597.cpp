#include <iostream>
#include <set>
using namespace std;
int main(){
	set<int> s;
	int a;
	for(int i=0;i<28;i++){
		cin>>a;
		s.insert(a);
	}
	for(int i=1;i<31;i++){
		if(s.find(i)==s.end()){
			cout<<i<<endl;
		}
	}
}