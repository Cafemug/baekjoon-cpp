#include <iostream>
using namespace std;
int main(){
    string str;
    int al[26]={0,};
    int len,temp;
    cin>>str;
    len=str.size();
    for(int i=0;i<len;i++){
        temp=str[i]-'a';
        al[temp]++;
    }
    for(int i=0;i<26;i++){
        cout<<al[i]<<" ";
    }
}