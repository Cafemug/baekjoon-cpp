#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a;
    cin>>b;
    if(a==1){
        cout<<b;
        return 0;
    }
    c=b;
    cout<<b<<" ";
    for(int i=2;i<=a;i++){
        cin>>b;
        d=(b*i)-(c*(i-1));
        cout<<d<<" ";
        c=b;


    }
}
