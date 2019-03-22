#include <iostream>
using namespace std;
int arr[102];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        long long a,b;
        cin>>a>>b;
        long long idx,res;
        idx=a/b;
        res=a%b;
        cout<<"Case "<<i<<": ";
        if(idx==0 && res==0)
            cout<<0;
        if(idx!=0)
            cout<<idx<<" ";
        if(res!=0)
            cout<<res<<"/"<<b;
        
        cout<<"\n";
    }
}