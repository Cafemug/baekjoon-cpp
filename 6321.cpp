#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
    string s;
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>s;
        int len=s.size();
        for(int j=0;j<len;j++){
            int temp=s[j];
            if(temp==90)
                s[j]=65;
            else
                s[j]=temp+1;
        }
        printf("String #%d\n",i);
        cout<<s<<"\n";
        cout<<"\n";
    }
}