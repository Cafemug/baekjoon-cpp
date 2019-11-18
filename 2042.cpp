#include <iostream>
using namespace std;
long long arr[1000001];
long long arr2[1000001];
long long sum_arr[1000001]; 
int main(){
    int n,m,k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        sum_arr[i] = sum_arr[i-1] + arr[i];
    }
    int len = n+k;
    while(len--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a==1){
            arr2[b]=c;
        }
        else{
            
        }
    }
}