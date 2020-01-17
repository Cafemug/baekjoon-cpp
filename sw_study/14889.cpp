#include <iostream>
#include <vector>
using namespace std;
int n;
int s[21][21];
int go(int index, vector<int>& start, vector<int>& link){
    if(index == n){
        if(start.size() != n/2) return -1;
        if(link.size()!= n/2) return -1;
        int diff1=0, diff2=0;
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n/2;j++){
                if(i==j) continue;
                diff1+=s[start[i]][start[j]];
                diff2+=s[link[i]][link[j]];
            }
        }
        int ans = diff1 - diff2;
        if(ans<0) ans = -ans;
        return ans;
    }
    start.push_back(index);
    int ans = -1;
    int temp1 = go(index+1, start, link);
    if(ans == -1 || (temp1 != -1 && ans>temp1)){
        ans = temp1;
    }
    start.pop_back();
    link.push_back(index);
    int temp2 = go(index+1, start, link);
    if(ans == -1 || (temp2 != -1 && ans>temp2)){
        ans = temp2;
    }
    link.pop_back();
    return ans;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>s[i][j];
        }
    }
    vector<int> start, link;
    cout<<go(0,start,link);

}