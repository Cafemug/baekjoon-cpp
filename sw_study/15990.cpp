#include <iostream>
using namespace std;
long long d[100002][3];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    d[1][0]=1;d[1][1]=0;d[1][2]=0;
    d[2][0]=0;d[2][1]=1;d[2][2]=0;
    d[3][0]=1;d[3][1]=1;d[3][2]=1;
    for(int i=4;i<=100000;i++){
        d[i][2]= (d[i-3][0]+d[i-3][1])%1000000009;
        d[i][1]= (d[i-2][0]+d[i-2][2])%1000000009;
        d[i][0]= (d[i-1][1]+d[i-1][2])%1000000009;
    }
    while(n--){
        int num;
        cin>>num;
        cout<<(d[num][0]+d[num][1]+d[num][2])%1000000009<<"\n";
    }
}
