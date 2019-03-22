#include <iostream>
#include <string.h>
using namespace std;
int arr[101][101]={0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int sum=0;
    memset(arr,0,sizeof(arr));
    for(int i=0;i<4;i++){
        int a1,b1,a2,b2;
       
        cin>>a1>>b1>>a2>>b2;
        for(int y=a1;y<a2;y++){
            for(int x=b1;x<b2;x++){
                    arr[y][x]=1;
            }
        }
    }
    for(int y=1;y<=100;y++){
        for(int x=1;x<=100;x++){
            if(arr[y][x]!=0){
                sum++;
            }
                
        }
    }
    cout<<sum;
}