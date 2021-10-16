#include <stdio.h>
using namespace std;
int main(){
    int P,L,V,a,b,count=1;
    
    while(1){
        scanf("%d %d %d",&L,&P,&V);
        if(L==0 && P==0 && V==0)
           return 0;
        a=V/P;
        b=V%P;
        if(b>=L)
            printf("Case %d: %d\n",count,a*L+L);
        else
            printf("Case %d: %d\n",count,a*L+b);
        count++;
    }
   
}