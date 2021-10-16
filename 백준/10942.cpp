#include <iostream>
#include <cstring>
using namespace std;
int d[2002][2002]={-1,};
int arr[2002];
int go(int x, int y){
    if(x==y) return 1;
    else if(y==x+1){
        if(arr[x]==arr[y]) return 1;
        else return 0;
    }
    if (d[x][y]>=0) return d[x][y];
    if (arr[x]!=arr[y]) return d[x][y]=0;
    else return d[x][y] = go(x+1,y-1);
}

int main(){
    ios_base::sync_with_stdio(0);
    memset(d,-1,sizeof(d));
    cin.tie(0);
    cout.tie(0);
    int num;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        cin>>arr[i];
    }
    int num2;
    cin>>num2;
    while(num2--){
        int start,end;
        cin>>start>>end;
        cout<<go(start,end)<<"\n";
    }
    
}