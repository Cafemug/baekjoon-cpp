#include <iostream>
using namespace std;
const long n=1000000;
bool check[n+1];
int main(){
    int a;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(long i=2;i<=n;i++){
        if(check[i]==false){
            for(long j=i+i;j<=n;j+=i){
                check[j]=true;
            }
        }
    }
    while(1){
        cin>>a;
        if(a==0)
            break;
        for(int i=2;i<=a;i++){
            if(check[i]==false && i%2==1){
                if(check[a-i]==false){
                    cout<<a<<" = "<<i<<" + "<<a-i<<"\n";
                    break;
                }
            }
        }
    }
}