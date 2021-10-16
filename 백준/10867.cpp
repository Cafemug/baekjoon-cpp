#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
using namespace std;
int main() {
	int a,b;
	set<int> v;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		if(v.find(b)==v.end()){
			v.insert(b);
		}
	}
	for(set<int>::iterator i= v.begin();i!=v.end();++i){
		printf("%d ",*i);
	}
}