#include <iostream>
#include <cstdlib>
long long int n,sum = 0;
using namespace std;
int main(){
	int a;
	string num;
	int tmp,i = 0,len,t;
	
	while(!getline(cin,num,',').eof()){
		i=0;
		len=num.size();
		
		cout<<num<<"\n";
		len=num.size();
		t=len;
		while(len-->0)
	 	{
		  tmp = i;
		  for(i = i ; num[i] != ',' ; i ++){
		  	if(num[i]=='\0'){
		  		
		  		break;
	  		}
	  	}
		n = atoi(num.c_str()+tmp);
		cout<<n<<"\n";
		sum = sum + n;
		i = i + 1;
		}
		
		printf("%lld\n",sum);
		
	}
}