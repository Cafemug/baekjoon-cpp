#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,a,k;
	cin>>a;
	while(a-->0){
		k=0;
		cin>>n;
		printf("Pairs for %d:",n);
		for(int i=1;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(k==0 && i+j==n){
					k=1;
					printf(" %d %d",i,j);
				}
				else if(i+j==n)
					printf(", %d %d",i,j);
			}
		}
		cout<<"\n";
	}
}