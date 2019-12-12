#include <iostream>
using namespace std;
long long gcd(long long a, long long b){
    if(b == 0)
        return a;
    else
        return gcd(b,a%b);
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long arr[101];
        long long sum_num=0;
        int n;
        cin>>n;
        for(int x=0;x<n;x++){
            cin>>arr[x];
        }
        for(int p=0;p<n-1;p++){
            for(int q=p+1;q<n;q++){
                sum_num += gcd(arr[p], arr[q]);
            }
        }
        cout<<sum_num<<"\n";
    }
}