#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
long long int arr[500005];
long long int arr1[500005];
int res[500005];
void binary(int start,int end,int i){
    int mid=(start+end)/2;
    // cout<<mid;
    if(start>end)
        return;
   
    else{
         if(arr1[mid]==arr[i])
        {
            res[i]=1;
            return ;
        }
        if(arr1[mid]<arr[i]){
            // start=;
            binary(mid+1,end,i);
        }
        else if(arr1[mid]>arr[i]) {
            // end=;
            binary(start,mid-1,i);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr1[i];
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>arr[i];
    }
    sort(arr1+1,arr1+n+1);
    for(int i=0;i<=m;i++){
        binary(1,n,i);
    }
    for(int i=1;i<=m;i++){
        cout<<res[i]<<" ";
    }
}