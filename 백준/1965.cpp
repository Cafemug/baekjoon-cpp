#include <iostream>
using namespace std;
int arr[1001]={0,};
int d[1001]={0,};
int main(){
    int a, max_num=0;
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=a;i++){
        int temp_max = 0;
        for(int j=0;j<i;j++){
            if(arr[j]< arr[i]){
                
                if(temp_max < d[j])
                    temp_max = d[j];
            }
            d[i] = temp_max + 1;
            if(max_num < d[i])
                max_num = d[i];
        }
    }

    cout<<max_num;
}