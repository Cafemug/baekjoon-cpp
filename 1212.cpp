#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    string oct;
    string res="";
    int len;
    cin>>oct;
    len=oct.size();
    for(int i=len-1;i>=0;i--){
        string temstr="";
        int zari=oct[i]-'0';
        int temp=zari;
        char ma;
        while(temp>1){
            char te=(temp%2)+'0';
            temstr+=te;
            temp=temp/2;
        }
        ma=temp+'0';
        temstr+=ma;
        int l=temstr.size();
        if(i!=0){
            while(l<3){
                temstr+='0';
                l++;
            }
        }
        res+=temstr;
    }
    reverse(res.begin(),res.end());
    cout<<res;
}