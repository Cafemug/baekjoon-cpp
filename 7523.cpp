#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    long long a,b,res,num,x,y;
    cin>>num;
    for(int i=1;i<=num;i++){
        cin>>a>>b;
        if(a>=0){
            res=(b*(b+1)/2)-((a-1)*a/2);
        }
        else{
            if(b>=0){
                a=-a;
                if(a<=b){
                    res=(b*(b+1)/2)-((a+1)*a/2);
                }
                else{
                    res=(a*(a+1)/2)-((b+1)*b/2);
                    res=-res;
                }
            }
            else{
                a=-a;
                b=-b;
                res=(a*(a+1)/2)-((b-1)*b/2);
                res=-res;
            }
        }
        printf("Scenario #%d:\n%lld\n\n",i,res);
    }
}