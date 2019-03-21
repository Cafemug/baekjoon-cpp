#include <iostream>
using namespace std;
int arr[40000]={0,};
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            cout<<i;
            return 0;
        }   
            
    }
}