#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int MAX=100003;
int d[MAX][3];
long sum=0;
int main(){
    int a;
    cin>>a;
    for(int i=0;i<3;i++){
        d[1][i]=1;
    }
    for(int i=2;i<=a;i++){
        d[i][0]=d[i-1][0]+d[i-1][1]+d[i-1][2];
        d[i][1]=d[i-1][2]+d[i-1][0];
        d[i][2]=d[i-1][1]+d[i-1][0];
        d[i][0]%=9901;
        d[i][1]%=9901;
        d[i][2]%=9901;
    }
    for(int i=0;i<3;i++){
       sum+=d[a][i];
    }
    cout<<sum%9901;
    
}