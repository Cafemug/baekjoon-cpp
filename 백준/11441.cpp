#include <iostream>
using namespace std;
int arr[100001]={0,};
int p[100001]={0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
        p[i+1] = p[i] + arr[i];
    }
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        int a,b;
        cin>>a>>b;
        cout<<p[b]-p[a-1]<<"\n";
    }
}