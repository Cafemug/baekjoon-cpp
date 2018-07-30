#include <iostream>
using namespace std;
int num;
int arr[103][103];
long long int  d[103][103];

int main(){
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cin>>arr[i][j];
        }
    }
    d[1][1]=1;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(arr[i][j]==0){
                continue;
            }
            if(i+arr[i][j]<=num)
                d[i+arr[i][j]][j]+=d[i][j];
            if(j+arr[i][j]<=num)
                d[i][j+arr[i][j]]+=d[i][j];
        }
    }
    cout<<d[num][num];
}