#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
queue<long long> sam;
bool test[100000001];
bool test2[100000001];
int idx[]={1,-1};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        long long temp;
        cin>>temp;
        sam.push(temp);
    }
}