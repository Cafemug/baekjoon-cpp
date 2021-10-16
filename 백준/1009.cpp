#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,r;
    cin>>a;
    for(int i=0; i<a; ++i){
        r=1;
        cin>>b>>c;
        while(c!=0){
            if(c & 1 !=0)
                r=(r*b) % 10;
            b= b*b%10;
            c>>=1;
        }
        cout<<r<<"\n";
    }
}