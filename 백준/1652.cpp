#include <iostream>
#include <cstdio>
using namespace std;
char arr[101][101];
int main(){
    int num,sum=1,res=0,tot1=0,tot2=0,idx;
    cin>>num;
    for(int i=0;i<num;i++){
        scanf("%s",arr[i]);
    }
    for(int i=0;i<num;i++){
        sum=1;
        res=0;
        idx=1;
        for(int j=0;j<num-1;j++){
            if(arr[i][j]=='.'){
                if(arr[i][j+1]=='.'){
                    sum++;
                }
                else{
                    idx=1;
                    sum=1;
                }
            }
            if(sum>=2 && idx==1){
                idx=0;
                tot1++;
            }
        
        }
        
    }
    for(int i=0;i<num;i++){
        sum=1;
        res=0;
        idx=1;
        for(int j=0;j<num-1;j++){
            
            if(arr[j][i]=='.'){
                if(arr[j+1][i]=='.'){
                    sum++;
                }
                else{
                    idx=1;
                    sum=1;
                }
            }
            if(sum>=2 && idx==1){
                idx=0;
                tot2++;
            }
        }
        
    }
    
    cout<<tot1<<" "<<tot2;
}