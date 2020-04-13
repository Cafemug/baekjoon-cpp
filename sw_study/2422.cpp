#include <iostream>
using namespace std;
int johab[201][201];
int main(){
    int n,m,ans=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        johab[a][b]=1;
        johab[b][a]=1;
    }
    for(int i=1;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            for(int k=j+1;k<=n;k++){
                if(johab[i][k] || johab[i][j] || johab[k][j]) continue;
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
}
