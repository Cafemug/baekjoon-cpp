#include <cstdio>
struct saram{
	int w;
	int t;
	int count=1;
};
int main(){
	int num;
	scanf("%d",&num);
	saram *arr=new saram[num];
	for(int i=0;i<num;i++){
		scanf("%d %d",&(arr[i].w),&(arr[i].t));
	}
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(arr[i].w < arr[j].w && arr[i].t < arr[j].t )
				arr[i].count++;
		
		}
	}
	for(int i=0;i<num;i++){
		printf("%d ",arr[i].count);
	}
}