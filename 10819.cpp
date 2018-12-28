#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int arr[10];
int num,tot,maxi;

int main(){
    cin >> num;
    for(int i = 0; i < num; i++){
        cin>>arr[i];
    }
    sort(arr, arr + num);
    do {
        tot = 0;
        for (int i = 0; i < num - 1; i++) tot += abs(arr[i] - arr[i + 1]);
        maxi = max(maxi, tot);
    } while (next_permutation(arr, arr + num));
   
    cout<<maxi;
}