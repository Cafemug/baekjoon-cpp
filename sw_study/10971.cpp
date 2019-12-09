#include <iostream>
using namespace std;
int board[11][11];
bool check[11][11];
bool next_per(int *a, int len){
    int i = len - 1;
    while(i>0 && a[i]<=a[i-1]) i--;
    if(i<=0) return false;
    int j= len-1;
    while(a[i-1]>=a[j]) j--;
    swap(a[i-1], a[j]);
    j = len - 1;
    while(i < j){
        swap(a[i], a[j]);
        i++; 
        j--;
    }
    return true;
}
int main(){
    int arr[11];
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,sum=0, res= 987654321;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>board[i][j];
        }
    }
    for(int i=0;i<n;i++){
        arr[i] = i+1;
    }
    do{
        sum=0;
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(board[arr[i]][arr[i+1]] == 0){
                flag = false;
            }
            else sum += board[arr[i]][arr[i+1]];
        }
        if(flag && board[arr[n-1]][arr[0]] != 0){
            sum += board[arr[n-1]][arr[0]];
            if(res>sum) res=sum;
        }
    }while(next_per(arr, n));
    cout<<res;
}