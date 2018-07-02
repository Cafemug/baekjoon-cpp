#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int n,l,temp=0,count=1;
    scanf("%d %d",&n,&l);
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[temp]+l-1<arr[i]){
            temp=i;
            count++;
        }

    }
    printf("%d",count);
    

}