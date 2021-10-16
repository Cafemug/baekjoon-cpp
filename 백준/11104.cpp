#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
    int n;
    string arr;
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        cin>>arr;
        int a=1,res=0,temp,t;
        for(int i=23;i>=0;i--){
            t=arr[i]-'0';
            temp=t*a;
            res+=temp;
            a*=2;
        }
        printf("%d\n",res);
      
    }
}