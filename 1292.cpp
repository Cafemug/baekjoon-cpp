#include <iostream>
using namespace std;
int arr[1001]={0,};
int main(){
    int val=1,count=1;
    for(int i=1;i<1001;i++){
        arr[i]=val+arr[i-1];
        if(val!=count){
            count++;
        }
        else{
            count=1;
            val++;
        }
    }
    int a,b;
    cin>>a>>b;
    cout<<arr[b]-arr[a-1];
}