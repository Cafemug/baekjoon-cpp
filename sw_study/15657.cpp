#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int arr[9],res[9];
void recur(int x){
    if(x==m){
        for(int i=1;i<=m;i++){
            cout<<res[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=arr[x-1];i<n;i++){
        res[x]=arr[i];
        recur(x+1);
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    // arr[0]=1;
    // recur(1);
}