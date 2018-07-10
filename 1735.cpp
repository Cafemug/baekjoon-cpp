#include <iostream>
using namespace std;
int main(){
    int a,b,x,y,za,mo,r=1,resx,resy;
    cin>>a>>b>>x>>y;
    za=a*y+b*x;
    mo=b*y;
    resx=za;
    resy=mo;
    while(1){
        r=mo%za;
        if(r!=0){
            mo=za;
            za=r;
        }
        else
            break;
    }
    cout<<resx/za<<" "<<resy/za;
}