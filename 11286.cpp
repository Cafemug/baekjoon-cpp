#include <iostream>
#include <queue>
#include <cstdio>
#include <cmath>
using namespace std;

priority_queue<pair<int,int>, vector<pair<int,int> >, greater< pair<int,int> > > pq;
int main(){
    int num;
    scanf("%d",&num);
    while(num-->0){
        int temp;
        scanf("%d",&temp);
        if(temp==0){
            if(pq.empty()){
                printf("0\n");
            }
            else{
                printf("%d\n",pq.top().second);
                pq.pop();
            }
        }
        else
            pq.push({abs(temp),temp});
    }
}

