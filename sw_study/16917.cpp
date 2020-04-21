#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long a,b,c,x,y,answer=0;
    cin>>a>>b>>c>>x>>y;
    if(x>=y){
        long long diff = x-y;
        answer = min((y*2*c+diff*a),(x*a+b*y));     
        answer = min(answer, x*2*c);
    }
    else{
        long long diff = y-x;
        answer = min((x*2*c+diff*b),(x*a+b*y)); 
        answer = min(answer, y*2*c);
    }
    cout<<answer;
}