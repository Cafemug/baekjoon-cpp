#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<long> > v;
bool compare(vector<long> a,vector<long> b){
    if(a[0]>b[0])
        return 1;
    else if(a[0]==b[0]){
        if(a[1]>b[1])
            return 1;
        else if(a[1]==b[1]){
            if(a[2]>b[2])
                return 1;
        }
    }
    return 0;
}
long arr[1002]={0,};
int main(){
    long n,num,a,b,c,d,gold,silver,bronze,idx=1;
    cin>>n>>num;
    for(int i=0;i<n;i++){
        vector<long> temp;
        cin>>a>>b>>c>>d;
        temp.push_back(b);
        temp.push_back(c);
        temp.push_back(d);
        temp.push_back(a);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),compare);
    arr[v[0][3]]=1;
    gold=v[0][0];
    silver=v[0][1];
    bronze=v[0][2];
    for(int i=1;i<n;i++){
        if(gold==v[i][0] && silver==v[i][1] && bronze==v[i][2]){
            arr[v[i][3]]=idx;
        }
        else{
            gold=v[i][0];
            silver=v[i][1];
            bronze=v[i][2];
            idx=i+1;
            arr[v[i][3]]=idx;
        }   
    }
    cout<<arr[num];
}