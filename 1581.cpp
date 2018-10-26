#include <iostream>
using namespace std;
string s;
int main(){
    cin>>s;
    int num;
    cin>>num;
    while(num-->0){
        int a,b;
        char temp;
        cin>>a>>b;
        temp=s[a];
        s[a]=s[b];
        s[b]=temp;

    }
    cout<<s;
}