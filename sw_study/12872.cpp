#include <iostream>
#include <cstring>
using namespace std;
const long long mod =1000000007;
long long d[101][101];
long long n,m,p;
long long go(long s, long x){
    long long y = n-x;
    if(s==p){
        if(y==0) return 1;
        else return 0;
    }
    long long &ans = d[s][x];
    if(ans!=-1) return ans;
    ans=0;
    if(y>0){
        ans += (go(s+1,x+1)*y%mod);
    }
    if(x>m){
        ans += (go(s+1,x)*(x-m)%mod);
    }
    ans%=mod;
    return ans;
}
int main(){
  
  cin>>n>>m>>p;
  memset(d,-1,sizeof(d));
  cout<<go(0,0)<<"\n";
}