#include <iostream>
using namespace std;
string s;
int main(){
    cin>>s;
    int len=s.size();
    int sum=10;
    for(int i=1;i<len;i++){
        if(s[i]!=s[i-1]){
            sum+=10;
        }
        else{
            sum+=5;
        }
    }
    cout<<sum;
}