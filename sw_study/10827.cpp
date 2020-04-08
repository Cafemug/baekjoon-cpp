#include <iostream>
#include <sstream>
using namespace std;
double go(double a, int b){
    if(b==0) return 1.0;
    if(b==1) return a;
    if(b%2==0){
        double temp = go(a,b/2);
        return (temp*temp);
    }
    else{
        return (a*go(a,b-1));
    }
}
int main(){
    double a = 0.0;
    int b;
    ostringstream ostr;
    cin>>a>>b;
    double ans =go(a,b);
    ostr << a;
    string s= ostr.str();
    int len = s.size();
    cout<<(len-1)*b<<"\n";
    cout.precision((len-1)*b);
    cout<<ans<<"\n";

}