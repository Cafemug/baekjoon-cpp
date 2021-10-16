#include <iostream>
using namespace std;
bool check[1000001]={1,1};
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=2;i*i<1000000;i++){
        if(check[i]) continue;
        for(int j=i*i;j<1000000;j+=i){
            check[j]=1;
        }
    }
    for(int i=a;i<=b;i++)
    if(!check[i]) cout<<i<<"\n";
}