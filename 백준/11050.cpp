#include <cstdio>
int bin(int num){
	int sum=1;
	for(int i=1;i<=num;i++){
		sum*=i;
	}
	return sum;
}
int main(){
	int N,M,A,B,C,res;
	scanf("%d %d",&N,&M);
	A=bin(N);
	B=bin(M);
	C=bin(N-M);
	res=(A/(B*C)+A%(B*C));
	printf("%d",res);

}