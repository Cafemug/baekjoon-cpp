#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int arr[246913]={0,};
int main(){
    double len;
    int num=1,count=0;
    arr[1]=1;
   for(int i=4;i<=246913;i++){
       len=sqrt(i);
       for(int j=2;j<=len;j++){
           if(i%j==0){
                arr[i]=1;
                break;
           }
       }
   }
   while(1){
    
    count=0;
    scanf("%d",&num);
    if(num==0)
        return 0;
    for(int i=num+1;i<=2*num;i++){
        if(arr[i]==0)
            count++;
    }
    printf("%d\n",count);
   }

}