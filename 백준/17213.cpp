#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,m,sn=1,sr=1,t;
    cin>>n>>m;
    long long r=m-n;
    n=n+r-1;
    r=min(r,n-r);
    t=r;
    for(int i=1;i<=t;i++){
        sn*=n;
        n--;
    }
    for(int i=1;i<=t;i++){
        sr*=r;
        r--;
    }

    cout<<sn/sr;
}