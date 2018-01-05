#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,a,b,lens,temp=0,res;
	char s[20]={0,},tem[20]={0,};
	cin>>num;
	
	for(int i=0;i<num;i++){
		temp=0;
		cin>>a;
		for(int j=0;j<a;j++){
			cin>>b>>s;
			if(b>=temp){
				temp=b;
				strcpy(tem,s);
				lens=strlen(s);
			}
		}
		cout<<tem<<endl;
	}
}