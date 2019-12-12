#include <iostream>
using namespace std;
long long arr[100001]={0,};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        arr[i] += arr[i-1]+temp;
    }
    while(m--){
        int a,b;
        cin>>a>>b;
        cout<<arr[b]-arr[a-1]<<"\n";
    }
}