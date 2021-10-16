#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int flag=0;
    while(1){
        if(flag==1)
            break;
        flag=1;
        for(int i=1;i<5;i++){
            if(arr[i-1]>arr[i]){
                flag=0;
                int temp=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;
                printf("%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
        }
    }
    }
    
}