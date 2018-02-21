#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int a[26];
int main()
{
 string str;
 int maxN = -1;
 while(getline(cin, str)) {
  	for(int i=0; i<str.length(); i++) { 
   		a[str[i] - 'a'] ++;
	}
}
for(int i=0; i<26; i++) {
	if(maxN < a[i]) {
		maxN = a[i];
	} 
}
for(int i=0; i<26; i++) {
	if(maxN == a[i]) {
		printf("%c",i+'a');
}
}
}
