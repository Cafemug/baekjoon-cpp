#include <iostream>
#include <algorithm>
using namespace std;
const int INF = 1000000000 + 1;
int a,b,v;
long long binary(){
        long long left = 0, right =1000000000 + 1;
        long long day;
        long long result = INF; 
        while(left <= right){

                 day = (left + right) / 2;
                 if (v<= day*(a-b)+a)
                 {
                         result = min(result, day + 1);
                         right = day - 1;
                 }
                 else
                         left = day + 1;
        }
        return result;

}

 

int main(void){
        cin>>a>>b>>v;
        cout<<binary()<< endl;
        return 0;

}