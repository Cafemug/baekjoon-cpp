#include <iostream>
using namespace std;
string s[101];
string t;
int main(){
    int a;
    cin>>a;
    for(int i = 0;i < a; ++i){
        cin>>s[i];
    }
    t=s[0];
    int len = t.size();
    for(int i = 0;i < len; ++i){
        for(int j = 0; j < a; ++j){
            if(t[i]!=s[j][i]){
                t[i]='?';
            }    
        }
    }
    cout<<t;
}

