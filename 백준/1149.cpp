#include <iostream>
using namespace std;
const int MAX=100002;
long long red[MAX];
long long green[MAX];
long long blue[MAX];
long long d[MAX][3];
int main(){
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>red[i];
        cin>>green[i];
        cin>>blue[i];
    }
    d[1][0]=red[1];
    d[1][1]=green[1];
    d[1][2]=blue[1];
    for(int i=2;i<=n;i++){
        d[i][0]=min((red[i]+d[i-1][1]),(red[i]+d[i-1][2]));
        d[i][1]=min((green[i]+d[i-1][0]),(green[i]+d[i-1][2]));
        d[i][2]=min((blue[i]+d[i-1][1]),(blue[i]+d[i-1][0]));
    }
    long long res=min(d[n][0],min(d[n][1],d[n][2]));
    cout<<res;
}