#include <iostream>
#include <cstdio>
using namespace std;
int arr[102][102]={0,};
int count[102]={0,};
int main(){
    int a,q,p,x,y;
    cin>>a;
    for(int t=1;t<=a;t++){
    cin>>p>>q>>x>>y;
    for(int i=q;i<q+y;i++){
        for(int j=p;j<p+x;j++){
                arr[i][j]=t;
                //cout<<arr[i][j];
        }
    }
   }
    for(int i=0;i<102;i++){
        for(int j=0;j<102;j++){
                count[arr[i][j]]++;
        }
    }
    for(int i=1;i<=a;i++){
        printf("%d\n",count[i]);
    }
}