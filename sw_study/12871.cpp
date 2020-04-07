#include <iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int slen = s.size();
    int tlen = t.size();
    for(int i=0;i<=2500;i++){
        if(s[i%slen] != t[i%tlen]){
            cout<<0;
            return 0;
        }
    }
    cout<<1;
}