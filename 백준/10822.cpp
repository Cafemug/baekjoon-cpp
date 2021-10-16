#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
long long int n,sum = 0;
int main(){
	char num[102];
	int tmp,i = 0;
	scanf("%s",num);
	while(num[i] != '\0')
 	{
	  tmp = i;
	  for(i = i ; num[i] != ',' ; i ++){
	  	if(num[i]=='\0'){
	  		
	  		break;
  		}
  	}
	 
	 n = atoi(num+tmp);
	 sum = sum + n;
	 i = i + 1;

	}
	 printf("%lld",sum);
}