#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	double a,b,c;
	while(1){
		scanf("%lf %lf %lf",&a,&b,&c);
		if(a==0 && b==0 &&c==0) break;
		if(a==0 || b==0 || c==0){
			if(b-a==c-b){
                printf("AP %.0lf\n",c+b-a);
		}
		}
		else{
		if(b/a==c/b){
            printf("GP %.0lf\n",c*b/a);
		}
		else if(b-a==c-b){
			printf("AP %.0lf\n",c+b-a);
		}
	}
	}
}