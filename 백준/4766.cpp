#include <cstdio>
int main(){
	double temp,a,tk=999.0;
	scanf("%lf",&a);
	while(1){
		temp=a;
		scanf("%lf",&a);
		if(a==tk)
			break;
		printf("%.2lf\n",a-temp);
	}
}