#include <iostream>
#include <cstdio>
using namespace std;
long arr[55]={0,};
long flag[55]={0,};
long n,x,tot=0,res=0,idx=0;
void re(int m){
    if(m==n+1){
        for(int i=1;i<=n;i++){
            if(flag[i]==1){
                tot+=arr[i];
                idx++;
            }
        }
        if(tot==x && idx>0)
            res++;
        tot=0;
        idx=0;

        // cout<<"\n";
    }
    else{
        flag[m]=1;
        re(m+1);
        flag[m]=0;
        re(m+1);
    }

}

int main(){
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    re(1);
    cout<<res;
}