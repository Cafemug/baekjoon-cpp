#include <iostream>
using namespace std;
long long arra[1000001]={0,};
long long arrb[1000001]={0,};
long long arr[2000002]={0,};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,idxa=0,idxb=0,idx=0;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>arra[i];
    }
    for(int i=0;i<b;i++){
        cin>>arrb[i];
    }
    while(idxa<a && idxb<b){
        if(arra[idxa]<=arrb[idxb]){
            arr[idx]=arra[idxa];
            idx++;
            idxa++;
        }
        else{
            arr[idx]=arrb[idxb];
            idx++;
            idxb++;
        }
    }
    for(int i=idxa;i<a;i++){
        arr[idx] = arra[i];
        idx++;
    }
    for(int i=idxb;i<b;i++){
        arr[idx] = arrb[i];
        idx++;
    }
    for(int i=0;i<idx;i++){
        cout<<arr[i]<<" ";
    }
}