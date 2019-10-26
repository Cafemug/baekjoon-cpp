#include <iostream>
#include <vector>
using namespace std;
int n;
int arr[9],check[9];
void dfs(int idx,int depth){
    arr[depth]=idx;
    if(depth==n){
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    for(int i=1;i<=n;i++){
        if(check[i]) continue;
        check[i]=1;
        dfs(i,depth+1);
        check[i]=0;
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        check[i]=1;
        dfs(i,1);
        check[i]=0;
    }
    
}