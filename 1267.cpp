#include <iostream>
using namespace std;
int arr[21];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,y=0,m=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        int ty=(arr[i]/30+1)*10;
        int tm=(arr[i]/60+1)*15;
        y+=ty;
        m+=tm;
    }
    if(y==m)
        cout<<"Y"<<" M "<<y;
    else if(y>m)
        cout<<"M "<<m;
    else
        cout<<"Y "<<y;
    

}