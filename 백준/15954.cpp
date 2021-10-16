#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
   double a,temp,tot;
   int n;
   double res=-1;
   double result=0;
   double avg;
   scanf("%d",&n);
   scanf("%lf",&a);
   
   int  arr[n];
   
   for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }
   
   while(a<=n){
      for(int i=0;i<=n-a;i++){
         tot=0;
         result=0;
         for(int j=0;j<a;j++){
            tot+=arr[i+j];
         }
         avg=tot/a;
         for(int j=0;j<a;j++){
            result+=pow((arr[i+j]-avg),2);
         }
         if (res==-1){
            res=result/a;
         }
         else if (res>(result/a)){
            res=result/a;
         }
      }
      a++;
   }
  printf("%.11lf",sqrt(res));

}