#include <iostream>
using namespace std;
int arr[302][302]={0,};
int dx[302][302]={0,};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y,sum=0;
    cin>>x>>y;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
            dx[i][j]=sum;
        }
    }
    for(int i=2;i<=x;i++){
        dx[i][0]=dx[i-1][y];
    }
            
    cin>>n;
    while(n--){
        int a,b,c,d,res=0;
        cin>>a>>b>>c>>d;
        for(int i=a;i<=c;i++){
            res+=(dx[i][d]-dx[i][b-1]);
        }
        cout<<res<<"\n";
    }

}