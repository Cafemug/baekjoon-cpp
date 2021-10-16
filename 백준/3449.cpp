#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int num,a,count;
	string s,t;
	cin>>num;
	while(num-->0){
		count=0;
		cin>>s>>t;
		a=s.size();
		for(int i=0;i<a;i++){
			if(s[i]!=t[i])
				count++;
		}
		printf("Hamming distance is %d.\n",count);
	}
}