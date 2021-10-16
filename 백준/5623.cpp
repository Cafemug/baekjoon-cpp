#include <iostream>
#include <cstdio>
using namespace std;
int arr[1002][1002]={0,};
int res[1002]={0,};
int main(){
    int n;
    cin>>n;
    if(n==2){
        for(int x=0;x<n;x++){
            for(int y=0;y<n;y++){
                scanf("%d",&arr[x][y]);
            }
        }
        cout<<1<<" "<<arr[0][1]-1;
        return 0;
    }
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            scanf("%d",&arr[x][y]);
        }
    }
    for(int x=0;x<n;x++){
        if(x+2>=n && x+1<n){
            res[x]=(arr[x][x+1]+arr[x][0]-arr[x+1][0])/2;
        }
        else if(x+1>=n){
            res[x]=(arr[x][0]+arr[x][1]-arr[1][0])/2;
        }
        else{
            res[x]=(arr[x][x+1]+arr[x][x+2]-arr[x+1][x+2])/2;
        }
        

    }
    for(int x=0;x<n;x++){
        printf("%d ",res[x]);
    }
}