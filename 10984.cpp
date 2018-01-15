#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int n,num,total=0,temp;
	double totals=0.0,temps;
	cin>>n;
	for(int i=0;i<n;i++){
		total=0;
		totals=0.0;
		cin>>num;
		for(int x=0;x<num;x++){
			cin>>temp>>temps;
			total+=temp;
			totals+=temps*temp;;
		}
		printf("%d %.1f\n",total,totals/total);

	}

}