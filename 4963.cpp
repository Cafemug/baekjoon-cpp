#include <iostream>
#include <cstdio>
using namespace std;
int ix[]={0,0,-1,1,1,-1,1,-1};
int iy[]={1,-1,0,0,1,-1,-1,1};
int arr[53][53]={0,};
int x,y,k=0;
void re(int m,int n){
    arr[m][n]=0;
    for(int i=0;i<8;i++){
        int nx=m+ix[i];
        int ny=n+iy[i];
        if (nx < 0 || nx > x|| ny < 0 || ny > y) 
            continue;
		if (arr[nx][ny] == 1) 
            re(nx, ny);
    }
}
int main(){
    while(1){
        cin>>y>>x;
        k=0;
        if(y==0 && x==0)
            break;
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(arr[i][j]==1){
                    k++;
                    re(i,j);
                }
            }
        }
        
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                arr[i][j]=0;
            }
        }
        cout<<k<<"\n";
    }
}