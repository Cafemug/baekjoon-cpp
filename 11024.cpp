#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
long long int n,sum = 0;
int main(){
	int a;
	string num;
	int tmp,i = 0,len,t;
	cin>>a;
	cin.ignore();
	while(a-->0){
		i=0;
		len=num.size();
		sum=0;
		getline(cin,num,'\n');
		len=num.size();
		t=len;
		while(len-->0)
	 	{
		  tmp = i;
		  for(i = i ; num[i] != ' ' ; i ++){
		  	if(num[i]=='\0'){
		  		
		  		break;
	  		}
	  	}
		n = atoi(num.c_str()+tmp);
		sum = sum + n;
		i = i + 1;
		}
		for(int i=0;i<t;i++){
			num[i]='\0';
		}
		 printf("%lld\n",sum);
		
	}
}