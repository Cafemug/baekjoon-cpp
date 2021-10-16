#include <cstdio>
#include <iostream>
using namespace std;
long long int arr[100003]={0,};
long long int distan[100003]={0,};
int main(){
    long long int num,temp,x=1,count=0,r=1,s,idx=1;
    long long int res=999999999;
    cin>>num;
    for(int i=0;i<num;i++){
        scanf("%lld",&arr[i]);
    }
    
    for(long long int i=1;i<num;i++){
        temp=arr[i]-arr[i-1];
        distan[i]=temp;
        if(res>=temp)
            res=temp;
    }
    for(r=res;r>=1;r--){
        idx=1;
        for(long long int i=1;i<num;i++){
            if(distan[i]%r!=0){
                idx=0;
                break;
            }
        }
        if(idx){
            break;
        }
    }
    while(x<num){
        for(long long int n=1;n<=1000000000;n++){
            if(arr[x]!=arr[x-1]+r*n){
                count++;
            }
            else{
                //cout<<"c "<<count<<"\n";
                x++;
                break;
            }
        }
        // if(x==num-1)
        //     x++;
    }
    printf("%lld",count);
}