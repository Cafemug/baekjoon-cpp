#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
	int num[10],tot=0,temp,tempc=0,count=0,res;
	for(int i=0;i<10;i++){
		cin>>num[i];
		tot+=num[i];
	}
	sort(num,num+10);
	temp=num[0];
	for(int i=0;i<10;i++){
		if(num[i]==temp){
			tempc++;
		}
		else{
			temp=num[i];
			if(tempc>=count){
				count=tempc;

				res=num[i-1];
			}
			tempc=0;
		}
	}
	cout<<tot/10<<endl<<res;
}