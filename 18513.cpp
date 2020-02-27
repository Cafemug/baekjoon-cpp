#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
queue<int> sam;
char plus_check[12500001];
char minus_check[12500001];
int n,k;
int idx[]={1,-1};
long long final_distance =0;
bool check_num(int x){
    if(x>=0){
        if(plus_check[x/8] & 1 <<  (x%8)) return true;
        else return false;
    }
    else{
        x=-x;
        if(minus_check[x/8] & 1 <<  (x%8)) return true;
        else return false;
    }
}
void visit_num(int x){
    if(x>=0){
        plus_check[(x/8)] = plus_check[(x/8)] | 1 << (x%8);
    }
    else{
        x=-x;
        minus_check[(x/8)] = minus_check[(x/8)] | 1 << (x%8);
    }
}
void bfs(){
    long long mid_distance=1;
    long long flag=1;
    while(!sam.empty()){
        int mid_sam_size = sam.size();
        for(int i=0;i<mid_sam_size;i++){
            int temp_num = sam.front();
            sam.pop();
            for(int t=0;t<2;t++){
                int re_temp_num = temp_num + idx[t];
                if(re_temp_num <-100000000 || re_temp_num >100000000 || check_num(re_temp_num)) continue;
                visit_num(re_temp_num);
                sam.push(re_temp_num);
                final_distance += mid_distance;
                if(flag==k) return;
                flag++;
                
            }

        } 
        mid_distance++;
    }
    return;

}
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        visit_num(temp);

        sam.push(temp);
    }
    bfs();
    cout<<final_distance;
}