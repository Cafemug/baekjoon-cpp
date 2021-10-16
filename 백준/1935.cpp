#include <iostream>
#include <cstdio>
#include <vector>
#include <cctype>
using namespace std;
vector<double> s;
string line;
double arr[27];
double oper(double x,double y,char operand){
    if(operand=='+')
        return x+y;
    else if(operand=='-')
        return  x-y;
    else if(operand=='*')
        return x*y;
    else if(operand=='/')
        return x/y;
    
}
int main(){
    int num;
    cin>>num>>line;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int len=line.size();
    for(int i=0;i<len;i++){
        if(isalpha(line[i])){
            int temp=line[i]-'A';
            s.push_back(arr[temp]);

        }
        else{
            double num2=s.back();
            s.pop_back();
            double num1=s.back();
            s.pop_back();
            s.push_back(oper(num1,num2,line[i]));
        }
    }
    printf("%.2lf",s.back());
}