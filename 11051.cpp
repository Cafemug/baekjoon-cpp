#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int MAX=1002;
long d[MAX][MAX];
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=0;i<=a;i++){
        d[i][0]=1;
        d[i][i]=1;
    }
    d[1][1]=1;
    for(int i=2;i<=a;i++){
        for(int j=1;j<i;j++){
            d[i][j]=d[i-1][j-1]+d[i-1][j];
            d[i][j]%=10007;
            
            
        }
    }
    cout<<d[a][b]%10007;

}