#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,a,res,re=0,count=0;
	cin>>num>>a;
	for(int j=1;j<=num;j++){
		if(num%j==0){
			count++;
			if(count==a){
				res=j;
				re=1;
			}
		}
	
	}
	if(re!=0){
		cout<<res;
	}
	else{
		cout<<0;
	}
	
}

