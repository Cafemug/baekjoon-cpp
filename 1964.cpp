#include <iostream>
using namespace std;
int main(){
    long long a,sum=0;
    cin>>a;
    if(a==1){
        cout<<5;
        return 0;
    }
    else{
        for(int i=2;i<=a;i++){
            sum+=((i*3)+1)%45678;
            sum%=45678;
        }
    }
    cout<<sum+5;
}