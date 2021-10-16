#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    string s,t;
    while(1){
        int len=0,idx=0;
        cin>>s>>t;
        if(s=="0"&&t=="0")
            return 0;
        int slen=s.size();
        int tlen=t.size();
        s= slen>=tlen ? s:t;
        t= slen>=tlen ? t:s;
        reverse(s.begin(),s.end());
        reverse(t.begin(),t.end());
        int res=slen>=tlen ? tlen : slen;
        int maxres=slen>=tlen ? slen : tlen;
        for(int i=0;i<res;i++){
            int snum=s[i]-'0';
            int tnum=t[i]-'0';
            if(idx+snum+tnum>=10){
                idx=1;
                len++;
            }
            else{
                idx=0;
            }
        }
        for(int i=res;i<maxres;i++){
            int snum=s[i]-'0';
            if(idx+snum>=10){
                idx=1;
                len++;
            }
            else{
                idx=0;
            }
        }
        cout<<len<<"\n";
    }
}