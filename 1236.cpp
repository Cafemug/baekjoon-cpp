#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
using namespace std;
int main(){
	char str[50][50],token[50][50];
	int num,j=0,x,temp=0,resx=0,resy=0,te=0;

	cin>>num>>x;
	
	cin.ignore();
	for(int i=0;i<num;i++){
		temp=0;
		for(int j=0;j<x;j++){
			cin>>str[i][j];
			token[j][i]=str[i][j];
			if(str[i][j]=='X'){
				temp=1;
				
			}
			
		}
		if(temp==0){
			resx++;
			

		}
		
		
	}
	for(int i=0;i<x;i++){
		te=0;
		for(int j=0;j<num;j++){
			
			if(token[i][j]=='X'){
				te=1;
			}
		
			

		}
		if(te==0){
			resy++;
			

		}
	}
	if(resx>=resy){
		cout<<resx;
	}
	else{
		cout<<resy;
	}
}