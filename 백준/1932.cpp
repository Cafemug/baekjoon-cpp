#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int v[502][502] = {0,};
int d[502][502] = {0,};
int main(){
    int a , b;
    cin >> a;
    for(int i = 1; i <= a ; ++i){
        for(int j = 1; j <= i; ++j){
            cin>>v[i][j];
        }
    }
    d[1][1]=v[1][1];
    for(int i = 2; i <= a ; ++i){
        d[i][1]=d[i-1][1]+v[i][1];
        d[i][i]=d[i-1][i-1]+v[i][i];
    }
    for(int i = 1; i <= a ; ++i){
        for(int j = 1; j <= i; ++j){
            if (j!=1 && j!=i){
                d[i][j]=max(d[i-1][j-1],d[i-1][j])+v[i][j];
            }
        }
    }
    b=d[a][1];
    for(int i = 2; i <= a ; ++i){
        if(b<d[a][i])
            b=d[a][i];
    }
    cout<<b;
}