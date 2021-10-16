#include <iostream>
#include <cstdio>
using namespace std;
int arr[10003]={0,};
int d[10003]={0,};
int main(){
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            d[i]=max(d[i],d[i-j]+arr[j]);
        }
    }
    cout<<d[num];
}