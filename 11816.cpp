#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
    string str;
    int len,res=0,temp,idx=1;
    cin>>str;
    len=str.size();
    if(str[0]=='0'&& str[1]=='x'){
        for(int i=len-1;i>1;i--){
            if(isalpha(str[i])){
                temp=str[i]-'a';
                temp+=10;
                temp*=idx;
            }
            else{
                temp=str[i]-'0';
                temp*=idx;
            }
            res+=temp;
            idx*=16;
        }
        cout<<res;
    }
    else if(str[0]=='0'){
        for(int i=len-1;i>0;i--){
            temp=str[i]-'0';
            temp*=idx;
            res+=temp;
            idx*=8;
            }
          cout<<res;  
        }
    else
        cout<<str;
}