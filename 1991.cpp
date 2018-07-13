#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct tree{
    char value;
    char left;
    char right;
};
tree arr[27];
int preorder(char data){
    int temp;
    temp=data-'A';
    if(arr[temp].left=='.' && arr[temp].right=='.')
        cout<<arr[temp].value;
    else{
        cout<<arr[temp].value;
        if(arr[temp].left!='.')
            preorder(arr[temp].left);
        if(arr[temp].right!='.')
            preorder(arr[temp].right);

    }
    
}
int inorder(char data){
    int temp;
    temp=data-'A';
    if(arr[temp].left=='.' && arr[temp].right=='.')
        cout<<arr[temp].value;
    else{
        
        if(arr[temp].left!='.')
            inorder(arr[temp].left);
        cout<<arr[temp].value;
        if(arr[temp].right!='.')
            inorder(arr[temp].right);

    }
    
}
int postorder(char data){
    int temp;
    temp=data-'A';
    if(arr[temp].left=='.' && arr[temp].right=='.')
        cout<<arr[temp].value;
    else{
        
        if(arr[temp].left!='.')
            postorder(arr[temp].left);
        if(arr[temp].right!='.')
            postorder(arr[temp].right);
        cout<<arr[temp].value;

    }
    
}
int main(){
    int num,temp;
    char a,b,c;
    cin>>num;
    while(num-->0){
        cin>>a>>b>>c;
        temp=a-'A';
        arr[temp].value=a;
        arr[temp].left=b;
        arr[temp].right=c;
    }
    preorder('A');
    cout<<"\n";
    inorder('A');
    cout<<"\n";
    postorder('A');

}