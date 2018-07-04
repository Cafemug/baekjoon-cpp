#include <iostream>
using namespace std;
int main(){
    int a,n=1,x,y;
    cin>>a;
    if(a==1){
        cout<<1;
        return 0;
    }
    while(1){
        x=3*n*(n-1)+1;
        y=3*n*(n+1)+1;
        if(x<=a && a<=y){
            cout<<n+1;
            return 0;
        }
        n++;
    }
}