#include <iostream>
#include <cstring>
using namespace std;
int arr[14];
int check[14];
int num;
void dfs(int x,int depth, int n){
    if(depth==6){
        for(int i=0;i<n;i++){
            if(check[i])
                cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    for(int i=x;i<n;i++){
        if(check[i]) continue;
        check[i]=1;
        dfs(i,depth+1,n);
        check[i]=0;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        cin>>num;
        if(!num) return 0;
        memset(arr,0,sizeof(arr));
        memset(check,0,sizeof(check));
        for(int i=0;i<num;i++){
            cin>>arr[i];
        }
        dfs(0,0,num);
        
        cout<<"\n";
    }
}