#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
    long long int i,j,sum;
	scanf("%lld %lld",&i,&j);
	sum=(i+j)*(abs(j-i)+1)/2;
	printf("%lld",sum);
	return 0;
}