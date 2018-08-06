#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n-->0){
        int a,b;
        cin>>a>>b;
        int c=a/b;
        if(a*a>(b*b*c*c))
            cout<<(c*c)+1<<"\n";
        else
            cout<<(c*c)<<"\n";
    }
    return 0;
}