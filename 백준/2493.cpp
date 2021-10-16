#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
vector<pair<int,int> > v;
pair<int,int> pr;
int n,b;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a,x;
        scanf("%d",&a);
        while(!v.empty()){
            pr=v.back();
            x=pr.first;
            if(x>=a){
                printf("%d ",pr.second);
                pr.first=a;
                pr.second=i;
                v.push_back(pr);
                break;
            }
            else{
                v.pop_back();
                
            }
        }
        
        if(v.empty()){
            pr.first=a;
            pr.second=i;
            v.push_back(pr);
            printf("0 ");
        }
    }   
}