#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    string arr="0123";
    char c,d,temp,x,y;
    int m,a,b;
    scanf("%d",&m);
    while(m--){
        scanf("%d %d",&a,&b);
        c=a+'0';
        d=b+'0';
        x=arr.find(c);
        y=arr.find(d);
        temp=arr[x];
        arr[x]=arr[y];
        arr[y]=temp;
        cout<<arr;
        cout<<"\n";
    }
    cout<<arr[1];
}