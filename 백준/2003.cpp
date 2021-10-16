#include <iostream>
using namespace std;
long long arr[100001]={0,};
int main(){
    int count=0;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        arr[i] += arr[i-1]+temp;
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(arr[j]-arr[i-1]==m)
                count++;
        }
    }
    cout<<count;
}
