#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    long long int n,sum;
    char t,k;
    scanf("%lld\n",&n);
    sum=n;
    while(1){
        scanf("%c",&t);
        
        if(t=='=')
            break;
        scanf("%lld\n",&n);
    
            if(t=='+'){
                sum+=n;
            }
            else if(t=='-'){
                sum-=n;
            }
            else if(t=='*'){
                sum*=n;
            }
            else if(t=='/'){
                sum/=n;
            }
        
    }
   // cin>>t;
    cout<<sum;
}