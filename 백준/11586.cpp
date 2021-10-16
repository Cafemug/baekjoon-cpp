#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,t;
	cin>>a;
	string s[a];
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
	cin>>t;
	switch(t){
		case 1:
			for(int i=0;i<a;i++){
				cout<<s[i]<<"\n";
			}
			break;
		case 2:
			for(int i=0;i<a;i++){
				reverse(s[i].begin(),s[i].end());
				cout<<s[i]<<"\n";
			}
			break;
		case 3:
			for(int i=a-1;i>-1;i--){
				cout<<s[i]<<"\n";
			}
			break;
	}
}