#include <iostream>
using namespace std;
int arr[1001];
int v[1001];
int d[1001];
void recur(int x){
    if(x==-1) return;
    recur(v[x]);
    cout<<arr[x]<<" ";
}
int main(){
    int num,idx=0;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        d[i]=1;
        v[i]=-1;
        int temp=0;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]&& d[i] < d[j]+1){
                d[i] = d[j]+1;
                v[i] = j;
            }
        }
    }
    int res=0;
    for(int i=0;i<num;i++){
        if(res<d[i]) {
            res=d[i];
            idx=i;
        }
    }
    cout<<res<<"\n";
    recur(idx);
}