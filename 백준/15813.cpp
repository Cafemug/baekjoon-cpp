#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    string s;
    cin>>num;
    cin>>s;
    for(int i=0;i<num;i++){
        int temp=s[i]-'A'+1;
        sum+=temp;
    }
    cout<<sum;
}