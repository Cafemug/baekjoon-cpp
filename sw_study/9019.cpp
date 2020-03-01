#include <iostream>
#include <queue>
#include <cmath>
#include <cstring>
using namespace std;
int n;
int c[10001];
queue<int> q;
queue<char> s[10001];
int make_double(int x){
    x*=2;
    if(x>=10000) x%=10000;
    return x;
}
int make_minus(int x){
    x-=1;
    if(x==-1)x=9999;
    return x;

}
int make_right(int x){
    int arr[4]={0,};
    if(x==0) return 0;
    int res=0;
    int i=0;
    while(x!=0){
        int temp = x%10;
        x/=10;
        arr[i]=temp;
        i++;
    }
    i--;
    int temp_num=arr[0];
        for(int x=0;x<i;x++){
            temp_num*=10;
        }
    res+=temp_num;
    for(int t=i;t>0;t--){
        int temp_num=arr[t];
        for(int x=0;x<t-1;x++){
            temp_num*=10;
        }
        res+=temp_num;
    }
    return res;

}
int make_left(int x){
    int arr[4]={0,};
    if(x==0) return 0;
    int res=0;
    int i=0;
    while(x!=0){
        int temp = x%10;
        x/=10;
        arr[i]=temp;
        i++;
    }
    i--;
    for(int t=i-1;t>=0;t--){
        int temp_num=arr[t];
        for(int x=0;x<t+1;x++){
            temp_num*=10;
        }
        res+=temp_num;
    }
    res+=arr[i];
    return res;

}

int main(){
    cin>>n;
    memset(s,' ', sizeof(s));
    while(n--){
        int x,y;
        cin>>x>>y;
        // cout<<x<<y;
        q.push(x);
        c[x]=true;
        while(!q.empty()){
            int tx=q.front();
            cout<<tx<<"\n";
            q.pop();
            int one = make_double(tx);
            // cout<<one<<"\n";
            int two = make_minus(tx);
            int three = make_left(tx);
            int four = make_right(tx);
            cout<<one<<" "<<two<<" "<<three<<" "<<four<<"\n";
            if(!c[one]){
                q.push(one);
                c[one]=true;
                // s[one].push('D');
            }
            if(!c[two]){
                q.push(two);
                c[two]=true;
                // s[two].push('S');
            }
            if(!c[three]){
                q.push(three);
                c[three]=true;
                // s[three].push('L');
            }
            if(!c[four]){
                q.push(four);
                c[four]=true;
                // s[four].push('R');
            }
        }
        int len = s[y].size();
        for(int i=0;i<len;i++){
            cout<<s[y].front();
            s[y].pop();
        }
    }
}