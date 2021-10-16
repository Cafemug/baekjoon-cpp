#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	char name[100];
	int lens,a,b,res=1;
	cin>>name;
	lens=strlen(name);
	if(lens%2==0){
		a=lens/2;
		for(int i=0;i<a;i++){
			if(name[i]!=name[lens-i-1]){
				res=0;
				break;
			}
		}
	}
	else{
		a=lens/2;
		for(int i=0;i<a;i++){
			if(name[i]!=name[lens-i-1]){
				res=0;
				break;
			}
		}
	}

	cout<<res;

}