#include <iostream>
using namespace std;
long long d[101];
long long arr[101];
int main(){
    int num;

    for(int i=1;i<=100;i++){
        if(i<=3) d[i]=i;
        for(int j=3;j<i;j++){
            d[i]=max(d[i] ,max(d[i-1]+1,d[i-j]*(j-1)));
        }
    }
    cin>>num;
    cout<<d[num];
}