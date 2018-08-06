#include <iostream>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    while(n-->0){
        cin>>s;
        int len=s.size();
        int c=s[len-1]-'0';
        if(c%2==0)
            cout<<"even"<<"\n";
        else    
            cout<<"odd"<<"\n";
    }
}