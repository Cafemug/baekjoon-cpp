#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
long long int arr[100002]={0,};
long long int d[100002]={0,};
long long int n;
void re(){
    for(int i=2;i<=n;i++){
        if(d[i-1]+arr[i]>arr[i]){
            d[i]=d[i-1]+arr[i];
        }
        else{
            d[i]=arr[i];
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    d[1]=arr[1];
    re();
    sort(d+1,d+n+1);
    cout<<d[n];
}