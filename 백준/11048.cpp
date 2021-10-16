#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int MAX=1010;
int arr[MAX][MAX]={0,};
int d[MAX][MAX];
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cin>>arr[i][j];
        }
    }
    d[1][1]=arr[1][1];
    for(int i=2;i<=a;i++){
        d[i][1]=d[i-1][1]+arr[i][1];
    }
    for(int i=2;i<=b;i++){
        d[1][i]=d[1][i-1]+arr[1][i];
    }
  
    for(int i=2;i<=a;i++){
        for(int j=2;j<=b;j++){
            d[i][j]=max(max(d[i-1][j],d[i][j-1]),d[i-1][j-1]);
            d[i][j]+=arr[i][j];
        }
    }
    cout<<d[a][b];
}