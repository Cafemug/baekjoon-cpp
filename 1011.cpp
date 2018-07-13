#include <iostream>
#include <cstdio>
using namespace std;
 
int main(){
    int count=1,t;
    long long int x=1,temp=0,i=1,a,b,res1,res2,res3,res4;
    cin>>t;
    while(t-->0){
    cin>>a>>b;
    count=1;
    i=1;
    temp=0;
    x=1;
    while(temp<b-a){
        temp+=x;
        
        //cout<<"temp "<<temp<<"\n";
        if(count==2){
            x++;
            count=1;
        }else{
            count++;
        }
        
        i++;
        //cout<<"i "<<i<<"\n";
    }
    i--;
    // for(long long int k=0;k<i;k++){
    //     if(b-a==arr[k]){
    //         res1=k;
    //         break;
    //         }
    //     else if(b-a<arr[k]){
    //         res1=k-1;
    //         break;
    //     }
    // }
    
    cout<<i<<"\n";
}
}