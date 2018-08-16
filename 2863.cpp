#include <iostream>
using namespace std;
int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double arr[10];
    arr[0]=a/c+b/d;
    arr[1]=c/d+a/b;
    arr[2]=d/b+c/a;
    arr[3]=b/a+d/c;
    double ma=max(max(arr[0],arr[1]),max(arr[2],arr[3]));
    for(int i=0;i<4;i++){
        if(arr[i]==ma){
            cout<<i;
            return 0;
        }
    }
}