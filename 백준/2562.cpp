#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,re=0,count=0;
	for(int i=1;i<10;i++){
		cin>>num;
		if(num>re){
			re=num;
			count=i;
		}
	}
	cout<<re<<endl<<count;
	
}

