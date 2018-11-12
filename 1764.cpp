#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    map<string, int> m;
    vector<string> v;
    string s;
    int a,b;
    cin>>a>>b;
    for(int i=0; i<a;i++){
        cin>>s;
        m[s]=1;
    }
    for(int i=0; i<b;i++){
        cin>>s;
        auto itr=m.find(s);
        if(itr!=m.end()){
            v.push_back(s);
        }
    }
    sort(v.begin(),v.end());
    int len=v.size();
    cout<<len<<"\n";
    for(int i=0; i<len;i++){
        cout<<v[i]<<"\n";
    }
}