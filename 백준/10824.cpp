#include <iostream>
using namespace std;
string a,b,c,d,x,y;
unsigned long long anum=0,bnum=0,xlen,ylen,i,j=1;
int main(){
    cin>>a>>b>>c>>d;
    x=a+b;
    y=c+d;
    xlen=x.size();
    ylen=y.size();
    for(int i=xlen-1;i>=0;i--){
        int temp=x[i]-'0';
        anum+=(temp*j);
        j*=10;
    }
    j=1;
    for(int i=ylen-1;i>=0;i--){
        int temp=y[i]-'0';
        bnum+=(temp*j);
        j*=10;
    }
    cout<<anum+bnum;
}