#include <iostream>
using namespace std;
double arr[100001]={0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,idx;
    double count,res;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    if((arr[1]/arr[0])==(arr[2]/arr[1])){
        idx=1;
        count=arr[1]/arr[0];
    }
    else if((arr[1]-arr[0])==(arr[2]-arr[1])){
        idx=2;
        count=arr[1]-arr[0];

    }
    if(idx==1){
        res=arr[n-1]*count;
    }
    else{
        res=arr[n-1]+count;
    }
    cout<<(long long)res;
}