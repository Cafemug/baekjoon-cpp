#include <iostream>
#include <cstring>
using namespace std;
int arr[101][1001];
int res[101];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,m,maxn=0,idx;
    cin>>t;
    while(t--){
        cin>>n>>m;
        maxn=0;
        memset(res,0,sizeof(res));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                res[i]+=arr[j][i];
            }
        }
        for(int i=1;i<=n;i++){
            if(maxn<res[i]){
                maxn=res[i];
                idx=i;
            }
        }
        cout<<idx<<"\n";
    }
}