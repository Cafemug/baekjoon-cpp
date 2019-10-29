#include <iostream>
#include <cmath>
using namespace std;
int maxd[100001][3];
int mind[100001][3];
int arr[100001][3];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num,maxres,minres;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    maxd[0][0] = arr[0][0];
    maxd[0][1] = arr[0][1];
    maxd[0][2] = arr[0][2];
    mind[0][0] = arr[0][0];
    mind[0][1] = arr[0][1];
    mind[0][2] = arr[0][2];
    for(int i=1;i<num;i++){
        maxd[i][0]=max(maxd[i-1][0],maxd[i-1][1])+arr[i][0];
        maxd[i][1]=max(maxd[i-1][0],max(maxd[i-1][1],maxd[i-1][2]))+arr[i][1];
        maxd[i][2]=max(maxd[i-1][2],maxd[i-1][1])+arr[i][2];
        mind[i][0]=min(mind[i-1][0],mind[i-1][1])+arr[i][0];
        mind[i][1]=min(mind[i-1][0],min(mind[i-1][1],mind[i-1][2]))+arr[i][1];
        mind[i][2]=min(mind[i-1][2],mind[i-1][1])+arr[i][2];

    }
    maxres = max(maxd[num-1][0],max(maxd[num-1][1],maxd[num-1][2]));
    minres= min(maxd[num-1][0],min(maxd[num-1][1],maxd[num-1][2]));
    cout<<maxres<<" "<<minres;
}