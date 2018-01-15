#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,res[100],re=0,count=1;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>res[i];
		if(i==0 && res[i]==1){
			re+=count;
		}
		else if(res[i-1]==1 && res[i]==1){
			count++;
			re+=count;
		}
		else if(res[i-1]==0 && res[i]==1){
			count=1;
			re+=count;
		}
		else{
			count=1;
		}
	}
	cout<<re;
}

