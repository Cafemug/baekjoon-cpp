#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000001];
int main(){
    int n,res=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int temp = arr[i]*(n-i);
        if(temp>res){
            res=temp;
        }
    }
    cout<<res;
}