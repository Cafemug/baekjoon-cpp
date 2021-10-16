#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
      string a;
      cin>>a;
      int sum=0;
      int len=a.size();
      reverse(a.begin(),a.end());
      for(int i=0;i<len;i++){
            if(isdigit(a[i])){
                  int k=a[i]-'0';
                  k=k*pow(16,i);
                  sum+=k;
            }
            
            else{
                  int t=a[i]-55;
                  t=t*pow(16,i);
                  sum+=t;
                  
            }
      }
      cout<<sum;
      
}