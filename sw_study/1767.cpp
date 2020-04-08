#include <iostream>
#include <cstring>
using namespace std;
long long mod = 1000001;
long long n,m,k;
long long d[101][101][101];
long long go(long long x, long long y, long long cnt){
    if(cnt ==0) return 1;
    if(x<=0 || y<=0 || cnt<0) return 0;
 
    long long &ans = d[x][y][cnt];
    if(ans !=-1) return ans;
    ans=0;
    ans += go(x-1,y,cnt);
    ans += go(x-1,y-1,cnt-1)*y;
    ans += go(x-1,y-2,cnt-2)*y*(y-1)/2;
    ans += go(x-2,y-1,cnt-2)*y*(x-1);
    ans %= mod;
    return ans;
}
int main(){
    cin>>n>>m>>k;
    memset(d, -1, sizeof(d));
    cout<<go(n,m,k)<<"\n";
}