#include <iostream>
#include <cstdio>
using namespace std;
int arr[9][9]={0,};
int main(){
    int x,y,res=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>=res){
                res=arr[i][j];
                x=i;
                y=j;
            }
        }
    }
    printf("%d\n%d %d",res,x+1,y+1);

}