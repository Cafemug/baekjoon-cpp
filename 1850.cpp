#include <iostream>
using namespace std;
long long  gcd(long long  a, long long b){ return a%b?gcd(b, a%b):b; }
int main(){
    long long x,y;
    cin>>x>>y;
    long long t=gcd(x,y);
    while(t-->0){
        cout<<1;
    }
}