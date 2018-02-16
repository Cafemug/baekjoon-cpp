#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int a,b;
	
	string s;

	scanf("%d",&a);
	vector<int>::iterator tt;
	while(a>0){
		cin>>s;
		int k=s.size();
		vector<int> v;
		for(int i=0;i<k;i++){
			b=s[i];
			tt=find(v.begin(),v.end(),b-48);
			if(tt!=v.end())
				v.erase(tt);
			v.push_back(b-48);
		}
		a--;
		printf("%d\n",v.size());
	}
}