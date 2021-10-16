#include <iostream>
#include <algorithm>
using namespace std;
int idx[101]={1,1,1,};
int arr[101];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,compare=987654321, res;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    do{
        int sum=0;
        for(int i=0;i<n;i++){
            if(idx[i]==1){
                sum+=arr[i];
            }
        }
        int diff=m-sum;
        if(diff<0) continue;
        if(diff<compare){
            compare = diff;
            res= sum;   
        }
    } while(prev_permutation(idx, idx+n));
    cout<<res;
}