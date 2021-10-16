#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i=2,sum=1,res,idx;
    cin>>n;
    if(n==1){
        cout<<"1/1";
        return 0;
    }
    while(true){
        if(sum<n && n<=sum+i){
            break;
        }
        sum+=i;
        i++;
    }
    res=n-sum;
    idx=i%2;
    if(idx==1){
        cout<<i-res+1<<"/"<<res;
    }
    else{
        cout<<res<<"/"<<i-res+1;
    }


    
}