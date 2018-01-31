#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int a,b,count=0;
	cin>>a;
	int s[100];
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
	cin>>b;
	for(int i=0;i<a;i++){
		if(s[i]==b){
			count++;
		}
	}
	cout<<count;
}