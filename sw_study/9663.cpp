#include <iostream>
using namespace std;
int n,res;
bool check_right_top[40],check_center[40],check_left_top[40]; 
bool check(int row, int col){
    if(check_right_top[row+col+1]) return false;
    if(check_center[col]) return false;
    if(check_left_top[row-col+n]) return false;
    return true;
}
int go(int row){
    if(row==n){
        return 1;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(check(row,i)){
            check_right_top[row+i+1]= true;
            check_center[i] = true;
            check_left_top[row-i+n] =true;
            ans += go(row+1);
            check_right_top[row+i+1]= false;
            check_center[i] = false;
            check_left_top[row-i+n] = false;
        }
    }
    return ans;

}
int main(){
    
    cin>>n;
   
    cout<< go(0);
}