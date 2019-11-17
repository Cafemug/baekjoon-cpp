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
        if(len%2!=0){
            flag=0;
        }
        else{
            for(int i=0;i<len;i++){
                int vlen = v.size();
                if(vlen==0 || (vlen ==1 && v[vlen-1]!=s[i])){
                    v.push_back(s[i]);
                    continue;
                }
                if(v[vlen-1]==s[i]){
                    v.pop_back();
                }
                else{
                        flag=0;
                        break;
                }
            }
        }
        if(flag)
            count++;
    }
    cout<<count;
}