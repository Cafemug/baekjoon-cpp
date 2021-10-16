#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct list{
    string name;
    int korean,english,math;
}list;
bool cmp(const list &a, const list &b){
    if(a.korean < b.korean)
        return false;
    else if(a.korean == b.korean){
        if(a.english < b.english)
            return true;
        else if(a.english == b.english){
            if(a.math < b.math)
                return false;
            else if(a.math == b.math){
                if(a.name <= b.name)
                    return true;
                else
                    return false;
            }
            else
                return true;

        }else
            return false;
        
    }
    else
        return true;
}
vector<list> v;
int main(){
    list l;
    int a;
    cin>>a;
    for(int i=false;i<a;i++){
        cin>>l.name>>l.korean>>l.english>>l.math;
        v.push_back(l);
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<a;i++){
        cout<<v[i].name<<"\n";
    }
}