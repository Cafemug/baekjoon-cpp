#include <iostream>
using namespace std;
int t[1500001];
int p[1500001];
int d[1500001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t[i]>>p[i];
    }
    for(int i=1;i<=n;i++){
        d[i+t[i]] = max(d[i]+p[i],d[i+t[i]]);
        d[i+1] = max(d[i],d[i+1]);
    }
    cout<<d[n+1];
}