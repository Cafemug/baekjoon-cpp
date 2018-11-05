#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> dq;
    int n;
    cin>>n;
    while(!dq.empty()){
        dq.pop_back();
    }
    while(n-->0){
        string s;
        cin>>s;
        if(s=="push_back"){
            int temp;
            cin>>temp;
            dq.push_back(temp);
        }
        else if(s=="push_front"){
            int temp;
            cin>>temp;
            dq.push_front(temp);
        }
        else if(s=="front"){
             if(!dq.empty()){
                cout<<dq.front()<<"\n";               
            }
            else{
                cout<<-1<<"\n";            
            }                
        }
        else if(s=="back"){
             if(!dq.empty()){
                 cout<<dq.back()<<"\n";               
            }
            else{
                cout<<-1<<"\n";              
            }
        }
        else if(s=="empty"){
            cout<<dq.empty()<<"\n";
        }
        else if(s=="pop_front"){
            if(!dq.empty()){
                cout<<dq.front()<<"\n";
                dq.pop_front();
            }
            else{
                cout<<-1<<"\n";
            }
        }
        else if(s=="pop_back"){
            if(!dq.empty()){
                cout<<dq.back()<<"\n";
                dq.pop_back();
            }
            else{
                cout<<-1<<"\n";
            }
        }
        else if(s=="size"){
            if(!dq.empty()){
                 cout<<dq.size()<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
    }
}