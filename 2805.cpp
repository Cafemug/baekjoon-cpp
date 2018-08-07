#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
long long int arr[1000002];
long long int res[1000002];
int main(){
    long long int n,m,maxnum=0,left=0,right,sum=0,temp;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
        maxnum=max(arr[i],maxnum);
    }
    right=maxnum;
    while(left<=right){
        sum=0;
        long long mid=(left+right)/2;
        for(int i=0;i<n;i++){
            if(arr[i]<=mid)
                temp=0;
            else
                temp=arr[i]-mid;
            sum+=temp;
        }
        if(sum<m)
            right=mid-1;
        else
            left=mid+1;

    }
    cout<<right;
}