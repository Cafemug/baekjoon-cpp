#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
template<typename T, size_t Size>
std::istream& operator>>(std::istream& in, T (&arr)[Size])
{
    std::for_each(std::begin(arr), std::end(arr), [&in](auto& elem) {
        in >> elem;
    });

    return in;
}

int main(){
    int arr[500000];
    int arr2[500000];
    cin>>arr;
    for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
}