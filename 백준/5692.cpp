#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
char s[10];
int main(){
    
    while(1){
        scanf("%s",s);
        int res=0,restemp=1;
        if(!strcmp(s,"0"))
            return 0;
        int len=strlen(s);
        for(int i=0;i<len;i++){
            restemp=1;
            for(int j=1;j<=len-i;j++){
                restemp*=j;
            }
            int temp=s[i]-'0';
            restemp*=temp;
            res+=restemp;
        }
        printf("%d\n",res);
    }
}