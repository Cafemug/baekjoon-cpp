#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
char arr[1000000];
char brr[1000000];
char res[2000000]="";
char arrt[1000000];
char brrt[1000000];
char *ito(int num, char* buf, int radix){
	if( radix<2 && 16<radix ) return buf;
    int mod, count=0;
	for(;num>0;){
        mod = num%radix;
		num/=radix;
        switch(mod){
        	case 10://10진수 이상일 경우
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
				buf[count++] = 'A' + (mod-10);
		        break;
			default:
			    buf[count++] = '0' + mod;
				break;
		}
	}
    buf[count] = 0;
    int temp;
	for(int i=0; i<count/2; i++){
        temp = buf[i];
		buf[i] = buf[count-1-i];
		buf[count-1-i] = temp;
	}
    return buf;
}
int main(){
	int x,y,k,a,b;
	scanf("%s %s",arr,brr);
	a=strlen(arr);
	b=strlen(brr);
	if(a>=b){
		x=a;
		y=b;
		k=1;
	}
	else{
		x=b;
		y=a;
		k=2;
	}
	reverse(arr,arr+a);
	reverse(brr,brr+b);
	
	for(int i=0;i<x;i++){
		if(i==y){
			break;
		}
		int kk=arr[i];
		int tt=brr[i];
		char intStr[2];
		if(kk+tt-96==0){
			intStr[0]='0';
		}
		else
			ito(kk+tt-96,intStr,10);
		
		int ll=strlen(intStr);
		
		reverse(intStr,intStr+ll);
		
		strcat(res,intStr);
		
	}
	char te[x-y];
	if(k==1){
		for(int i=y;i<x;i++){
			te[i-y]=arr[i];
		}
	}
	else{
		for(int i=y;i<x;i++){
			te[i-y]=brr[i];
		}
	}
	te[x-y]='\0';
	strcat(res,te);
	reverse(res,res+strlen(res));
	cout<<res;
}