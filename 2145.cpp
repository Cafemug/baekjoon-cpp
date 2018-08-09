#include <iostream>
using namespace std;
int main(){
    int a=1,sum=0;
    while(1){ 
        cin>>a;
        if(a==0)   
            return 0;
        while(1){
            sum=0;
            if(a/10==0)
                break;
            while(a!=0){
                sum+=(a%10);
                a/=10;
            }
            a=sum;
        }
        cout<<a<<"\n";
    }
}