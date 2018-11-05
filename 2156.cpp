#include <cstdio>
#include <iostream>
using namespace std;
int arr[100002],d[100002][2];
int main(){
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        cin>>arr[i];
    }
    d[1][1]=arr[1];
    d[1][0]=0;
    d[2][1]=max(arr[1]+arr[2],arr[1]);
    d[2][0]=arr[1];
    d[3][1]=max(arr[3]+d[2][0],arr[3]+arr[2]);
    d[3][0]=max(d[2][1],d[2][0]);
    for(int i=4;i<=num;i++){
        d[i][0]=max(d[i-1][0],d[i-1][1]);
        d[i][1]=max(arr[i]+d[i-1][0],arr[i]+arr[i-1]+d[i-2][0]);
    }
    printf("%d",max(d[num][0],d[num][1]));
}