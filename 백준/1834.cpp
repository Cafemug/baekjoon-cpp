#include <iostream>
using namespace std;
int main(void)
{
    long long int sum=0;
    long long int n, i;
    cin>>n;
    for(i=1;i<n;i++) sum+=(i*n+i);
    cout<<sum;
    return 0;
}