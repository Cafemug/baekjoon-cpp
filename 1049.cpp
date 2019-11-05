#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int group[51];
int distinct[51];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>group[i]>>distinct[i];
    }
    sort(group,group+m);
    sort(distinct, distinct+m);
    int mok = n/6;
    int namerge = n%6;
    int res = min(n*distinct[0], min(mok*group[0]+namerge*distinct[0],(mok+1)*group[0]));
    cout<<res;
}