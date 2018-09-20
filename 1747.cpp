#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int pali(int x){
    string s="";
    while(x/10!=0){
        char te=x%10+'0';
        s+=te;
        x/=10;
    }
    char te=x+'0';
    s+=te;
    reverse(s.begin(),s.end());
    int len=s.size();
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a;
    cin>>a;
    if(a==1 || a==2){
        cout<<2;
        return 0;
    }
    while(1){
        int idx=1;
        double b=sqrt(a);
        for(int i=2;i<=b;i++){
            if(a%i==0){
                idx=0;
                break;
            } 
            
        
        }
        if(idx){
            int jud=pali(a);
            if(jud){
                cout<<a;
                return 0;
            }
        }
        a++;
    }
}