#include <iostream>
#include <algorithm>
using namespace std;
int find_str(string t, int index, string s){
    if(index<0){
        return 0;
    }
    if(t==s){
        return 1;
    }
    if(t[index]=='B'){
        string temp = t.substr(0, t.size()-1);
        reverse(temp.begin(), temp.end());
        return find_str(temp, index-1, s);
    }
    else{
        return find_str(t.substr(0, t.size()-1), index-1, s);
    }
}
int main(){
    string s,t;
    cin>>s>>t;
    int tlen= t.size();
    int answer = find_str(t,tlen-1,s);
    cout<<answer;
}