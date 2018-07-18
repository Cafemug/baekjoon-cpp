#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
char budeng[10];
int visit[11]={0,};
vector <long long int> li;
int num;
void dfs(int n,int idx,long long int res){
    if(idx==num){
        li.push_back(res);
    }
    else{
        for(int i=0;i<=9;i++){
            if(visit[i]==0){
             
                if(budeng[idx]=='<'){
                    if(n>=i){
                        continue;
                        }
                    }
                else{
                    if(n<=i){
                        continue;
                    }
                }
                visit[i]=1;      
                dfs(i,idx+1,res*10+i);
                }
        }
      }
     visit[n]=0;
}
int main(){
   cin>>num;
   long long temp;
   for(int i=0;i<num;i++){
       cin>>budeng[i];
   }
     for(int i=0;i<10;i++){
       visit[i]=1;
        dfs(i,0,i);
   }
    cout<<li[li.size()-1]<<"\n";
    temp=pow(10,num);
    if(li[0]/temp==0)
        cout<<0<<li[0];
    else
        cout<<li[0];

}