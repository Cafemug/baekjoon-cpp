#include <iostream>
using namespace std;
int main(){
    long t,a,res=0;
    cin>>t;
    while(t-->0){
        cin>>a;
        res=0;
        for(int i=1;i<=a;i++)
            res+=(i*(i+1)*(i+2)/2);
        cout<<res<<"\n";
    }
}