#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,a=1,count=0,temp,t,su=0;
    string arr;
    string res="";
    char s;
    cin>>arr;
    n=arr.size();       
    for(int i=n-1;i>=0;i--){
        t=arr[i]-'0';
        temp=t*a;
        su+=temp;
        count++;
        if(count%3==0){
            s=su+'0';
            res+=s;
            temp=0;
            su=0;
            a=1;
        }else{
        a*=2;
        }
    }
    if(count%3!=0){
            s=su+'0';
            res+=s;    
        }
    reverse(res.begin(),res.end());
    cout<<res;
      
    
}