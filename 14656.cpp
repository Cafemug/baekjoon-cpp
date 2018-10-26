#include <cstdio>
#include <iostream>
using namespace std;
int arr[20005];
int main(){
    int num,sum=0;
    cin>>num;
    for (int i=1;i<=num;i++){
        int temp;
        cin>>temp;
        if(temp!=i)
            sum++;       
    }
    cout<<sum;
}