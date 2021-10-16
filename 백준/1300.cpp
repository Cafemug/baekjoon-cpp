#include <iostream>
using namespace std;
long long int n,m;
int main(){
    cin>>n>>m;
    long long int lef=0,righ=10000000001,sum,res;
    while(lef<=righ){
        sum=0;
        long long int mid=(lef+righ)/2;
        for(int i=1;i<=n;i++){
            sum+=min(mid/i,n);
        }
        if(sum>=m){
            res=mid;
            righ=mid-1;
        }
        else    
            lef=mid+1;
    }
    cout<<res;
}