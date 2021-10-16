#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n,temp,res=0,tot=1;
int num[4]={0,};
char arr[60][60];
void check(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[i][j]==arr[i][j+1]){
                tot++;
            }
            else{
                res=max(res,tot);
                tot=1;
            }
        }
        res=max(res,tot);
        tot=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j][i]==arr[j+1][i]){
                tot++;
            }
            else{
                res=max(res,tot);
                tot=1;
            }
        }
        res=max(res,tot);
        tot=1;
    }
}
int main(){
    
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            temp=arr[i][j];
            arr[i][j]=arr[i][j+1];
            arr[i][j+1]=temp;
            check();
            temp=arr[i][j];
            arr[i][j]=arr[i][j+1];
            arr[i][j+1]=temp;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            temp=arr[j][i];
            arr[j][i]=arr[j+1][i];
            arr[j+1][i]=temp;
            check();
            temp=arr[j][i];
            arr[j][i]=arr[j+1][i];
            arr[j+1][i]=temp;
        }
    }
    cout<<res;
}