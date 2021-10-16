#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int mod=10007;
const int MAX=1003;
int d[MAX][MAX];
int ans=0;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=9;i++){
        d[1][i]=1;
    }
    for(int i=2;i<=n;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=j;k++){
                d[i][j]+=d[i-1][k];
                d[i][j]%=mod;
            }
        }
    }
    for(int i=0;i<=9;i++){
        ans+=d[n][i];
    }
    cout<<ans%mod;
}