#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int s[12][12];
int n;
bool check(int index, vector<int>& v){
    for(int i=0;i<index;i++){
        int temp=0;
        for(int j=i;j<=index;j++){
            temp+=v[j];
        }
        if(s[i][index]==0){
            if(temp!=0) return false;
        }
        else if(temp*s[i][index]<=0) return false;
    }
    return true;
}
void go(int index, vector<int>& v){
    if(index == n){
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        exit(0);
    }
    int temp;
    if(s[index][index]==0){
        temp =0;
        v.push_back(temp);
        if(index ==0 ||(index !=0 && check(index, v))){
            go(index+1,v);
        }
        v.pop_back();
    }
    for(int i=1;i<=10;i++){
        temp = s[index][index] * i;
        v.push_back(temp);
        if(index ==0 ||(index !=0 && check(index, v))){
            go(index+1,v);
        }
        v.pop_back();
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            char chr;
            cin>>chr;
            if(chr == '-') s[i][j] =-1;
            else if(chr == '+') s[i][j] = 1;
            else s[i][j]=0;
        }
    }
    vector<int> v;
    go(0,v);

}