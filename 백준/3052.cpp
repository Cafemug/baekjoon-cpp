#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int s[10],a,temp,count=0;
	for(int i=0;i<10;i++){
		cin>>a;
		s[i]=a%42;
	}
	sort(s,s+10);
	temp=s[0];
	for(int i=0;i<10;i++){
		if(s[i]!=temp){
			count++;
			temp=s[i];
		}
	}
	cout<<count+1;
}