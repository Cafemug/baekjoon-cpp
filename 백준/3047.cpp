#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int arr[3]={0,};
    int a,b,c;
    string abc;
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    cin>>abc;
    a=abc[0]-65;
    b=abc[1]-65;
    c=abc[2]-65;
    printf("%d %d %d",arr[a],arr[b],arr[c]);
}