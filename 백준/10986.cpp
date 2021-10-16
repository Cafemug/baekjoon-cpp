#include <iostream>
using namespace std;
long p[100001]={0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long n,m,a;
    long sum=0;
    cin>>n>>m;
    for(int i=0;i < n; i++){
        cin>>a;
        sum += a;
        p[sum%m]++; 
    }
    long res=p[0];
    for(int i=0;i < m; i++){
        res += (p[i]*(p[i]-1))/2;     
    }
    cout<<res;
}