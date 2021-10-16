#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int v[1001] = {0,};
int findgcd(int a, int b){
    int mod = a % b;
    while(mod > 0)
    {
        a = b;
        b = mod;
        mod = a % b;
    }
    return b;
}
int main(){
    int a , b;
    cin >> a;
    for(int i = 0; i < a ; ++i){
        cin>>v[i];
    }
    b=v[0];
    for(int i = 1; i < a ; ++i){
        int temp = findgcd(b,v[i]);
        printf("%d/%d\n",b/temp,v[i]/temp);
    }

}