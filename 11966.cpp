#include <iostream>
using namespace std;
int main(){
    int a,temp;
    cin>>a;
    while(a>1){
        if(a%2!=0){
            cout<<0;
            break;
        }
        else{
            a/=2;
        }
    }
    if(a<=1)
        cout<<1;
}