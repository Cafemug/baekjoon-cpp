#include <iostream>
using namespace std;
int d[100001];
int main(){
    int n;
    cin>>n;
    d[1]=1;
    d[0]=0;
    for(int i=2;i<=n;i++){
        int temp=987654321;
        for(int j=1;j*j<=i;j++){
            if(temp>d[i-(j*j)]) temp = d[i-(j*j)];
        }
        d[i]=temp+1;
    }
    cout<<d[n]<<"\n";
}