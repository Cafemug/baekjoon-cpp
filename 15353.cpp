#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
char arr1[10001];
char arr2[10001];
int res[10001]={0,};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,temp=0;
    cin>>arr1>>arr2;
    int len1=strlen(arr1);
    int len2=strlen(arr2);
    reverse(arr1,arr1+len1);
    reverse(arr2,arr2+len2);
    int len=(len1<=len2?len1:len2);
    for(int i=0;i<len;i++){
        a=arr1[i]-'0';
        b=arr2[i]-'0';
        res[i]=a+b+temp;
        temp=0;
        if(res[i]>9){
            res[i]%=10;
            temp=1;
        }
    }
    
    if(len1>len2){
        for(int i=len2;i<len1;i++){
            a=arr1[i]-'0';
            res[i]=a+temp;
            temp=0;
            if(res[i]>9){
                res[i]%=10;
                temp=1;
            }
        }
        if(temp==1)
            cout<<1;
        
        for(int i=len1-1;i>-1;i--)
            cout<<res[i];

    }
    else if(len1<len2){
        for(int i=len1;i<len2;i++){
            a=arr2[i]-'0';
            res[i]=a+temp;
            temp=0;
            if(res[i]>9){
                res[i]%=10;
                temp=1;
            }
        }
        if(temp==1)
            cout<<1;
        for(int i=len2-1;i>-1;i--)
            cout<<res[i];
    }
    else{
        if(temp==1)
            cout<<1;
        
        for(int i=len-1;i>-1;i--)
            cout<<res[i];
    }
}