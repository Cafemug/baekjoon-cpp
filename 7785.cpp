#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string n[1000000],e[1000000];
int a;
bool cm(string a,string b){
	return a>b;
}
void ser(string b){
	
	for(int i=0;i<a;i++){
		if(n[i]==b){
			n[i]=" ";
			break;
		}
	}
	
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>n[i]>>e[i];
		if(e[i]=="leave"){
			ser(n[i]);
			n[i]=" ";
		}	
	}
	sort(n,n+a,cm);
	for(int i=0;i<a;i++){
		if(n[i]!=" "){
			cout<<n[i]<<"\n";	
		}
		else
			break;
	}
}