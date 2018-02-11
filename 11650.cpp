#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
class Vec{
public:
	int x;
	int y;
	Vec(int x,int y):x(x),y(y){}
};
bool compare(Vec q,Vec t){
	if(q.x==t.x){
		return q.y<t.y;
	}
	else
		return q.x<t.x;
}
int main() {
	vector<Vec> v;
	int a,b,c;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d %d",&b,&c);
		v.push_back(Vec(b,c));
	}
	sort(v.begin(),v.end(),compare);
	for(int i=0;i<a;i++){
		printf("%d %d\n",v[i].x,v[i].y);
		
	}

}