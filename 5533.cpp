#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
long arr1[1000001];
long arr2[1000001];
long arr3[1000001];
long check1[1000001];
long check2[1000001];
long check3[1000001];
int main(){
    long num;
    cin>>num;
    for(long i=1;i<=num;i++){
        cin>>arr1[i]>>arr2[i]>>arr3[i];
        check1[arr1[i]]++;
        check2[arr2[i]]++;
        check3[arr3[i]]++;
    }
    for(long i=1;i<=num;i++){
        long sum=0;
        if(check1[arr1[i]]==1){
            sum+=arr1[i];
        }
        if(check2[arr2[i]]==1){
            sum+=arr2[i];
        }
        if(check3[arr3[i]]==1){
            sum+=arr3[i];
        }
        printf("%ld\n",sum);
    }

}
    