#include <iostream>
#include <algorithm>
using namespace  std;
int main(){
    int a,b,c;
    int arr[3];
    while(1){
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
            break;
        arr[0]=a;arr[1]=b;arr[2]=c;
        sort(arr,arr+3);
        if(arr[2]<arr[1]+arr[0]){
            if(a==b && b==c && c==a)
                cout<<"Equilateral"<<"\n";
            else{
                if(a!=b && b!=c && c!=a)
                    cout<<"Scalene"<<"\n";
                else if(a==b || b==c || c==a)
                    cout<<"Isosceles"<<"\n";
            }
        }
        else
            cout<<"Invalid"<<"\n";
    }
}