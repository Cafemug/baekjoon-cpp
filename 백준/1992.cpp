#include <iostream>
#include <cstdio>
using namespace std;
const int MAX =100;
int arr[MAX][MAX];
int idx=0,idx1=0,idx0=0;

void quard(int xstart,int xend,int ystart,int yend){
    idx1=0;
    idx0=0; 
    idx=0;
    for(int i=xstart;i<=xend;i++){
        for(int j=ystart;j<=yend;j++){
            
            if(arr[i][j]==1){
                idx1++;  
            }
            else{
                idx0++;
            } 
            if(idx0!=0 && idx1!=0){
                idx=1;
                break;
            }           
        }
    }
    
    if(idx!=1){
        if(idx0)
            cout<<0;
        else    
            cout<<1;
    }
    else{
        cout<<"(";
        quard(xstart,(xstart+xend)/2,ystart,(ystart+yend)/2);
        quard(xstart,(xstart+xend)/2,(ystart+yend)/2+1,yend);
        quard((xstart+xend)/2+1,xend,ystart,(ystart+yend)/2);
        quard((xstart+xend)/2+1,xend,(ystart+yend)/2+1,yend);
        cout<<")";
    }
}
int main(){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
           scanf("%1d",&arr[i][j]);
       }
   } 
   quard(1,n,1,n);
}