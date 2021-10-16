#include <iostream>
using namespace std;
int plus_arr[4001]={0,};
int minus_arr[4001]={0,};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num,max_num=0,min_num=987654321,idx=0,sum_num=0,count=0,mid_num,fre_num,flag=0;
    cin>>num;
    for(int i=0;i<num;i++){
        int temp_num;
        cin>>temp_num;
        sum_num+=temp_num;
        if(temp_num>=0){
            if(max_num<temp_num)
                max_num=temp_num;
            if(min_num>temp_num)
                min_num=temp_num;
            plus_arr[temp_num]++;
        }
        else{
            if(min_num>temp_num)
                min_num=temp_num;
            if(max_num<temp_num)
                max_num=temp_num;
            minus_arr[-temp_num]++;
        }
    }
    for(int i=-min_num;i>0;i--){
        if(minus_arr[i]>0){
            idx+=minus_arr[i];
        
            if(idx>=(num/2+1)){
                mid_num=-i;
            }
        }
        if(count<=minus_arr[i]){
            if(count==minus_arr[i]){
                flag++;
                if(flag<=2){
                    fre_num=-i;
                    count=minus_arr[i];
                }
            }
            else{
                flag=0;
                fre_num=-i;
                count=minus_arr[i];

            }
        }
    }
    for(int i=0;i<max_num;i++){
        if(plus_arr[i]>0){
            idx+=plus_arr[i];
            if(idx>=(num/2+1)){
                mid_num=i;
            }
        }
        if(count<=plus_arr[i]){
            if(count==plus_arr[i]){
                flag++;
                if(flag<=2){
                    fre_num=i;
                    count=plus_arr[i];
                }
            }
            else{
                flag=0;
                fre_num=i;
                count=plus_arr[i];

            }
        }
    }
    cout<<fixed;
    cout.precision(0);
    cout<<sum_num/num<<"\n";
    cout<<mid_num<<"\n";
    cout<<fre_num<<"\n";
    cout<<max_num-min_num;
}