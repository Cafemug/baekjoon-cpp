#include <iostream>
#include <cstdio>
#include <cstring>
#include <time.h>
using namespace std;
int main(){
	clock_t beg=clock();
	int num,a,b,lens,temp,res;
	char s[1000000]={0,};
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>a>>b>>s;
		lens=strlen(s);
		for(int j=0;j<lens;j++){
			temp=s[j]-65;
			res=(a*temp+b)%26;

			cout<<char(res+65);
		}
		cout<<endl;
	}
	clock_t end=clock();
    long msec=end-beg;
    cout<<msec;
}