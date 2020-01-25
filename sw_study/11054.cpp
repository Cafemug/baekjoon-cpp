#include <iostream>
using namespace std;
int arr[1002]={0,};
int d[1002]={0,};
int reverse_d[1002]={0,};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num,res=0;
    cin>>num;
    for(int i=1;i<=num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        if(arr[i]<arr[i+1]){
            d[i+1] = d[i]+1;
        }
        else{
            d[i]=d[i+1];
        }
    }
    for(int i=num+1;i>0;i--){
        if(arr[i]<arr[i-1]){
            reverse_d[num-i+1] = reverse_d[num-i]+1;
        }
        else{
            reverse_d[num-i+1] = reverse_d[num-i];
        }
    }
    for(int i=1;i<=num;i++){
        if(res<(d[i]+reverse_d[num-i+1])){
            res = (d[i]+reverse_d[num-i+1]);
        }
    }
    cout<<res;
}