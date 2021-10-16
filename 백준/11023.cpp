#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
long long int n,sum = 0;
int main(){
	string num;
	int tmp,i = 0,len;
	getline(cin,num,'\n');
	len=num.size();
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
	 printf("%lld",sum);
}