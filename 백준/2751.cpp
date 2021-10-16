#include <cstdio>
#include <algorithm>
#include <vector>
#define MAX 1000001
using namespace std;
int v[MAX];
int main(){
	
	int a,t;
	
	scanf("%d",&a);
	
	for(int i=0;i<a;i++){
		scanf("%d",&t);
		v[i]=t;
	}
	sort(v,v+a);
	for(int i=0;i<a;i++){
		printf("%d\n",v[i]);
	}
}