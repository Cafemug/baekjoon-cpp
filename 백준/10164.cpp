#include <iostream>
using namespace std;
int d[17][17];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        d[i][1]=1;
    }
    for(int i=1;i<=m;i++){
        d[1][i]=1;
    }
    if(k==0){
        for(int i=2;i<=n;i++){
            for(int j=2;j<=m;j++){
                d[i][j]=d[i-1][j]+d[i][j-1];
            }
        }
        cout<<d[n][m];
    }
    else{
        int nn=(k+m-1)/m;
        int mm=k%m;
        if (mm==0)
            mm=m;
        int maxn=max(n,nn);
        int maxm=max(m,mm);
        for(int i=2;i<=maxn;i++){
            for(int j=2;j<=maxm;j++){
                d[i][j]=d[i-1][j]+d[i][j-1];
            }
        }
        cout<<d[nn][mm]*d[n-nn+1][m-mm+1];
    }

}