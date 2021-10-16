#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string b;
    int a,i=1;
    long long sum=0;
    cin>>b>>a;
    int len=b.size();
    reverse(b.begin(),b.end());
    for(int x=0;x<len;x++){
        if(isalpha(b[x])){
            int temp=b[x]-'A'+10;
            temp*=i;
            sum+=temp;
        }
        else{
            int temp=b[x]-'0';
            temp*=i;
            sum+=temp;
        }
        i*=a;
    }
    cout<<sum;
}