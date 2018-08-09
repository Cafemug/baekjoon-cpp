#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long long arr[100001];
long long res=2000000001;
long long nx=1000000001;
long long resx;
long long resy;
bool compare(long long a,long long b){
    if(abs(a)>=abs(b))
        return 0;
    else    
        return 1;
}
int main(){
    long long n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,compare);
    for(int i=1;i<n;i++){
        long long temp=arr[i]+arr[i-1];
        if(abs(temp)<=res){
            long long num=min(arr[i],arr[i-1]);
            if(num<=nx){
                resx=arr[i];
                resy=arr[i-1];
                nx=num;
            }
            res=abs(temp);
        }
    }
    a=max(resx,resy);
    b=min(resx,resy);
    cout<<b<<" "<<a;
}