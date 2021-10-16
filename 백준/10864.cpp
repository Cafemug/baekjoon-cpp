#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	int arr[a]={0,};
	for(int i=0;i<b;i++){
		scanf("%d %d",&c,&d);
		arr[c-1]++;
		arr[d-1]++;
	
	}
	for(int i=0;i<a;i++){
		printf("%d\n",arr[i]);
	}

}