#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
long long int arr[2][100003]={0,};
long long int d[100003][3]={0,};
void re(int m){
    d[1][0]=0;
    d[1][1]=arr[0][1];
    d[1][2]=arr[1][1];
    for(int n=2;n<=m;n++){
        d[n][0]=max(d[n-1][0],max(d[n-1][1],d[n-1][2]));
        d[n][1]=max(d[n-1][2]+arr[0][n],d[n-1][0]+arr[0][n]);
        d[n][2]=max(d[n-1][1]+arr[1][n],d[n-1][0]+arr[1][n]);
    }
    
}
int main(){
    int num,x;
    long long int res;
    cin>>num;
    for(int z=1;z<=num;z++){
        cin>>x;
        for(int i=1;i<=x;i++){
            cin>>arr[0][i];
        }
        for(int i=1;i<=x;i++){
            cin>>arr[1][i];
        }
        re(x);
        res=max(d[x][0],max(d[x][1],d[x][2]));
        cout<<res<<"\n";
    }
}