#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin>>num;
    while(num--){
        int flag=0;
        int m,n,x,y;
        cin>>m>>n>>x>>y;
        for(int i=0;i<=n;i++){
            int temp_num=i*m+(x-1);
            if(temp_num%n==(y-1)){
                flag=1;
                cout<<temp_num+1<<"\n";
                break;
            }
        }
        if(flag) continue;
        cout<<-1<<"\n";
    }
}