#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b<=0) return a;
    else 
        return gcd(b, a%b);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin>>num;
    while(num--){
        int flag=0;
        int m,n,x,y;
        cin>>m>>n>>x>>y;
        int gcd_num = gcd(m,n);
        int lcm = m*n/gcd_num;
        for(int i=0;i<lcm/m;i++){
            int temp_num= m*i+x;
            for(int j=0;j<lcm/n;j++){
                if(temp_num == n*j+y){
                    cout<<temp_num<<"\n";
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) continue;
        cout<<-1<<"\n";
    }
}