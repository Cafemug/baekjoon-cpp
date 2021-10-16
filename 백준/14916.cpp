#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a==1 || a==3){
        cout<<-1;
        return 0;
    }
    else if(a%5==0){
        cout<<a/5;
        return 0;
    }
    else if(a%5==1 || a%5==3){
        int temp=a-((a/5-1)*5);
        cout<<a/5-1+temp/2;
        return 0;
    }
    else if(a%5==2 || a%5==4){
        int temp=a-((a/5)*5);
        cout<<a/5+temp/2;
        return 0;
    }

}