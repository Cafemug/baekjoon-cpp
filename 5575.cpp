#include <cstdio>
int main(){
	int ah1,am1,as1,ah2,am2,as2;
	int bh1,bm1,bs1,bh2,bm2,bs2;
	int ch1,cm1,cs1,ch2,cm2,cs2;
	int reh,rem,res;
	scanf("%d %d %d %d %d %d",&ah1,&am1,&as1,&ah2,&am2,&as2);
	scanf("%d %d %d %d %d %d",&bh1,&bm1,&bs1,&bh2,&bm2,&bs2);
	scanf("%d %d %d %d %d %d",&ch1,&cm1,&cs1,&ch2,&cm2,&cs2);
	reh=ah2-ah1;rem=am2-am1;res=as2-as1;
	if(res<0){
		res+=60;
		rem--;
	}
	if(rem<0){
		rem+=60;
		reh--;
	}
	printf("%d %d %d\n",reh,rem,res);
	reh=bh2-bh1;rem=bm2-bm1;res=bs2-bs1;
	if(res<0){
		res+=60;
		rem--;
	}
	if(rem<0){
		rem+=60;
		reh--;
	}
	printf("%d %d %d\n",reh,rem,res);
	reh=ch2-ch1;rem=cm2-cm1;res=cs2-cs1;
	if(res<0){
		res+=60;
		rem--;
	}
	if(rem<0){
		rem+=60;
		reh--;
	}
	printf("%d %d %d\n",reh,rem,res);
}
