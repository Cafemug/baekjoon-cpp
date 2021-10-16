#include <iostream>
using namespace std;
int three[3]={1,2,3};
int d[10002]={0,};
int main(){
    int num;
    cin>>num;
    d[0]=1;
    for(int j=0;j<3;j++){
        for(int i=1;i<10002;i++){
            if(i-three[j]>=0)
                d[i] += d[i-three[j]];
           } 
    }
    while(num--){   
        int temp_num;
        cin>>temp_num;
        cout<<d[temp_num]<<"\n";
    }
}