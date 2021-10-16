#include <iostream>
#include <cstdio>
using namespace std;
long long int arr[1001];
int main(){
    int num;
    cin>>num;
    arr[1]=1;
    arr[2]=2;
    for(int i=3;i<=num;i++){
        arr[i]=(arr[i-1]+arr[i-2])%10007;
    }
    cout<<arr[num];
}