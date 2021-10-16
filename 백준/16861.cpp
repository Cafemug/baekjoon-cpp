#include <iostream>
using namespace std;
int main(){
    long long a;
    cin>>a;
    while(true){
        long sum=0;
        string sa=to_string(a);
        int len= sa.size();
        for(int i=0;i<len;i++){
            int temp = sa[i] -'0';
            sum+= temp;
        }
        if(a%sum==0){
            cout<<a;
            return 0;
        }
        a++;
    }

}