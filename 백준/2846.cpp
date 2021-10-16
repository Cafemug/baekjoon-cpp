#include <iostream>
using namespace std;
int arr[1001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,res=0,cnt,temp;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cnt=arr[0];
    for(int i=1;i<a;i++){
        if(arr[i-1]>=arr[i]){
            temp=arr[i-1]-cnt;
            cnt=arr[i];
            if(res<temp){
                res=temp;
            }
                
        }
    }
    if(arr[a-2]<arr[a-1]){
        temp=arr[a-1]-cnt;
        if(res<temp){
            res=temp;
        }
    }
    cout<<res;
}