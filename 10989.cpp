#include <iostream>
using namespace std;
int arr[10001]={0,};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num,max_num=0;
    cin >> num;
    while(num--){
        int temp;
        cin >> temp;
        arr[temp]++;
        if(temp > max_num)
            max_num = temp;
    }
    for(int i = 1;i <= max_num; i++){
        for(int j = 1;j <= arr[i]; j++){
            cout << i<< "\n";
        }
    }

}