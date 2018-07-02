#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int n,p;
    int arr[3]={0,};
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        scanf("%d",&p);
        if(p%2==0){
            arr[0]=p-1;arr[1]=n+1-p;arr[2]=n+1-(p-1);
            sort(arr,arr+3);
            printf("%d %d %d\n",arr[0],arr[1],arr[2]);
        }
        else{
            arr[0]=p+1;arr[1]=n+1-(p+1);arr[2]=n+1-p;
            sort(arr,arr+3);
            printf("%d %d %d\n",arr[0],arr[1],arr[2]);
        }
    }
}