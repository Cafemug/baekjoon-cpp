#include <iostream>
#include <vector>
using namespace std;
long long int arr[100003];
vector<long long int> v;
int main(){
    long long int n,m,res=0;
    cin>>n;
    for(long long int i=0;i<n;i++){
            cin>>m;
            arr[i]=m;
    }
    for(long long int i=0;i<n;i++){
        while(!v.empty() && arr[v.back()]>arr[i]){
            long long int x=arr[v.back()];
            v.pop_back();
            long long int w=i;
            if(!v.empty()){
                w=i-v.back()-1;
            }
            if(res<x*w)
                res=x*w;
        }
        v.push_back(i);
    }
    while(!v.empty()){
        int x=arr[v.back()];
        v.pop_back();
        long long int w=n;
        if(!v.empty()){
                w=n-v.back()-1;
            }
            if(res<x*w)
                res=x*w;
    }
    cout<<res;
}