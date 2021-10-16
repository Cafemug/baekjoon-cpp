#include <iostream>
using namespace std;
int arr[101][101]={0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,minb=987654321,mina=987654321,maxb=0,maxa=0,sum=0;
    cin>>n;
    while(n--){
        int a,b;
        cin>>b>>a;
        if(minb>b)
            minb=b;
        if(maxb<b)
            maxb=b;
        if(maxa<a)
            maxa=a;
        if(mina>a)
            mina=a;
        for(int i=a;i<a+10;i++){
            for(int j=b;j<b+10;j++){
                if(arr[i][j]!=0)
                    continue;
                arr[i][j]++;
            }
        }
    }
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            if(arr[i][j]!=0)
                sum++;
        }
    }
    cout<<sum;
    
}