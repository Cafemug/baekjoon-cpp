#include <iostream>
using namespace std;
int arr[1002];
int main(){
    int n,w,l;
    cin>>n>>w>>l;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=0, between=0, res=0;
    while(x<n){
        int sum=0;
        int flag=1;
        for(int y=x;y<n;y++){
            sum+=arr[y];
            if(sum>l){
                res+=(w+1)+(y-x-1); 
                x=y;
                between++;
                flag=0;
                break;
            }
        }
        if(flag){
            res+=(w+1)+(n-x-1); 
            x=n;
        }
    }
    cout<<res-between;
}