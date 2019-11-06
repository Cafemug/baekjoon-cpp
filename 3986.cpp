#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n--){
        vector<char> v;
        string s;
        int flag=1;
        cin>>s;
        int len = s.size();
        for(int i=0;i<len;i++){
            int vlen = v.size();
            if(vlen==0){
                v.push_back(s[i]);
                continue;
            }
            if(v[vlen-1]==s[i]){
                v.pop_back();
                continue;
            }
            if(vlen<=2){
                v.push_back(s[i]);
            }
            else{
                if(v[vlen-1]!=s[i]){
                    flag=0;
                    break;
                }
                else{
                    v.pop_back();
                }
            }
        }
        if(flag)
            count++;
    }
    cout<<count;
}