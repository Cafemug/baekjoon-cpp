#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
long long arr[18],ori[18];
char idx[18];
long long int n,temp,res;
void re(int m){
    if(m==n-1){
        for(int t=0;t<n;t++){
            if(t+2>n){
                continue;
            }
            if(idx[t]==' '){
                temp=arr[t+2];
                if(temp>=10){
                    arr[t+1]*=100;
                    temp%=10;
                    
                }
                else{
                    arr[t+1]*=10;
                }
                arr[t+2]+=arr[t+1];
                arr[t+1]=0;
            }
        }
        int ia=0,tt;
        for(int i=1;i<=n;i++){
            if(arr[i]!=0){
                tt=i+1;
                res=arr[i];
                break;
            }
        }
        while(ia<n){
            if(tt>n)
                break;
            if(arr[tt]==0){
                tt++;
                continue;
            }
            else if(idx[ia]==' '){
                ia++;
                continue;
            }
            if(idx[ia]=='+'){
                //cout<<"+\n";
                res+=arr[tt];
            }
            else if(idx[ia]=='-'){
                //cout<<"-\n";
                res-=arr[tt];
            }
            tt++;
            ia++;
        } 
        for(int i=1;i<=n;i++){
            arr[i]=i;
        }
         
        if(res==0){
            for(int i=0;i<n;i++){
                cout<<arr[i+1];
                if(i!=n-1)
                    cout<<idx[i];
            }
            cout<<"\n";
         }
    }
    if(m>n)
        return;
    else{
            idx[m]=' ';
            re(m+1);
            idx[m]='+';
            re(m+1);
            idx[m]='-';
            re(m+1);      
    }
}
int main(){
    int num;
    cin>>num;
    while(num-->0){
        cin>>n;
        for(int i=1;i<=n;i++){
            arr[i]=i;
        }        
        re(0);
        cout<<"\n";
    }
}