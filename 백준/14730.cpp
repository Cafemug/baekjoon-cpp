#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int num,sum=0;
    cin>>num;
    while(num-->0){
        int a,b;
        cin>>a>>b;
        sum+=(a*b);
    }
    cout<<sum;

}