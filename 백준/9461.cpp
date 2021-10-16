#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int MAX=103;
long d[MAX];
int main(){
    int a,b;
    cin>>a;
    d[1]=1;
    d[2]=1;
    d[3]=1;
    d[4]=2;
    d[5]=2;
    while(a-->0){
        cin>>b;
        for(int i=6;i<=b;i++){
            d[i]=d[i-1]+d[i-5];
        }
        cout<<d[b]<<"\n";
    }
}