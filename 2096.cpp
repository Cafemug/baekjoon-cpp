#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num,maxres,minres;
    int a,b,c;
    int pastone_max=0,pastwo_max=0,pasthree_max=0,fuone_max,futwo_max,futhree_max;
    int pastone_min=0,pastwo_min=0,pasthree_min=0,fuone_min,futwo_min,futhree_min; 
    cin>>num;
    for(int i=0;i<num;i++){
        
        cin>>a>>b>>c;
        fuone_max=max(pastone_max,pastwo_max)+a;
        futwo_max=max(pastone_max,max(pastwo_max,pasthree_max))+b;
        futhree_max=max(pasthree_max,pastwo_max)+c;
        fuone_min=min(pastone_min,pastwo_min)+a;
        futwo_min=min(pastone_min,min(pastwo_min,pasthree_min))+b;
        futhree_min=min(pasthree_min,pastwo_min)+c;
        pastone_max = fuone_max;
        pastwo_max = futwo_max;
        pasthree_max = futhree_max;
        pastone_min = fuone_min;
        pastwo_min = futwo_min;
        pasthree_min = futhree_min;
    }
    maxres = max(fuone_max,max(futwo_max,futhree_max));
    minres= min(fuone_min,min(futwo_min,futhree_min));
    cout<<maxres<<" "<<minres;
}