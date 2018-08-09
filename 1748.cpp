#include <iostream>
using namespace std;
int main(){
    long a,sum=0;
    cin>>a;
    for(int i=1;i<=a;i*=10){
        sum+=(a-i+1);
    }
    cout<<sum;
}