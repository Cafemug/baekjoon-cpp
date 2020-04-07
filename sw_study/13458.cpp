#include <iostream>
using namespace std;
long a[1000001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long n,b,c;
    long answer=0;
    cin>>n;
    for(long i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>b>>c;
    for(long i=0;i<n;i++){
        long temp = a[i] - b;
        if(temp>0){
            long temp2 = temp%c;
            if(temp2>0){
                answer += (temp/c +1);
            }
            else{
                answer += temp/c;
            }
        }
        answer+=1;        
    }
    cout<<answer;
}