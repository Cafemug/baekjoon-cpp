#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int num=0;
    cin>>n;
    while(n--){
        string t;
        int s;
        cin>>t;
        if(t=="add"){
            cin>>s;
            num = (num | (1<<s-1));
        }
        else if(t=="remove"){
            cin>>s;
            num = (num & (~(1<<s-1)));
        }
        else if(t=="check"){
            cin>>s;
            if((num & (1<<s-1))) cout<<1<<"\n";
            else cout<<0<<"\n";
        }
        else if(t=="toggle"){
            cin>>s;
            if((num & (1<<s-1))) num = (num & (~(1<<s-1)));
            else num = (num | (1<<s-1));
        }
        else if(t=="all"){
            num= (1<<20) - 1 ;
        }
        else if(t=="empty"){
            num=0;
        }
    }
}