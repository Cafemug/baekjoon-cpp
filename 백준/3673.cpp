#include <iostream>
#include <cstring>
using namespace std;
long p[1000001]={0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long n,m,a,t;
    cin>>t;
    while(t-->0){
        long sum=0;
        memset(p,0,sizeof(p));
        cin>>m>>n;
        for(int i=0;i < n; i++){
            cin>>a;
            sum += a;
            p[sum%m]++; 
        }
        long res=p[0];
        for(int i=0;i < m; i++){
            res += (p[i]*(p[i]-1))/2;     
        }
        cout<<res<<"\n";
    }
}