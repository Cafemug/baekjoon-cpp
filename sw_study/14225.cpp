#include <iostream>
#include <algorithm>
using namespace std;
int s[21];
int main(){
    int n,sum;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s, s+n);
    sum = s[0];
    if(sum!=1){
        cout<<1;
        return 0;
    }
    for(int i=1;i<n;i++){
        if(sum+1<s[i]){
            cout<<sum+1;
            return 0;
        }
        sum+=s[i];
    }
    
    cout<<sum+1;
}