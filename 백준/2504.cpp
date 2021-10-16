#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main(){
    string s;
    cin>>s;
    int sum=0;
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]=='('){
            v.push_back(-1);
        }
        else if(s[i]=='['){
            v.push_back(-2);
        }
        else if(s[i]==')'){
            if(v.empty()){
                cout<<0;
                return 0;
            }
            int x=v.back();
            if(x==-2){
                cout<<0;
                return 0;
            }
            if(x==-1){
                v.pop_back();
                v.push_back(2);
            }
            else{
                while(1){
                    if(v.empty()){
                        cout<<0;
                        return 0;
                    }
                    int t=v.back();
                    if(t==-2){
                        cout<<0;
                        return 0;
                    }
                    if(t==-1){
                        v.pop_back();
                        v.push_back(sum);
                        sum=0;
                        break;
                    }
                    else{
                        t*=2;
                        sum+=t;
                        v.pop_back();
                    }
                }
            }
        }
        else if(s[i]==']'){
            if(v.empty()){
                cout<<0;
                return 0;
            }
            int x=v.back();
            if(x==-1){
                cout<<0;
                return 0;
            }
            if(x==-2){
                v.pop_back();
                v.push_back(3);
            }
            else{
                while(1){
                    if(v.empty()){
                        cout<<0;
                        return 0;
                    }
                    int t=v.back();
                    if(t==-1){
                        cout<<0;
                        return 0;
                    }
                    if(t==-2){
                        v.pop_back();
                        v.push_back(sum);
                        sum=0;
                        break;
                    }
                    else{
                        t*=3;
                        sum+=t;
                        v.pop_back();
                    }
                }
            }
        }
    }
    sum=0;
    while(!v.empty()){
        int x=v.back();
        //<<x<<"\n";
        if(x==-1 || x==-2){
            cout<<0;
            return 0;
        }
        sum+=x;
        v.pop_back();
    }
    cout<<sum;
}