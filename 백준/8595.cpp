#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <math.h>
using namespace std;
int main(){
	long long a,b,res=0,count=0;
	char d;
	int f[7];
		cin>>a;
	for(int i=1;i<=a;i++){
		cin>>d;
		b=(int)d;
		if(48<=b && b<=57){
			count++;
			f[count]=b-48;
		}
		else{
			if(count>0){
				for(int j=1;j<=count;j++){				
					res+=f[j]*pow(10,count-j);
				}
			}
			count=0;
		}
	}
		for(int j=1;j<=count;j++){
					res+=f[j]*pow(10,count-j);
				}
	cout<<res;

}

