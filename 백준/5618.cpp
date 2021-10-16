#include <iostream>
#include <cstring>
using namespace std;
int gcd(int a, int b){ return a%b?gcd(b, a%b):b; }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y,c=0,z;
    cin>>n;
    if(n==2)
        cin>>x>>y;
    else
        cin>>x>>y>>c;
    z=gcd(x,y);
    if(c!=0)
        z=gcd(z,c);
    cout<<1<<"\n";
    for(int i=2;i<=z;i++){
        if(z%i==0)
            cout<<i<<"\n";
    }
}