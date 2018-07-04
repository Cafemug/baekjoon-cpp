#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    b=a;
    if(a==1)
        return 0;
    if(a>1 && a<4){
        printf("%d\n",a);
        return 0;
    }
    for(int i=2;i<=b;i++){
        while(1){
            if(a==1)
                return 0;
            if(a%i==0){
                printf("%d\n",i);
                a/=i;
            }
            else
                break;
        }
    }
}