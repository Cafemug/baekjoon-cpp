#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,tot=0,res=0,idx=0;
    for(int i=0;i<10;i++){
        cin>>a;
        tot+=a;
        if(!idx){
            if(abs(res-100)>=abs(tot-100))
                res=tot;
            else{
                
                idx=1;
            }
        }
    }
    cout<<res;
}