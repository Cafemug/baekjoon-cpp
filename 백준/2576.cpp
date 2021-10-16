#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,re=100,count=0,c=0;
	for(int i=1;i<8;i++){
		cin>>num;
		if(num%2!=0 && num<re){
			re=num;
			
		}
		if(num%2!=0){
			count+=num;
			c++;
		}
	}
	if(c==0){
		cout<<-1;
	}else{
	cout<<count<<endl<<re;
	}
}

