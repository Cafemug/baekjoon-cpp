#include <iostream>
#include <vector>
using namespace std;
int n,m;
int arr[10];
bool check[10];
void recur(int x){
    if(x==m+1){
        for(int i=1;i<=m;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=arr[x-1];i<=n;i++){
        arr[x]=i;
        recur(x+1);
    }
}
int main(){
    cin>>n>>m;
    arr[0]=1;
    recur(1);
    
}
