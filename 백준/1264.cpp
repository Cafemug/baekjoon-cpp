#include <iostream>
#include <cstring>
using namespace std;
int main(){
    while(1){
        string s;
        getline(cin,s);
        if(s=="#")
            return 0;
        int len=s.size();
        int sum=0;
        for(int i=0;i<len;i++){
            s[i]=tolower(s[i]);
            if(s[i]=='a' || s[i]=='o' || s[i]=='u' || s[i]=='i' || s[i]=='e' )
                sum++;
        }
        cout<<sum<<"\n";
    }
}