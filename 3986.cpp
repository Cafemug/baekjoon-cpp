#include <iostream>
#include <vector>
using namespace std;
int arr[2]={0,};
int main(){
    int n,count=0;
    cin>>n;
    while(n--){
        string s;
        vector<char> v;
        cin>>s;
        int s_len = s.size();
        int s_idx = 0;
        int flag = 1;
        while(s_idx<s_len){
            int v_len = v.size();
            if(v_len==0){
                v.push_back(s[s_idx]);
                if(s[s_idx]=='A')
                    arr[0] = ~arr[0];
                else
                    arr[1] = ~arr[1];
                s_idx++;
            }
            else{
                if(arr[0])
                if(v[v_len-1]==s[s_idx]){
                    s_idx++;
                    v.pop_back();
                }
                else{
                    if(v_len==1){
                        v.push_back(s[s_idx]);
                        s_idx++;
                    }
                    else{
                        flag = 0;
                        break;
                    }
                    
                }
            }

        }
        if(v.size() > 0 )
            flag = 0;
        if(flag)
            count++;
        
    }
    cout<<count;
}