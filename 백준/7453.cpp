#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
vector<int> v2;
int a[4000],b[4000],c[4000],d[4000];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v.push_back(a[i]+b[j]);
            v2.push_back(c[i]+d[j]);
        }
    }
    sort(v.begin(),v.end());
    int len = v2.size();
    long long sum=0;
    for(int i=0;i<len;i++){
        auto temp = equal_range(v.begin(),v.end(),-v2[i]);
        sum+=(temp.second -temp.first);
        
    }
    cout<<sum;

}