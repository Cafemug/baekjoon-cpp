#include <iostream>
#include <cstdio>
using namespace std;
int arr[10];
void cal(int n,int tot){
    while(n>0){
        arr[n%10]+=tot;
        n/=10;
    }
}
int main(){
    int end,start=1,tot=1;
    cin>>end;
    while(start<=end){
        while(end%10!=9 && start<=end){
            cal(end,tot);
            end--;
        }
        if(end<start)
            break;
        
        while(start%10!=0 && start<=end){
            cal(start,tot);
            start++;
        }
        start/=10;
        end/=10;
        for(int i=0;i<10;i++){
            arr[i]+=(end-start+1)*tot;
        }
        tot*=10;
    }
     for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}