#include <iostream>
#include <cstdio>
using namespace std;
long long int arr[92]={0,};
long long int d[93][3];
int main(){
    int num;
    cin>>num;
    d[1][1]=1;
    d[1][0]=0;
    d[2][1]=0;
    d[2][0]=1;
    arr[1]=1;
    arr[2]=1;
    for(int i=3;i<=num;i++){
        arr[i]=(2*d[i-1][0])+d[i-1][1];
        d[i][0]=d[i-1][0]+d[i-1][1];
        d[i][1]=d[i-1][0];
    }
    cout<<arr[num];
}