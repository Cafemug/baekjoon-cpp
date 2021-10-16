#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;
void hanoi(int num,int first,int second,int third){
    if(num==1)
        printf("%d %d\n",first,second);
    else{
        hanoi(num-1,first,third,second);
        printf("%d %d\n",first,second);
        hanoi(num-1,third,second,first);
    }
}
int main(){
    int a;
    cin>>a;
    string s = to_string(pow(2, a));
    int idx = s.find('.');
    s = s.substr(0, idx);
    s[s.length() - 1] -= 1;
    cout<<s<<"\n";

    if(a<=20){
        hanoi(a,1,3,2);
    }
    return 0;
}