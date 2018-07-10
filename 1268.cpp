#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int arr[1002][7]={0,};
int main(){
    int n,count=0,res=0,temp=-1;
    int co[1002]={0,};
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int x=0;x<n;x++){
        for(int y=0;y<5;y++){
            for(int z=0;z<n;z++){
                if(arr[x][y]==arr[z][y])
                    co[z]++;
            }
        }
        for(int z=0;z<n;z++){
                if(co[z]!=0){
                    count++;
                    co[z]=0;
                }
        }
        
        if(temp<count){
            temp=count;
            count=0;
            res=x;
        }
        else{
            count=0;
        }
    }
    cout<<res+1;
}