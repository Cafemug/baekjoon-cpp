// 날짜계산
#include <iostream>
using namespace std;
int main(){
    int a,b,c,res=10
    cin>>a>>b>>c;
    while(res++){
        if((res-a)%15==0 && (res-b)%28==0 && (res-c)%19==0)
            break;
    }
    cout<<res;
}