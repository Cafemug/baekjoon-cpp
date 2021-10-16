#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int num;
string s="";
int cnt=0;
void re(string t,int m){
    if (cnt>0)
        return;
    int len=t.size();
        for(int i=1;i<=(len/2);i++){
            if(t.substr(len-i,i)==t.substr(len-(2*i),i)){
                t="";
                return ;
            }
        }
    if(m>num)
        return;
    if(m==num){
        cnt++;
        cout<<t<<"\n";
        return;
    }
    else{
        for(int i=0;i<num;i++){
            re(t+"1",m+1);
            re(t+"2",m+1);
            re(t+"3",m+1);
        }
    }
}
int main(){
    cin>>num;
    re(s,0);
}