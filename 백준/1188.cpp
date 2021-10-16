#include <iostream>
using namespace std;
int gcd(int a, int b){ return a%b?gcd(b, a%b):b; }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,idx;
    cin>>n>>m;
    idx=gcd(m,n);
    cout<<m-idx;
}