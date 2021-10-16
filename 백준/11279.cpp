#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;
priority_queue<int, vector<int>, less<int> > pq;
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
                printf("%d\n",pq.top());
                pq.pop();
            }
        }
        else
            pq.push(temp);
    }
}

