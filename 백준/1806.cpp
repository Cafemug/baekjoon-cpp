#include <iostream>
using namespace std;
long long arr[100002];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long num, s;
    cin>>num>>s;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    long long temp_num = arr[0];
    int left=0, right=0, res=987654321, flag=1;
    while(left<=right && right<num){
        if(temp_num >= s){
            flag=0;
            temp_num -= arr[left];
            if(res>(right-left)) res= right-left;
            left++;
        }
        else{
            right++;
            temp_num += arr[right];
            
        }

    }
    if(flag) cout<<0;
    else cout<<res+1;
}