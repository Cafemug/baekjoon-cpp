#include <iostream>
#include <cstring>
using namespace std;
string s[10];
int rotation[10];
void real_rotate(){
    for(int i=0;i<4;i++){
        if(rotation[i]==1){
            string temp = s[i][7] + s[i].substr(0,7);
            s[i]=temp;
        }
        else if(rotation[i]==-1){
            string temp = s[i].substr(1,7)+s[i][0];
            s[i]=temp;
        }
    }
}
void find(int idx, int rotate){
    memset(rotation,0, sizeof(rotation));
    rotation[idx]= rotate;
    for(int i=idx;i>0;i--){
        if(s[i][6]==s[i-1][2]) {
            break;
        }
        else{
            rotation[i-1]= - rotation[i];
        }
    }
    for(int i=idx;i<3;i++){
        if(s[i][2]==s[i+1][6]){
            break;
        }
        else{
            rotation[i+1]= - rotation[i];
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    for(int i=0;i<4;i++){
        cin>>s[i];
    }
    cin>>n;
    for(int i=0;i<n;i++){
        int idx, rotate;
        cin>>idx>>rotate;
        find(idx-1, rotate);
        real_rotate();
    }
    int ans=0;
    int tx=1;
    for(int i=0;i<4;i++){
        if(s[i][0]=='0'){
            continue;
        }
        else{
            ans += (tx<<i);
        }
    }
    cout<<ans;
}