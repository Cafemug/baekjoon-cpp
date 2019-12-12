#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n,plus,minus,multi,div,len,max_res=-1000000001,min_res=1000000001;
    int arr[12];
    vector<char> v;
    vector<int> num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        num.push_back(i);
    }
    num.pop_back();
    cin>>plus>>minus>>multi>>div;
    while(plus > 0 || minus > 0 || multi > 0 || div > 0){
        if(plus >0) v.push_back('+');
        if(minus >0) v.push_back('-');
        if(multi >0) v.push_back('*');
        if(div >0) v.push_back('/');
        plus --; minus --; multi --; div--;
    }
    do{
        int sum = arr[0];
        int idx=0;
        for(int i=0;i<n-1;i++){
            char oper = v[num[idx]];
            if(oper == '+') sum+=arr[i+1];
            if(oper == '-') sum-=arr[i+1];
            if(oper == '*') sum*=arr[i+1];
            if(oper == '/') sum/=arr[i+1];
            idx++;
        }
        if(sum>max_res) max_res = sum;
        if(sum<min_res) min_res = sum;
    }while(next_permutation(num.begin(), num.end()));
    cout<<max_res<<"\n"<<min_res;
}