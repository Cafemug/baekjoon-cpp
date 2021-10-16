#include <iostream>
#include <cstdio>
using namespace std;
const int MAX =150;
int arr[MAX][MAX];
int idx=0,idx1=0,idx0=0,res0=0,res1=0;

void quard(int xstart,int xend,int ystart,int yend){
    idx1=0;
    idx0=0; 
    idx=0;
    if(xstart>xend || ystart >yend)
        return;
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
    if(idx){
        quard(xstart,(xstart+xend)/2,ystart,(ystart+yend)/2);
        quard(xstart,(xstart+xend)/2,(ystart+yend)/2+1,yend);
        quard((xstart+xend)/2+1,xend,ystart,(ystart+yend)/2);
        quard((xstart+xend)/2+1,xend,(ystart+yend)/2+1,yend);

    }
    else{
        if(idx0)
            res0++;
        else    
            res1++;
        return;
    }
}
int main(){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
           cin>>arr[i][j];
       }
   } 
   quard(1,n,1,n);
   cout<<res0<<"\n";
   cout<<res1<<"\n";
}