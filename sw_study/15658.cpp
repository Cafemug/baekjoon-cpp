#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int arr[12];
pair <int, int> recur(int x, int res, int plus, int minus, int multi, int div){
    if(x == n) return make_pair(res,res);
    vector <pair<int,int > > v;
    if(plus > 0){
        v.push_back(recur(x+1, res+arr[x], plus-1,minus,multi,div));
    }
    if(minus > 0){
        v.push_back(recur(x+1, res-arr[x], plus,minus-1,multi,div));
    }
    if(multi > 0){
        v.push_back(recur(x+1, res*arr[x], plus,minus,multi-1,div));
    }
    if(div > 0){
        v.push_back(recur(x+1, res/arr[x], plus,minus,multi,div-1));
    }
    pair<int, int> temp= v[0];
    int len = v.size();
    for(int i=0;i<len;i++){
        if(temp.first<v[i].first){
            temp.first=v[i].first;
        }
        if(temp.second>v[i].second){
            temp.second=v[i].second;
        }
    }
    return temp;
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int plus,minus,multi,div;
    pair <int,int> result;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>plus>>minus>>multi>>div;
    result = recur(1,arr[0],plus,minus,multi,div);
    cout<<result.first<<"\n"<<result.second;
}