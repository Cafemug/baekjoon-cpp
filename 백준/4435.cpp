#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    long a1,a2,a3,a4,a5,a6,b1,b2,b3,b4,b5,b6,b7,suma,sumb,num;
    cin>>num;
    for(int i=1;i<=num;i++){
        scanf("%ld %ld %ld %ld %ld %ld",&a1,&a2,&a3,&a4,&a5,&a6);
        scanf("%ld %ld %ld %ld %ld %ld %ld",&b1,&b2,&b3,&b4,&b5,&b6,&b7);
        suma=(a1+a2*2+a3*3+a4*3+a5*4+a6*10);
        sumb=(b1+b2*2+b3*2+b4*2+b5*3+b6*5+b7*10);
        if(suma>sumb){
            printf("Battle %d: Good triumphs over Evil\n",i);
        }
        else if(suma<sumb){
            printf("Battle %d: Evil eradicates all trace of Good\n",i);

        }
        else{
            printf("Battle %d: No victor on this battle field\n",i);

        }
    
    }
}