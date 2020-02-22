#include <iostream>
#include <algorithm>
using namespace std;
int arr[10001];
int arr2[10001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, flag=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr2[i]=i+1;
    }
    do{
        flag=1;
        if(flag==2){
            for(int i=0;i<n;i++){
                cout<<arr2[i]<<" ";
            }
            flag=0;
            break;
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=arr2[i]){
                flag=0;
                break;
            }
        }
        if(flag==1) flag=2;
    }while(next_permutation(arr2,arr2+n));
    if(flag==2) cout<<-1;
}
