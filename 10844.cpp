#include <iostream>
#include <cstdio>
using namespace std;
long long int arr[101][11]={0,};
int main(){
    int num;
    long long int count=0;
    cin>>num;
    for(int i=1;i<=9;i++){
        arr[1][i]=1;
    }
    for(int i=2;i<=num;i++){
        arr[i][0]=arr[i-1][1]%1000000000;
        arr[i][9]=arr[i-1][8]%1000000000;
        for(int j=1;j<9;j++){
            arr[i][j]=(arr[i-1][j-1]+arr[i-1][j+1])%1000000000;
        }
    }
    for(int i=0;i<10;i++){
        count+=arr[num][i];
    }
    cout<<count%1000000000;
}