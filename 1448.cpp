#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000001]={0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long sum;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1;i>1;i--){
        if(arr[i]<arr[i-1]+arr[i-2]){
            sum= arr[i]+arr[i-1]+arr[i-2];
            cout<<sum;
            return 0;
        }
    }
    cout<<-1;

}