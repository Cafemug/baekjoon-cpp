#include <iostream>
#include <vector>
using namespace std;
int n,max_res=0;
vector<pair<int, int> > v;
void recur(int i, int sum){
    if(i>n) return;
    if(i==n){
        if(sum>max_res) max_res=sum;
        return;
    }
    recur(i+v[i].first , sum+v[i].second);
    recur(i+1 , sum);

}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    recur(0,0);
    cout<<max_res;
}