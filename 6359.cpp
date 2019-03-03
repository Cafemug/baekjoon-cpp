#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
using namespace std;
int v[101] = {0,};
int c[101] = {1,};
int main(){
    int a , b;
    cin >> a;
    for(int i = 0; i < a ; ++i){
        cin>>v[i];
    }
    
    for(int i = 0; i < a ; ++i){
        int cnt=0;
        memset(c, 1, sizeof(c));
        for(int j=2; j <= v[i]; ++j){
            for(int k=1; k <= v[i]; ++k){
                if(k%j==0){
                    if(c[k]==0)
                        c[k]=1;
                    else
                    {
                        c[k]=0;
                    }
                    
                }
            }
        }
        for(int j=1; j <= v[i]; ++j){
            if(c[j]==1){
                cnt++;
            }
        }

        cout<<cnt+1<<"\n";

    }

}