#include <cstdio>
int main(){
	double sale;
	int num;
	scanf("%d",&num);
	while(num-->0){
		scanf("%lf",&sale);
		sale*=0.8;
		printf("$%.2lf\n",sale);
	}
}