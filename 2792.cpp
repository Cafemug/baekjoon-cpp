#include <iostream>
using namespace std;
long long n,m,k=1000000000;
long long arr[300001];
int main(){
    cin>>n>>m;
    long long res=0;
    for(int i=0;i<m;i++){
        cin>>arr[i];
        if(res<arr[i])
            res=arr[i];
    }
    long long lef=1,righ=res;
    while(lef<=righ){
        long long mid=(lef+righ)/2;
        long long sum=0;
        for(int i=0;i<m;i++){
            sum+=(arr[i]/mid);
            if(arr[i]%mid!=0)
                sum++;
        }
        if(sum>n)
            lef=mid+1;
        else{    
            righ=mid-1;
            if(mid<k)
                k=mid;
        }
        

    }
    cout<<k;
}