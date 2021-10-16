#include <iostream>
#include <cstdio>
#include <cstring>
#include <math.h>
using namespace std;
int main(){
	int m,n,res=0,count=0,t=0,s=0,resk;
	cin>>m>>n;
	if(m==1){m=m+1;}
	for(int i=m;i<=n;i++){
		t=0;
		for(int j=2;j<=sqrt((double)i);j++){
			if(i%j==0){
				t=1;
				break;
			}
		}
		if(t==0){
			count++;
			res+=i;
			if(s==0){
				resk=i;
				s++;
			}
		}
		
	}
	if(count==0){
		cout<<-1;

		}
		else{
		
		cout<<res<<endl<<resk;
		}
}
