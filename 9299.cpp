#include <iostream>
using namespace std;
int arr[102];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int pox;
        cin>>pox;
        for(int t=1;t<=pox+1;t++){
            cin>>arr[t];
        }
        cout<<"Case "<<i<<": "<<pox-1<<" ";
        for(int t=pox;t>0;t--){
            cout<<t*arr[pox-t+1]<<" ";
        }
        cout<<"\n";
    }
}