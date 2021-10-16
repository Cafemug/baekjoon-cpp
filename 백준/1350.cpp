#include <iostream>
using namespace std;
long long arr[1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,disk;
    long long sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>disk;
    for(int i=0;i<n;i++){
       long long temp=arr[i]/disk;
       long long na = arr[i]%disk;
       sum+=temp;
       if(na>0)
        sum+=1;
    }
    cout<<sum*disk;
}