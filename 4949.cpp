#include <iostream>
#include <vector>
using namespace std;
int main(){
    while(1){
        vector<char> v;
        string s;
        getline(cin, s);
        if(s=="."){
            break;
        }
        int len = s.size();
        int flag =1;
        for(int i=0;i<len;i++){
            if(s[i]=='['){
                v.push_back('[');
            }
            else if(s[i]==']'){
                if(v.size()==0){
                    flag=0;
                    break;
                }
                char temp_char = v.back();
                if(temp_char != '['){
                    flag=0;
                    break;
                }
                v.pop_back();
            }
            else if(s[i]=='('){
                v.push_back('(');

            }
            else if(s[i]==')'){
                if(v.size()==0){
                    flag=0;
                    break;
                }
                char temp_char = v.back();
                if(temp_char != '('){
                    flag=0;
                    break;
                }
                v.pop_back();
            }
            else continue;
        }
        if(v.size()!=0) flag=0;
        if(flag) cout<<"yes\n";
        else cout<<"no\n";
    }
    
}