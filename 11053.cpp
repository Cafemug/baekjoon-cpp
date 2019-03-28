#include <iostream>
using namespace std;
int d[1001]={0,};
int arr[1001]={0,};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,idx,res=0;
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>arr[i];
    }
    
    for(int i=1;i<=a;i++){
        idx=0;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                if(idx<d[j])
                    idx=d[j];
            }
            d[i]=idx+1;
            if(res<d[i])
                res=d[i];
        }

    }
    cout<<res;   
}