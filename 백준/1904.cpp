#include <iostream>
#include <cstdio>
using namespace std;
long long int d[1000003][2]={0,};
void re(long long int m){
    for(int i=3;i<=m;i++){
        d[i][0]=(d[i-2][1]+d[i-2][0])%15746;
        d[i][1]=(d[i-1][1]+d[i-1][0])%15746;
    }
}
int main(){
    long long int n,res;
    d[1][0]=0;
    d[1][1]=1;
    d[2][0]=1;
    d[2][1]=1;
    cin>>n;
    re(n);
    res=(d[n][1]+d[n][0])%15746;
    cout<<res;
}