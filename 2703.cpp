#include <iostream>
using namespace std;

int main(){
    string s,t;
    int a;
    cin>>a;
    
    for(int i=0;i<a;i++){
        cin.ignore();
        getline(cin,s);
        cin>>t;
        int len=s.size();
        for(int x=0;x<len;x++){
            if(s[x]!=' '){
                int temp=s[x]-'A';
                cout<<t[temp];
            }
            else{
                cout<<s[x];
            }
        }
        cout<<"\n";
    }
}