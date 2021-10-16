#include <cstdio>
int main(){
	int a,b,c,d,e=0;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	for(int i=1;i<=300;i++){
		for(int j=1;j<=300;j++){
			for(int k=1;k<=300;k++){
				if(a*i+b*j+c*k==d){
					e=1;
					break;
				}
				if(a*i==d || b*j==d || c*k==d){
					e=1;
					break;
				}
				if(b*j+c*k==d || a*i+c*k==d || a*i+b*j==d){
					e=1;
					break;
				}

			}
			if(e==1)
				break;
		}
		if(e==1)
			break;
	}
	if(e==0){
		printf("%d",0);
	}
	else
		printf("%d",1);
}