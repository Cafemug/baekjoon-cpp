#include <iostream>
#include <map>
using namespace std;
map<string,int, greater<string > > m;
map<string,int, greater<string > >::iterator iter;
int main(){
    int n,res=0;
    string keys;
    cin>>n;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        iter = m.find(temp);
        if(iter != m.end())
            (iter->second)++;
        else{
            m[temp]=0;
        }
    }
    for (iter = m.begin(); iter != m.end(); ++iter){
       if(iter->second > res){
           res = iter->second;
           keys = iter->first;
       }
    }
    cout<<keys;
}