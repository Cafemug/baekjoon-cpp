#include <iostream>
#include <algorithm>
using namespace std;
int arr[3];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
    while(true){
        if(arr[2]<arr[1]+arr[0]){
            cout<<arr[2]+arr[1]+arr[0];
            return 0;
        }
        arr[2]--;
    }
}