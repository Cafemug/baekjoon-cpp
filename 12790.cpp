#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d,aa,bb,cc,dd;
        cin>>a>>b>>c>>d>>aa>>bb>>cc>>dd;
        a+=aa;
        b+=bb;
        c+=cc;
        d+=dd;
        a=(a<1 ? 1:a);
        b=(b<1 ? 1:b);
        c=(c<0 ? 0:c);
        cout<<a+5*b+2*c+2*d<<"\n"; 
    }
}