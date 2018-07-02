#include <iostream>
using namespace std;
int main(){
    int n,t,task,total=0,count=0;
    cin>>n>>t;
    while(n--){
        cin>>task;
        total+=task;
        if(total>t)
            break;
        count++;
    }
    cout<<count;
}