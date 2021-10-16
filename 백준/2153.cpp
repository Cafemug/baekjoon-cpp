#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
    int sum=0;
    string s;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++){
        if(islower(s[i])){
            int a=s[i]-96;
            sum+=a;
        }
        else{
            int b=s[i]-38;
            sum+=b;
        }
    }
    if(sum<4){
        cout<<"It is a prime word.";
        return 0;
    }
    else{
        double le=sqrt(sum);
        for(int i=2;i<=le;i++){
            if(sum%i==0){
                cout<<"It is not a prime word.";
                return 0;
            }
        }
        cout<<"It is a prime word.";
 
    }
}
