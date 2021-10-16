#include <iostream>
#include <cstdio>
using namespace std;
const int MAX=303;
long long int d[MAX];
long long int arr[MAX];
int main(){
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        cin>>arr[i];
    }
    d[1]=arr[1];
    d[2]=arr[1]+arr[2];
    d[3]=max(arr[1]+arr[3],arr[2]+arr[3]);
    for(int i=4;i<=num;i++){
        d[i]=max(d[i-3]+arr[i-1]+arr[i],d[i-2]+arr[i]);
    }
    cout<<d[num];
}